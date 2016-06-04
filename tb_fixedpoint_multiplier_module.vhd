--------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student: Trung C. Nguyen
--
-- Create Date:   11:10:44 04/04/2016
-- Design Name:   
-- Module Name:   /home/ctnguyen/Works/CPU-2016/tested_src/top_CPU/tb_fixedpoint_multiplier_module.vhd
-- Project Name:  top_CPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fixedpoint_multiplier_module
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY tb_fixedpoint_multiplier_module IS
END tb_fixedpoint_multiplier_module;
 
ARCHITECTURE behavior OF tb_fixedpoint_multiplier_module IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fixedpoint_multiplier_module
    PORT(
         multiplicand : IN  std_logic_vector(31 downto 0);
         multiplier : IN  std_logic_vector(31 downto 0);
         rst : IN  std_logic;
         clk : IN  std_logic;
         start : IN  std_logic;
         done : OUT  std_logic;
         product : OUT  std_logic_vector(63 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal multiplicand 	: std_logic_vector(31 downto 0) := (others => '0');
   signal multiplier 	: std_logic_vector(31 downto 0) := (others => '0');
   signal rst 				: std_logic := '0';
   signal clk 				: std_logic := '0';
   signal start 			: std_logic := '0';

 	--Outputs
   signal done 			: std_logic;
   signal product 		: std_logic_vector(63 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fixedpoint_multiplier_module PORT MAP (
          multiplicand 	=> multiplicand,
          multiplier 	=> multiplier,
          rst 				=> rst,
          clk 				=> clk,
          start 			=> start,
          done 			=> done,
          product 		=> product
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

    -- Stimulus process
   stim_proc: process
	variable counter	: integer;
   begin		
		rst 					<= '1';
		wait for clk_period * 10;
		rst 					<= '0';
		counter 				:= 0;
		multiplicand 		<= x"0000FF0A";
		multiplier 			<= x"0000F0B0";
		wait for 10 * clk_period;
		
		while (counter <= 50) loop
			multiplicand 	<= std_logic_vector(to_signed((to_integer(signed(multiplicand)) + 17),32));
			multiplier 		<= std_logic_vector(to_signed((to_integer(signed(multiplier)) + 13), 32));
			start 			<= '1';	
			wait for clk_period;
			start 			<= '0';
			while(done = '0') loop
				wait for clk_period;
			end loop;
			counter := counter + 1;
		end loop;
		assert false report "Simulation Successful" severity failure;
   end process;

END;
