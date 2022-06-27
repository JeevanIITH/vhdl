----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:23:04 06/13/2022 
-- Design Name: 
-- Module Name:    sum - Behavioral 
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
USE ieee.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sum is
	port (   pin: in std_logic_vector(7 downto 0);
				pout: out std_logic_vector(7 downto 0)  );
end sum;

architecture Behavioral of sum is

begin
	process(pin)
	variable sum:integer:=0;
	variable n:integer:=3;
	begin
	sum:=sum+to_integer(unsigned(pin));
	n:=n-1;
	pout<=std_logic_vector(to_unsigned( sum,8)  );
	end process;
end Behavioral;

