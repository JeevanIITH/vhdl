----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:12:48 06/12/2022 
-- Design Name: 
-- Module Name:    clock - Behavioral 
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

entity clock is
port ( clk:out std_logic );
end clock;

architecture Behavioral of clock is
constant cycles:integer :=8;
constant clk_hz : integer := 100e6;
constant clk_period : time := 1 sec / clk_hz;
signal clk_t:std_logic:='0';
begin
process
begin
	for i in 1 to cycles loop
	  wait for clk_period / 2;
	  if clk_t = '1' then
		 clk_t <= '0';
		 clk<='0';
	  else
		 clk_t <= '1';
		 clk<='1';
	  end if;
	  end loop;
  
end process;
end Behavioral;

