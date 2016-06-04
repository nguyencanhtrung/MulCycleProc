--------------------------------------------------------------------------------
-- TU Kaiserslautern
-- Student: Trung C. Nguyen
--
-- Create Date:   11:28:26 03/31/2016
-- Design Name:   
-- Module Name:   /home/ctnguyen/Works/CPU-2016/src/top_CPU/tb_sixteen_bits_add_sub.vhd
-- Project Name:  
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: thirtytwo_bits_add_sub
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
 
ENTITY tb_thirty_bits_add_sub IS
END tb_thirty_bits_add_sub;
 
ARCHITECTURE behavior OF tb_thirty_bits_add_sub IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT thirtytwo_bits_add_sub
    PORT(
         operand_a : IN  std_logic_vector(31 downto 0);
         operand_b : IN  std_logic_vector(31 downto 0);
         mode : IN  std_logic;
         over_flow : OUT  std_logic;
         carry_out : OUT  std_logic;
         result : INOUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal operand_a : std_logic_vector(31 downto 0) := (others => '0');
   signal operand_b : std_logic_vector(31 downto 0) := (others => '0');
   signal mode : std_logic := '0';

 	--Outputs
   signal overflow : std_logic;
   signal carry_out : std_logic;
   signal result : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
	signal clk	: std_logic;
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: thirtytwo_bits_add_sub PORT MAP (
          operand_a => operand_a,
          operand_b => operand_b,
          mode => mode,
          over_flow => overflow,
          carry_out => carry_out,
          result => result
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
   begin		
		report "Begin of Simulation!";
			-- checking underflow
		operand_a 	<= std_logic_vector(to_signed(-1073741825, 32));
      operand_b 	<= std_logic_vector(to_signed(-1073741824, 32));
			-- checking overflow
	--	operand_a 	<= std_logic_vector(to_signed(1073741824, 32));
   -- operand_b 	<= std_logic_vector(to_signed(1073741824, 32));
      mode 			<= '0';
      wait for clk_period*10;
      -- insert stimulus here 
      for count in 1 to 8 loop
				-- checking underflow
			operand_a <= std_logic_vector(to_signed((to_integer(signed(operand_a)) + 1),32));
				-- checking overflow
	--		operand_a <= std_logic_vector(to_signed((to_integer(signed(operand_a)) - 1),32));
				-- checking subtraction and addition
	--		operand_b <= operand_b xor operand_a;
	--		mode <= not mode;
			wait for clk_period*10;
		end loop;
		report "End of simulation";
		assert false report "Simulation Successful" severity failure;
   end process;

END;
