----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:22:50 06/16/2022 
-- Design Name: 
-- Module Name:    comparator - Behavioral 
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

entity comparator is
port (   a:in std_logic_vector(7 downto 0);
			b:in std_logic_vector(7 downto 0);
			r:out std_logic				);
end comparator;

architecture Behavioral of comparator is

begin
	process(a,b)
	begin
		if a>b then 
			r<='1';
		elsif a<b then 
			r<='0';
		end if;

	end process;

end Behavioral;

