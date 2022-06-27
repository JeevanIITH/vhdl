----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:51:50 06/22/2022 
-- Design Name: 
-- Module Name:    comp_sub - Behavioral 
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
use ieee.std_logic_unsigned.all;
--use ieee.numeric_std_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity comp_sub is
port (   D : in std_logic_vector(7 downto 0);
			M : in std_logic_vector(7 downto 0);
			
			Q : out std_logic;
			S: out std_logic_vector(7 downto 0);
			clock: in std_logic
				);
end comp_sub;

architecture Behavioral of comp_sub is

begin
		process(D,M,clock )
		begin
		if ( M>D ) then 
			Q<='1';
			
				S<=M(7 downto 0)-D(7 downto 0);
			
		else 
			Q<='0';
			
				S<=M(7 downto 0)-"00000000";
			
		
		end if;
		
		end process;



end Behavioral;

