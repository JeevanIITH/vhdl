----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:26:54 06/09/2022 
-- Design Name: 
-- Module Name:    multiplier - Behavioral 
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
-- Unsigned 16x16-bit Multiplier

-- File: mult_unsigned.vhd

--

library ieee;

use ieee.std_logic_1164.all;

use ieee.std_logic_unsigned.all;

 

entity mult_unsigned is

generic(

 WIDTHA : integer := 4;

 WIDTHB : integer := 4

);

port(

 A   : in  std_logic_vector(WIDTHA - 1 downto 0);

 B   : in  std_logic_vector(WIDTHB - 1 downto 0);

 RES : out std_logic_vector(WIDTHA + WIDTHB - 1 downto 0)

);

end mult_unsigned;

 

architecture beh of mult_unsigned is

begin

RES <= A * B;

end beh;
