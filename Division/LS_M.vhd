----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:39:19 06/22/2022 
-- Design Name: 
-- Module Name:    LS_M - Behavioral 
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

entity ls_m is
port (  M: in std_logic_vector( 7 downto 0);
		  cl: in std_logic;
		  M_s : in std_logic_vector( 7 downto 0);
		  pout: out std_logic_vector( 7 downto 0)
				);
end ls_m;

architecture Behavioral of ls_m is

signal m_st:std_logic_vector(7 downto 0):=(others=>'0' );
signal m1_st:std_logic_vector ( 7 downto 0):=(others=>'0');
signal store:std_logic_vector ( 7 downto 0):=(others=>'0');
signal c:integer:=6;
signal f:std_logic:='0';
signal init:std_logic:='0';

begin
m_st<=M;
store<=M_s;
m1_st<=store;

process ( cl,M)
	begin
	if rising_edge(cl) then
		if (f='0') then 
			pout<="0000000" & m_st(7);
			f<='1';
		else 
			--m1_st<=M_s;
			pout<=m1_st(6 downto 0) & m_st(c);
			c<=c-1;
		end if; 
	end if;
		
	

	end process;


end Behavioral;

