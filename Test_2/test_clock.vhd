----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:34:09 06/15/2022 
-- Design Name: 
-- Module Name:    test_clock - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity test_clock is
    Port ( clk : in  STD_LOGIC;
			  pin:in std_logic_vector(3 downto 0);
           pout : out  STD_LOGIC);
end test_clock;
architecture Behavioral of test_clock is

begin
process(clk,pin)
	begin 
	if rising_edge(clk) then 
	pout<='1';
	end if;
end process;

end Behavioral;

