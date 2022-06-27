--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:11:41 06/27/2022
-- Design Name:   
-- Module Name:   D:/vhdl_test_ise-/zero_ex/t_xte.vhd
-- Project Name:  zero_ex
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: xte
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
 
ENTITY t_xte IS
END t_xte;
 
ARCHITECTURE behavior OF t_xte IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT xte
    PORT(
         a : IN  std_logic_vector(7 downto 0);
         b : IN  std_logic_vector(7 downto 0);
         x : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(7 downto 0) := (others => '0');
   signal b : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal x : std_logic_vector(2 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: xte PORT MAP (
          a => a,
          b => b,
          x => x
        );

   
 

   -- Stimulus process
   stim_proc: process
   begin		
      a<="10011000";
		b<="01010100";
      wait;
   end process;

END;
