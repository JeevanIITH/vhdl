----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:07:25 06/22/2022 
-- Design Name: 
-- Module Name:    LS_Q - Behavioral 
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

entity ls_q is
port ( 	clock :in std_logic;
			pin: in std_logic;
			Q : out std_logic_vector
				);
end ls_q;

architecture Behavioral of ls_q is
signal q_st:std_logic_vector(7 downto 0):=(others=>'0');
signal c:integer:=0;
begin
process ( clock,pin)
	begin
		if rising_edge(clock) then
			q_st<=q_st(6 downto 0) & pin;
			c<=c+1;
			if (c=7) then
				Q<=q_st;
			end if;
		end if;
	end process;



end Behavioral;

