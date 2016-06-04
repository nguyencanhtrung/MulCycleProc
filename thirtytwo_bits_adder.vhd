----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student: Trung C. Nguyen 
-- 
-- Create Date:    20:02:33 04/08/2016 
-- Design Name:    
-- Module Name:    thirtytwo_bits_adder - Behavioral 
-- Project Name:   Multiple Cycle CPU
-- Target Devices: 
-- Tool versions: 
-- Description: 
--				Personal project
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use work.all;

entity thirtytwo_bits_adder is
    Port ( operand_a : in  	STD_LOGIC_VECTOR (31 downto 0);
           operand_b : in  	STD_LOGIC_VECTOR (31 downto 0);
           carry_in 	: in  	STD_LOGIC;
           sum 		: inout  STD_LOGIC_VECTOR (31 downto 0);
           over_flow : out  	STD_LOGIC;
           carry_out : out  	STD_LOGIC);
end thirtytwo_bits_adder;

architecture Behavioral of thirtytwo_bits_adder is
	-- internal signals
signal P16, G16		:	std_logic_vector(3 downto 0);
signal C16				:	std_logic_vector(4 downto 1);
	-- dummy signals
signal dummyG, dummyP:	std_logic;

begin
	first_16bits_block: entity work.sixteen_bits_adder
    Port map ( 
				operand_a 	=> operand_a(15 downto 0),
				operand_b 	=> operand_b(15 downto 0),
				carry_in  	=> carry_in,
				sum 		 	=> sum(15 downto 0),
				sixteen_P 	=> P16(0),
				sixteen_G 	=> G16(0));
	second_16bits_block: entity work.sixteen_bits_adder
    Port map ( 
				operand_a 	=> operand_a(31 downto 16),
				operand_b 	=> operand_b(31 downto 16),
				carry_in  	=> C16(1),
				sum 		 	=> sum(31 downto 16),
				sixteen_P 	=> P16(1),
				sixteen_G 	=> G16(1));
	CLA_block: entity work.carry_look_ahead_block
	 Port map ( 
				c_in 			=> carry_in,
				p_group 		=> P16,
				g_group 		=> G16,
				C_OUT 		=> C16,
				G_OUT			=> dummyG,
				P_OUT			=> dummyP);
		-- neglect two others 16-bits adders
	P16(3 downto 2) 		<= "00";
	G16(3 downto 2) 		<= "00";
		-- carry out of 32 bits adder
	carry_out				<= C16(2);
		-- Overflow detection
	over_flow				<=	(not(operand_a(31)) and not(operand_b(31)) and sum(31)) 
									or (operand_a(31) and operand_b(31) and not(sum(31)));
end Behavioral;

