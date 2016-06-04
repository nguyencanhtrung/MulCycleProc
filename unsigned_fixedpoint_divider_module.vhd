----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student:  Waseen Hassan and Trung C. Nguyen
-- 
-- Create Date:    22:21:56 04/04/2016 
-- Design Name: 	 ALU unit
-- Module Name:    unsigned_fixedpoint_divider_module - Behavioral 
-- Project Name:   Pipeline CPU
-- Target Devices: 
-- Tool versions: 
-- Description: 
--                 Divider of two BIT_WIDTH numbers (default = 16 bits)
--						 If want to change the BIT_WIDTH, need to change the add/sub
--   					 module supporting BIT_WIDTH number add/subtraction
--						 A : B -- A is a dividend and B is a divisor
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Revision 1.0 - Trung C. Nguyen :  
--		reset counter in the wait_state
--		change output interface (quotient and rem_out)
--		fix upper bound of interation (change from > 17 to = 16)
--		add generic
--		update invalidOp
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.ALL;
use IEEE.NUMERIC_STD.ALL;

entity unsigned_fixedpoint_divider_module is
	 Generic ( BIT_WIDTH : integer := 32);
    Port ( operand_a : in 	STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0); -- dividend
           operand_b : in 	STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0); -- divisor  
           start 		: in  STD_LOGIC;
			  rst 		: in  STD_LOGIC;
           clk 		: in  STD_LOGIC;
			  quotient 	: out STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
			  rem_out 	: out STD_LOGIC_VECTOR (BIT_WIDTH - 1 downto 0);
           invalidOp	: out STD_LOGIC;											 -- divided by zero
           done 		: out STD_LOGIC);
           
end unsigned_fixedpoint_divider_module;

architecture Behavioral of unsigned_fixedpoint_divider_module is
		--internal signals for divide operation
signal 	remainder				: std_logic_vector (2*BIT_WIDTH - 1 downto 0);
signal 	divisor					: std_logic_vector (BIT_WIDTH - 1 downto 0);
		--internal signals for subtract operation
signal 	trans_remainder		: std_logic_vector (BIT_WIDTH - 1 downto 0);
signal 	subtraction_result	: std_logic_vector (BIT_WIDTH - 1 downto 0);
signal   dummy_over_flow		: std_logic;
signal	dummy_carry_out		: std_logic;			
signal	operation_signal		: std_logic;			
		--state machine signals
type		state_type is (invalidOp_state, wait_state ,shift_left_remainder,subtract_divisor,wait_state_sub,test_remainder,remainder_positive,remainder_negative,counter_check,done_state);
signal 	state 					: state_type;
		-- constants
constant zeros						:	std_logic_vector(BIT_WIDTH - 1 downto 0) := (others => '0');
		
begin
		-- one needs to change if changing BIT_WIDTH, by default 16-bit add/sub
	add_sub_instance: entity thirtytwo_bits_add_sub
	port map (
				operand_a 	=>	trans_remainder,
				operand_b	=>	divisor,
				result		=>	subtraction_result,
				carry_out	=>	dummy_carry_out,
				over_flow	=> dummy_over_flow,
				mode			=>	operation_signal
				);
      -- Untouched part when changing BIT_WIDTH     
	divide_process: process (clk, rst)
	variable counter 						: integer:=0;
	begin
		if rising_edge(clk) then
			if rst='1' then
					-- Reset Outputs
				done											<= '0';
				invalidOp									<= '0';
				quotient										<= (others =>'0');
				rem_out										<= (others =>'0');
					-- Reset internal signals
				remainder									<= (others =>'0');
				divisor										<= (others => '0');
				trans_remainder							<= (others => '0');
				dummy_carry_out							<= '0';
				operation_signal							<=	'1';		--by default subtract
				counter										:=  0;
				state 										<= wait_state;
			end if;
				case state is
					when invalidOp_state				=>
						invalidOp							<= '1';
						state									<= wait_state;
					
					when wait_state				 	=>
						invalidOp							<= '0';
						if start = '1' then
							if (operand_b = zeros) then
								state							<= invalidOp_state;				
							else
								remainder(2*BIT_WIDTH - 1 downto BIT_WIDTH)	<= (others => '0');
								remainder(BIT_WIDTH -1 downto 0)					<= operand_a;
								divisor													<= operand_b;	
								state 													<= shift_left_remainder;
							end if;
						else
							state 													<= wait_state;
						end if;
						done															<= '0';			
						counter														:=  0;   -- Trung C. Nguyen
						
					when shift_left_remainder 		=>						
						remainder							<= to_stdlogicvector(to_bitvector(remainder) sll 1);
						state 								<= subtract_divisor;
						
					when subtract_divisor			=>
						trans_remainder					<= remainder (2*BIT_WIDTH - 1 downto BIT_WIDTH);
						state 								<= wait_state_sub;
						
					when wait_state_sub				=>
						state									<= test_remainder;
						
					when test_remainder				=>
						if subtraction_result(BIT_WIDTH - 1) = '1' then
							state															<=	remainder_negative;
						else 
							remainder (2*BIT_WIDTH - 1 downto BIT_WIDTH) 	<=	subtraction_result;
							state															<= remainder_positive;
						end if;
						
					when remainder_positive			=>
							remainder						<= to_stdlogicvector(to_bitvector(remainder) sll 1);
							remainder(0)					<= '1';
							state								<= counter_check;
							
					when remainder_negative			=>
							remainder						<= to_stdlogicvector(to_bitvector(remainder) sll 1);
							state								<= counter_check;
							
					when counter_check				=>
							counter 							:= counter + 1;
							if counter = BIT_WIDTH then
								state							<=	done_state;
							else 
								state							<= subtract_divisor;
							end if;
							
					when done_state					=>
							quotient 						<= remainder (BIT_WIDTH - 1 downto 0);
							rem_out							<=	to_stdlogicvector(to_bitvector(remainder(2 * BIT_WIDTH - 1 downto BIT_WIDTH)) srl 1);
							done								<= '1';
							state								<= wait_state;
					when others 						=> null;
				end case;
		end if;
	end process divide_process;
end Behavioral;

