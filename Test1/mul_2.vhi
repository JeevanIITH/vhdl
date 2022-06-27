
-- VHDL Instantiation Created from source file mul_2.vhd -- 16:16:33 06/14/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT mul_2
	PORT(
		q : IN std_logic_vector(3 downto 0);
		m : IN std_logic_vector(3 downto 0);
		clk : IN std_logic;
		str : IN std_logic;          
		product : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_mul_2: mul_2 PORT MAP(
		q => ,
		m => ,
		clk => ,
		str => ,
		product => 
	);


