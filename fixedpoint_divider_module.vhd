----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student: Trung C. Nguyen
-- 
-- Create Date:    18:50:51 04/05/2016 
-- Design Name: 	 ALU unit
-- Module Name:    fixedpoint_divider_module - Behavioral 
-- Project Name: 	 Multiple Cycle CPU
-- Target Devices: General Platform
-- Tool versions:  Xilinx ISE 14.7
-- Description: 
--					Input: two signed 32-bit numbers
--					Output: signed quotient 32-bit and signed remainder 32-bit
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
-- Revision 1.0 by Waseem Hassan
-- 			Fixing MUX 2:1,  sign_divisor instead of sign_dividend
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.ALL;
--use IEEE.NUMERIC_STD.ALL;

entity fixedpoint_divider_module is
	 Generic (BIT_WIDTH 	: integer := 32);
    Port ( dividend 		: in  STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
           divisor 		: in  STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
           rst 			: in  STD_LOGIC;
           clk 			: in  STD_LOGIC;
           start 			: in  STD_LOGIC;
           quotient 		: out  STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
           remainder 	: out  STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
           done 			: out  STD_LOGIC;
           invalidOp 	: out  STD_LOGIC);
end fixedpoint_divider_module;

architecture Behavioral of fixedpoint_divider_module is
	-- store sign of dividend and divisor
signal sign_dividend, sign_divisor	:	std_logic;
	--signals fed to unsigned divider
signal udiv_dividend				: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
signal udiv_divisor				: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
signal udiv_quotient				: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
signal udiv_remainder			: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
signal udiv_start_en				: STD_LOGIC;
signal udiv_invalidOp			: STD_LOGIC;
signal udiv_done					: STD_LOGIC;
	-- one and two complement ALU
constant ones						: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0) := x"00000001";
constant mode_sub					: STD_LOGIC := '1';	-- subtraction
constant mode_add					: STD_LOGIC := '0';
signal onecmp_dividend			: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
signal onecmp_divisor			: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0); 
signal twocmp_udiv_quotient	: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0); 
signal twocmp_udiv_remainder	: STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0); 
signal ALU_c_out_dummy			: STD_LOGIC;
signal ALU_over_flow_dummy		:	STD_LOGIC;
	-- controller signals
Type state_type is (idle, wait_2complement, enable_udiv, collect_result, complete);
signal state						: state_type;
begin
	-- ### COMBINATIONAL CIRCUIT
		-- INPUTs of unsigned divider
		-- ALU for 1's complement calculation
	one_complement_dividend: entity work.thirtytwo_bits_add_sub
		port map	(
				operand_a 		=> dividend,
				operand_b 		=> ones,
				result 			=>	onecmp_dividend,
				carry_out 		=>	ALU_c_out_dummy,
				over_flow		=> ALU_over_flow_dummy,
				mode				=>	mode_sub);
	one_complement_divisor: entity work.thirtytwo_bits_add_sub
		port map	(
				operand_a 		=> divisor,
				operand_b 		=> ones,
				result 			=>	onecmp_divisor,
				carry_out 		=>	ALU_c_out_dummy,
				over_flow		=> ALU_over_flow_dummy,
				mode				=>	mode_sub);
		-- Extract sign bit
	sign_dividend	<= dividend(BIT_WIDTH - 1);
	sign_divisor	<= divisor(BIT_WIDTH - 1);
		-- MUX 2: 1
	udiv_dividend 	<= dividend 	when sign_dividend = '0'
							else not(onecmp_dividend);
	udiv_divisor 	<= divisor 	when sign_divisor = '0' 		-- Waseem Hassan
							else not(onecmp_divisor);	
		-- Usigned divider
	unsigned_divider: entity work.unsigned_fixedpoint_divider_module
    Port map ( 
				operand_a 	=> udiv_dividend, -- dividend
				operand_b 	=> udiv_divisor,  -- divisor  
				start 		=> udiv_start_en,
				rst 			=> rst,
				clk 			=> clk,
				quotient 	=> udiv_quotient,
				rem_out 		=> udiv_remainder,
				invalidOp	=> udiv_invalidOp,											 -- divided by zero
				done 			=> udiv_done);
		-- OUTPUTs unsigned divider
	two_complement_udiv_quotient: entity work.thirtytwo_bits_add_sub
		port map	(
				operand_a 		=> not(udiv_quotient),
				operand_b 		=> ones,
				result 			=>	twocmp_udiv_quotient,
				carry_out 		=>	ALU_c_out_dummy,
				over_flow		=> ALU_over_flow_dummy,
				mode				=>	mode_add);
	two_complement_udiv_remainder: entity work.thirtytwo_bits_add_sub
		port map	(
				operand_a 		=> not(udiv_remainder),
				operand_b 		=> ones,
				result 			=>	twocmp_udiv_remainder,
				carry_out 		=>	ALU_c_out_dummy,
				over_flow		=> ALU_over_flow_dummy,
				mode				=>	mode_add);
	-- ### CONTROLLER
	controller: process(clk,rst)
	variable	sign_check	: std_logic_vector(1 downto 0);
	begin
		if rising_edge(clk) then
			if rst='1' then
					-- Reset Outputs
				done							<= '0';
				invalidOp					<= '0';
				quotient						<= (others =>'0');
				remainder					<= (others =>'0');
					-- Reset internal signals
				state							<= idle;
				udiv_start_en				<= '0';
				sign_check					:= (others => '0');
			else
				case state is
				when idle					=>
					done					<= '0';		
					if (start = '1') then
						state				<= wait_2complement;
						sign_check		:= sign_dividend & sign_divisor;
					else
						state				<= idle;
					end if;
					
				when wait_2complement	=>
					state					<= enable_udiv;
					
				when enable_udiv			=>
					udiv_start_en		<= '1';
					state					<= collect_result;
					
				when collect_result		=>
					udiv_start_en		<= '0';
					if (udiv_done = '1') then
						state				<= complete;
					else
						state				<= collect_result;
					end if;
					
				when complete			   =>
					case sign_check is
						when "00"	=>			-- both dividend and divisor are positive
							quotient 	<= udiv_quotient;
							remainder 	<= udiv_remainder;
							invalidOp 	<= udiv_invalidOp;
						when "01"   =>			-- dividend: positive; divisor: negative
							quotient		<= twocmp_udiv_quotient ; 	-- 2's complement
							remainder 	<= udiv_remainder;
							invalidOp 	<= udiv_invalidOp;
						when "10"   =>			-- dividend: negative; divisor: positive
							quotient 	<= twocmp_udiv_quotient ;
							remainder 	<= twocmp_udiv_remainder;
							invalidOp 	<= udiv_invalidOp;
						when "11"   =>			-- dividend: negative; divisor: negative
							quotient 	<= udiv_quotient;
							remainder 	<= twocmp_udiv_remainder;
							invalidOp 	<= udiv_invalidOp;
						when others	=> 
							null;
					end case;
					done					<= '1';
					state					<= idle;
					when others				=>
						null;
				end case;
			end if;
		end if;
	end process controller;
end architecture;