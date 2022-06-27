----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:38:02 06/12/2022 
-- Design Name: 
-- Module Name:    LS_clk - Behavioral 
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

entity LS_clk is
port ( pin:in std_logic_vector(7 downto 0);
		 reset:in std_logic ;
		 pout:out std_logic_vector(7 downto 0) );
end LS_clk;

architecture Behavioral of LS_clk is
signal clk_t:std_logic ;


component left_shift_8_bit
port ( pin: in std_logic_vector(7 downto 0);
		 reset: in std_logic;
		 clk: in std_logic;
		 pout: out std_logic_vector(7 downto 0)  );
end component;


component clock 
port ( clk:out std_logic );
end component;

begin
clk0:clock port map(clk_t);
LS:left_shift_8_bit port map(pin,reset,clk_t,pout); 
end Behavioral;

