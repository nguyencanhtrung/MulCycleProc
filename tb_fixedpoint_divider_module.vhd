--------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student: Trung C. Nguyen
--
-- Create Date:   04:13:14 04/06/2016
-- Design Name:   
-- Module Name:   /home/ctnguyen/Works/CPU-2016/tested_src/top_CPU/tb_fixedpoint_divider_module.vhd
-- Project Name:  top_CPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fixedpoint_divider_module
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
 
ENTITY tb_fixedpoint_divider_module IS
	Generic (BIT_WIDTH : integer := 32);
END tb_fixedpoint_divider_module;
 
ARCHITECTURE behavior OF tb_fixedpoint_divider_module IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fixedpoint_divider_module
    PORT(
         dividend : IN  std_logic_vector(31 downto 0);
         divisor : IN  std_logic_vector(31 downto 0);
         rst : IN  std_logic;
         clk : IN  std_logic;
         start : IN  std_logic;
         quotient : OUT  std_logic_vector(31 downto 0);
         remainder : OUT  std_logic_vector(31 downto 0);
         done : OUT  std_logic;
         invalidOp : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal dividend : std_logic_vector(31 downto 0) := (others => '0');
   signal divisor : std_logic_vector(31 downto 0) := (others => '0');
   signal rst : std_logic := '0';
   signal clk : std_logic := '0';
   signal start : std_logic := '0';

 	--Outputs
   signal quotient : std_logic_vector(31 downto 0);
   signal remainder : std_logic_vector(31 downto 0);
   signal done : std_logic;
   signal invalidOp : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fixedpoint_divider_module PORT MAP (
          dividend => dividend,
          divisor => divisor,
          rst => rst,
          clk => clk,
          start => start,
          quotient => quotient,
          remainder => remainder,
          done => done,
          invalidOp => invalidOp
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   stim_proc: process	
   variable counter	: integer;
   begin
		rst 					<= '1';
		wait for clk_period * 10;
		rst 					<= '0';
		counter 				:= 0;
			-- need to change when changing BIT_WIDTH
		dividend 			<= x"0000FDF1"; -- dividend
		divisor 				<= x"FFF0FF81"; -- divisor
			-- Untouched
		wait for 10 * clk_period;
		
		while (counter <= 50) loop
			dividend  		<= std_logic_vector(to_signed((to_integer(signed(dividend)) + 37801), BIT_WIDTH ));
			divisor  		<= std_logic_vector(to_signed((to_integer(signed(divisor)) + 28000),BIT_WIDTH));
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
