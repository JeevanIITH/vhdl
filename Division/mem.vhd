----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:16:07 06/23/2022 
-- Design Name: 
-- Module Name:    mem - Behavioral 
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

entity mem is
	port ( 	clock:in std_logic;
				pin: in std_logic_vector(7 downto 0);
				pout: out std_logic_vector( 7 downto 0)
						);
end mem;

architecture Behavioral of mem is
signal reg:std_logic_vector(7 downto 0):="00000000";
signal f:std_logic:='0';

begin
	process( clock,pin)
		begin
		if rising_edge(clock) then 
			if (f='0') then
				f<='1';
			else
				pout<=reg;
				reg<=pin;
			end if;
		end if;
		end process;
end Behavioral;

