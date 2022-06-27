----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:24:56 06/13/2022 
-- Design Name: 
-- Module Name:    Q - Behavioral 
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

entity Q is
port ( pin:in std_logic_vector(3 downto 0);
		str:in std_logic:='0';
			pout:out std_logic);
end Q;

architecture Behavioral of Q is
component RS_q is 
port ( pin:in std_logic_vector(3 downto 0);
			clk:in std_logic;
			str:in std_logic:='0';
			pout:out std_logic   );
end component;

component clock is 
port ( clk:out std_logic );
end component;
signal clk_t:std_logic;

begin
clk1:clock port map ( clk_t);
rsq:RS_q port map ( pin,clk_t,str,pout);
end Behavioral;

