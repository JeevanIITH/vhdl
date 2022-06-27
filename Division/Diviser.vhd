----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:22:20 06/16/2022 
-- Design Name: 
-- Module Name:    Diviser - Behavioral 
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

entity Diviser is
port( 
			D:in std_logic_vector(7 downto 0);
			M:in std_logic_vector(7 downto 0);
			clock:in std_logic;
			Q:out std_logic_vector(7 downto 0)
			
				);
end Diviser;

architecture Behavioral of Diviser is

component mem is 
	port ( 	clock:in std_logic;
				pin: in std_logic_vector(7 downto 0);
				pout: out std_logic_vector( 7 downto 0)
						);
end component;
component ls_m is
		port (  M: in std_logic_vector( 7 downto 0);
		  cl: in std_logic;
		  M_s : in std_logic_vector( 7 downto 0);
		  pout: out std_logic_vector( 7 downto 0) );
	end component ;
component ls_q  is
	port ( 	clock :in std_logic;
		pin: in std_logic;
		Q : out std_logic_vector
			);
	end component;
	
	component comp_sub is 
		port (   D : in std_logic_vector(7 downto 0);
			M : in std_logic_vector(7 downto 0);
			Q : out std_logic;
			S: out std_logic_vector(7 downto 0);
			clock:in std_logic
				);
	end component;

signal sub,ls_m_s,mem_sub:std_logic_vector(7 downto 0);
signal q_s:std_logic;

begin
m_p:ls_m port map(M,clock,mem_sub,ls_m_s );
d_p:comp_sub port map(D,ls_m_s,q_s,sub,clock);
q_p:ls_q port map(clock,q_s,Q);
stor:mem port map(clock,sub,mem_sub);
end Behavioral;

