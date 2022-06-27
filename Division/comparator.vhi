
-- VHDL Instantiation Created from source file comparator.vhd -- 23:07:08 06/18/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT comparator
	PORT(
		a : IN std_logic_vector(7 downto 0);
		b : IN std_logic_vector(7 downto 0);          
		r : OUT std_logic
		);
	END COMPONENT;

	Inst_comparator: comparator PORT MAP(
		a => ,
		b => ,
		r => 
	);


