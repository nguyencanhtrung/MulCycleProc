----------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student:  Trung C. Nguyen
-- 
-- Create Date:    03:23:56 03/30/2016 
-- Design Name: 	 ALU module
-- Module Name:    carry_look_ahead_block - Behavioral 
-- Project Name: 	 Pipeline CPU 2016
-- Target Devices: General Platform
-- Tool versions:  Xilinx ISE 14.7
-- Description: 	Block calculates carry-in(s) which is fed into current stage
--						based on generate and propagate signals of previous stages
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity carry_look_ahead_block is
    Port ( c_in 		: in  	STD_LOGIC;
           p_group 	: in  	STD_LOGIC_VECTOR (3 downto 0);
           g_group 	: in  	STD_LOGIC_VECTOR (3 downto 0);
           C_OUT 		: inout 	STD_LOGIC_VECTOR (4 downto 1);
			  G_OUT	: out		STD_LOGIC;
			  P_OUT	: out		STD_LOGIC);
end carry_look_ahead_block;

architecture Behavioral of carry_look_ahead_block is

begin
	C_OUT(1) <= g_group(0) or (p_group(0) and c_in);
	C_OUT(2) <= g_group(1) or (p_group(1) and C_OUT(1));
	C_OUT(3) <= g_group(2) or (p_group(2) and C_OUT(2));
	C_OUT(4) <= g_group(3) or (p_group(3) and C_OUT(3));
		-- generation and propagation for hierarchical architecture
	G_OUT <= 	g_group(3) or (g_group(2) and p_group(3)) 
					or (g_group(1) and p_group(2) and p_group(3)) 
					or (g_group(0) and p_group(1) and p_group(2) and p_group(3));
	P_OUT <= p_group(0) and p_group(1) and p_group(2) and p_group(3);
end Behavioral;

