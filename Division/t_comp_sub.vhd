--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:13:20 06/22/2022
-- Design Name:   
-- Module Name:   D:/vhdl_test_ise-/Division/t_comp_sub.vhd
-- Project Name:  Division
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: comp_sub
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
 
ENTITY t_comp_sub IS
END t_comp_sub;
 
ARCHITECTURE behavior OF t_comp_sub IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT comp_sub
    PORT(
         D : IN  std_logic_vector(7 downto 0);
         M : IN  std_logic_vector(7 downto 0);
         Q : OUT  std_logic;
         S : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal D : std_logic_vector(7 downto 0) := (others => '0');
   signal M : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal Q : std_logic;
   signal S : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: comp_sub PORT MAP (
          D => D,
          M => M,
          Q => Q,
          S => S
        );

   
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for period*10;

      D<="00000110";
		M<="00001010";

      wait;
   end process;

END;
