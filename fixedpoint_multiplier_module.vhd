----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Engineer: Trung C. Nguyen
-- 
-- Create Date:    09:51:19 04/04/2016 - Ending of semester 3
-- Design Name: 	 ALU unit
-- Module Name:    fixedpoint_multiplier_module - Behavioral 
-- Project Name: 	 Multiple Cycle CPU
-- Target Devices: General Platform
-- Tool versions:  Xilinx ISE 14.7 
-- Description: 	
--			Input : 32-bit signed number (2's complement form)
--			Output: 64-bit signed number (2's complement form)
--			Using Booth method with 2 bits check;
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.all;
use IEEE.NUMERIC_STD.ALL;

entity fixedpoint_multiplier_module is
	 Generic (BIT_WIDTH 	: integer := 32);
    Port ( multiplicand : in  STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
           multiplier 	: in  STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
			  rst				: in  STD_LOGIC;
			  clk				: in  STD_LOGIC;
			  start			: in 	STD_LOGIC;
			  done			: out STD_LOGIC;
           product 		: out STD_LOGIC_VECTOR (2 * BIT_WIDTH - 1 downto 0)
			  );  	
end fixedpoint_multiplier_module;

architecture Behavioral of fixedpoint_multiplier_module is
signal accumulator		:	std_logic_vector(2 * BIT_WIDTH - 1 downto 0);
signal check_bits			:	std_logic_vector(1 downto 0);
	-- ALU signals for addition and subtraction
signal l_half_acc			:	std_logic_vector(BIT_WIDTH - 1 downto 0);
signal ALU_operand		:	std_logic_vector(BIT_WIDTH - 1 downto 0);
signal ALU_mode			:	std_logic;
signal ALU_result 		:	std_logic_vector(BIT_WIDTH - 1 downto 0);
signal ALU_c_out_dummy, ALU_over_flow_dummy : std_logic;
	-- State signals
Type state_type is (idle, init, update_checkbit, check, wait_state, collect_ALU_result, shift_right, complete);
signal nx_state, pre_state: state_type;
BEGIN
	-- one need to change if changing BIT_WIDTH
ALU_block: entity work.thirtytwo_bits_add_sub
		port map	(
				operand_a 		=> l_half_acc,
				operand_b 		=> ALU_operand,
				result 			=>	ALU_result,
				carry_out 		=>	ALU_c_out_dummy,
				over_flow		=> ALU_over_flow_dummy,
				mode				=>	ALU_mode);	
	-- UNTOUCHED part
sequential_block: process(clk, rst, start)
Begin
	if rising_edge(clk) then
		if (rst = '1') then
			pre_state <= idle;
		else
			if(start = '1') then
				pre_state <= init;
			else
				pre_state <= nx_state;
			end if;
		end if;
	end if;
End process sequential_block;

combinational_block: process(pre_state)
variable iteration_counter	:	integer;
Begin
	case pre_state is
		when idle 					=>
			nx_state 			<= idle;
			done 					<= '0';
			l_half_acc			<= (others => '0');
			
		when init 					=>
			check_bits 			<= "00";
			accumulator(2 * BIT_WIDTH - 1 downto BIT_WIDTH) <= (others => '0');
			accumulator(BIT_WIDTH - 1 downto 0)					<= multiplier;
			nx_state 			<= update_checkbit;
			iteration_counter := 0;
			done 					<= '0';
			
		when update_checkbit 	=>
				-- Need l_half_acc since ALU_add_sub is combinational circuit
				-- If using accumulator(31 downto 16) directly as ALU's operand
				-- and update the ALU_result into it; It may cause wrong result;
				-- Example: initially, acc(31 downto 16) = 1 is fed to ALU doing addition
				--          			  other ALU_operand = 3; get ALU_result = 4
				-- 			then, put ALU_result back to acc(31 downto 16) = 4
				--          since, ALU is combinational => it will immediately perform another 
				--          addition, result would be 4 + 3 = 6, and the final result is wrong.
			l_half_acc			<= accumulator(2 * BIT_WIDTH - 1 downto BIT_WIDTH);		
			check_bits 			<= accumulator(0) & check_bits(1);
			nx_state 			<= check;
			
		when check 					=>
			case check_bits is
				when "00" 	=>		-- do nothing
					ALU_mode 	<= '0';
					ALU_operand <= (others => '0');
				when "01" 	=>		-- add Multiplicand
					ALU_mode 	<= '0';
					ALU_operand <= multiplicand;
				when "10" 	=>		-- sub Multiplicand
					ALU_mode 	<= '1';
					ALU_operand <= multiplicand;
				when "11" 	=>		-- do nothing
					ALU_mode 	<= '0';
					ALU_operand <= (others => '0');
				when others =>
					null;
			end case;
			nx_state 			<= wait_state;
		
		when wait_state 			=>
			nx_state 			<= collect_ALU_result;
		
		when collect_ALU_result =>
			accumulator(2 * BIT_WIDTH - 1 downto BIT_WIDTH) 	<= ALU_result;
			nx_state 			<= shift_right;
			
		when shift_right 			=>
			accumulator 		<= to_stdlogicvector(to_bitvector(accumulator) sra 1);
			iteration_counter := iteration_counter + 1;
			if(iteration_counter = BIT_WIDTH) then 
				nx_state 		<= complete;
			else
				nx_state 		<= update_checkbit;
			end if;
			
		when complete 				=>
			done 					<= '1';
			product 				<= accumulator;
			nx_state 			<= idle;
	end case;
End process combinational_block;
end Behavioral;

