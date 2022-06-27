--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:44:55 06/23/2022
-- Design Name:   
-- Module Name:   D:/vhdl_test_ise-/Division/t_div.vhd
-- Project Name:  Division
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Diviser
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY t_div IS
END t_div;
 
ARCHITECTURE behavior OF t_div IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Diviser
    PORT(
         D : IN  std_logic_vector(7 downto 0);
         M : IN  std_logic_vector(7 downto 0);
         clock : IN  std_logic;
         Q : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal D : std_logic_vector(7 downto 0) := (others => '0');
   signal M : std_logic_vector(7 downto 0) := (others => '0');
   signal clock : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Diviser PORT MAP (
          D => D,
          M => M,
          clock => clock,
          Q => Q
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		D<="00000110";
		M<="00101010";
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;

      -- insert stimulus here 
		D<="00000110";
		M<="00101010";
		wait for clock_period*10;
		D<="00000110";
		M<="00101010";
		wait for clock_period*10;
		D<="00000110";
		M<="00101010";
		wait for clock_period*10;
		wait for clock_period*10;
		wait for clock_period*10;
		wait for clock_period*10;
		wait for clock_period*10;
		wait for clock_period*10;

      wait;
   end process;

END;
