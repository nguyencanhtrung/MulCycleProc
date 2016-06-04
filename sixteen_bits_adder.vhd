----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Engineer: Trung C. Nguyen
-- 
-- Create Date:    03:58:33 03/30/2016 
-- Design Name: 	 ALU module
-- Module Name:    sixteen_bits_adder - Behavioral 
-- Project Name: 	 Pipeline CPU 2016
-- Target Devices: General Platform
-- Tool versions:  Xilinx ISE 14.7
-- Description: 
-- 	Input	: two 16-bit signed number (2's complement form)
--				  1-bit carry in
--		Output: 16-bit signed number (result)
--		Using Carry Look Ahead Adder technique
--
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

entity sixteen_bits_adder is
    Port ( operand_a : in  STD_LOGIC_VECTOR (15 downto 0);
           operand_b : in  STD_LOGIC_VECTOR (15 downto 0);
           carry_in 	: in  STD_LOGIC;
			  sum 		: inout STD_LOGIC_VECTOR (15 downto 0);
           sixteen_P : out STD_LOGIC;
			  sixteen_G	: out STD_LOGIC);
			  
end sixteen_bits_adder;

architecture Behavioral of sixteen_bits_adder is
signal p_group, g_group	: std_logic_vector(3 downto 0);
signal c_group				: std_logic_vector(4 downto 1);
begin
	first_4bits: entity work.four_bits_CLA_adder
    Port map ( a 			=> operand_a(3 downto 0),	
					b 			=> operand_b(3 downto 0),
					c_in 		=> carry_in,
					p_group 	=> p_group(0),
					g_group 	=> g_group(0),
					sum 		=> sum(3 downto 0));
	second_4bits: entity work.four_bits_CLA_adder
    Port map ( a 			=> operand_a(7 downto 4),	
					b 			=> operand_b(7 downto 4),
					c_in 		=> c_group(1),
					p_group 	=> p_group(1),
					g_group 	=> g_group(1),
					sum 		=> sum(7 downto 4));
	third_4bits: entity work.four_bits_CLA_adder
    Port map ( a 			=> operand_a(11 downto 8),	
					b 			=> operand_b(11 downto 8),
					c_in 		=> c_group(2),
					p_group 	=> p_group(2),
					g_group 	=> g_group(2),
					sum 		=> sum(11 downto 8));
	fourth_4bits: entity work.four_bits_CLA_adder
    Port map ( a 			=> operand_a(15 downto 12),	
					b 			=> operand_b(15 downto 12),
					c_in 		=> c_group(3),
					p_group 	=> p_group(3),
					g_group 	=> g_group(3),
					sum 		=> sum(15 downto 12));
	CLA_block: entity work.carry_look_ahead_block
	Port map ( 	c_in 		=> carry_in,
					p_group 	=> p_group,
					g_group 	=> g_group,
					C_OUT 	=> c_group,
					G_OUT		=> sixteen_G,
					P_OUT		=> sixteen_P);
end Behavioral;

