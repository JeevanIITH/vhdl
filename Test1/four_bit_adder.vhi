
-- VHDL Instantiation Created from source file four_bit_adder.vhd -- 14:50:31 06/14/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT four_bit_adder
	PORT(
		a : IN std_logic_vector(3 downto 0);
		b : IN std_logic_vector(3 downto 0);
		cin : IN std_logic;          
		sum : OUT std_logic_vector(3 downto 0);
		cout : OUT std_logic
		);
	END COMPONENT;

	Inst_four_bit_adder: four_bit_adder PORT MAP(
		a => ,
		b => ,
		cin => ,
		sum => ,
		cout => 
	);


