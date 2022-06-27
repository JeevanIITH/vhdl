--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:02:33 06/22/2022
-- Design Name:   
-- Module Name:   D:/vhdl_test_ise-/Division/t_ls_m.vhd
-- Project Name:  Division
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: LS_M
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
 
ENTITY t_ls_m IS
END t_ls_m;
 
ARCHITECTURE behavior OF t_ls_m IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT LS_M
    PORT(
         M : IN  std_logic_vector(7 downto 0);
         clock : IN  std_logic;
         M_s : IN  std_logic_vector(7 downto 0);
         pout : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal M : std_logic_vector(7 downto 0) := (others => '0');
   signal clock : std_logic := '0';
   signal M_s : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal pout : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: LS_M PORT MAP (
          M => M,
          clock => clock,
          M_s => M_s,
          pout => pout
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
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
