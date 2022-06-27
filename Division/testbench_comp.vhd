----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:10:02 06/18/2022 
-- Design Name: 
-- Module Name:    testbench_comp - Behavioral 
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

entity testbench_comp is
end testbench_comp;

architecture Behavioral of testbench_comp is

COMPONENT comparator
	PORT(
		a : IN std_logic_vector(7 downto 0);
		b : IN std_logic_vector(7 downto 0);          
		r : OUT std_logic
		);
	END COMPONENT;

	signal a,b:std_logic_vector(7 downto 0);
	signal r:std_logic;
begin
Inst_comparator: comparator PORT MAP(
		a =>a ,
		b => b,
		r => r
	);

a<="00001011";
b<="00001010";


end Behavioral;

