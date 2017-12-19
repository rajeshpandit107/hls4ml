-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity sigmoid is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    data_V_read : IN STD_LOGIC_VECTOR (17 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (9 downto 0) );
end;


architecture behav of sigmoid is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv15_1 : STD_LOGIC_VECTOR (14 downto 0) := "000000000000001";
    constant ap_const_lv15_200 : STD_LOGIC_VECTOR (14 downto 0) := "000001000000000";
    constant ap_const_lv14_200 : STD_LOGIC_VECTOR (13 downto 0) := "00001000000000";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv14_0 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000000";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv10_3FF : STD_LOGIC_VECTOR (9 downto 0) := "1111111111";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (0 downto 0) := "1";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC_VECTOR (0 downto 0);
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal sigmoid_table2_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal sigmoid_table2_ce0 : STD_LOGIC;
    signal sigmoid_table2_q0 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_7_fu_172_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_7_reg_203 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_8_reg_208 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_s_fu_198_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_1_fu_78_p4 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_3_fu_100_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_Result_2_fu_104_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal ret_V_cast_fu_88_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_5_fu_112_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ret_V_fu_118_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_2_fu_92_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_s_fu_124_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal p_2_fu_132_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_4_fu_140_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal index_fu_144_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_6_fu_156_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal index_cast_fu_150_p2 : STD_LOGIC_VECTOR (13 downto 0);
    signal p_1_fu_164_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal icmp_fu_186_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal index_1_fu_191_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_pipeline_idle_pp0 : STD_LOGIC;

    component sigmoid_sigmoid_tmb6 IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR (9 downto 0) );
    end component;



begin
    sigmoid_table2_U : component sigmoid_sigmoid_tmb6
    generic map (
        DataWidth => 10,
        AddressRange => 1024,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => sigmoid_table2_address0,
        ce0 => sigmoid_table2_ce0,
        q0 => sigmoid_table2_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))))) then 
                    ap_enable_reg_pp0_iter1 <= ap_start;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0)))) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))))) then
                tmp_7_reg_203 <= tmp_7_fu_172_p1;
                tmp_8_reg_208 <= p_1_fu_164_p3(13 downto 10);
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_enable_reg_pp0_iter0, ap_pipeline_idle_pp0)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_pp0_stage0 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when others =>  
                ap_NS_fsm <= "X";
        end case;
    end process;
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(0 downto 0);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter2)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_1 = ap_enable_reg_pp0_iter0)) or (not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_enable_reg_pp0_iter2)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_reg_pp0_iter0 <= ap_start;

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_0 = ap_enable_reg_pp0_iter0) and (ap_const_logic_0 = ap_enable_reg_pp0_iter1) and (ap_const_logic_0 = ap_enable_reg_pp0_iter2))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_pipeline_idle_pp0_assign_proc : process(ap_start, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_const_logic_0 = ap_enable_reg_pp0_iter0) and (ap_const_logic_0 = ap_enable_reg_pp0_iter1))) then 
            ap_pipeline_idle_pp0 <= ap_const_logic_1;
        else 
            ap_pipeline_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and (ap_const_logic_1 = ap_enable_reg_pp0_iter0) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= sigmoid_table2_q0;
    icmp_fu_186_p2 <= "0" when (tmp_8_reg_208 = ap_const_lv4_0) else "1";
    index_1_fu_191_p3 <= 
        ap_const_lv10_3FF when (icmp_fu_186_p2(0) = '1') else 
        tmp_7_reg_203;
    index_cast_fu_150_p2 <= std_logic_vector(unsigned(ap_const_lv14_200) + unsigned(tmp_4_fu_140_p1));
    index_fu_144_p2 <= std_logic_vector(unsigned(ap_const_lv15_200) + unsigned(p_2_fu_132_p3));
    p_1_fu_164_p3 <= 
        ap_const_lv14_0 when (tmp_6_fu_156_p3(0) = '1') else 
        index_cast_fu_150_p2;
    p_2_fu_132_p3 <= 
        p_s_fu_124_p3 when (tmp_2_fu_92_p3(0) = '1') else 
        ret_V_cast_fu_88_p1;
    p_Result_2_fu_104_p3 <= (tmp_3_fu_100_p1 & ap_const_lv6_0);
    p_s_fu_124_p3 <= 
        ret_V_cast_fu_88_p1 when (tmp_5_fu_112_p2(0) = '1') else 
        ret_V_fu_118_p2;
        ret_V_cast_fu_88_p1 <= std_logic_vector(resize(signed(tmp_1_fu_78_p4),15));

    ret_V_fu_118_p2 <= std_logic_vector(unsigned(ap_const_lv15_1) + unsigned(ret_V_cast_fu_88_p1));
    sigmoid_table2_address0 <= tmp_s_fu_198_p1(10 - 1 downto 0);

    sigmoid_table2_ce0_assign_proc : process(ap_start, ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_CS_fsm_pp0_stage0 = ap_const_lv1_1) and not(((ap_const_logic_1 = ap_enable_reg_pp0_iter0) and (ap_start = ap_const_logic_0))) and (ap_const_logic_1 = ap_enable_reg_pp0_iter1))) then 
            sigmoid_table2_ce0 <= ap_const_logic_1;
        else 
            sigmoid_table2_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_1_fu_78_p4 <= data_V_read(17 downto 4);
    tmp_2_fu_92_p3 <= data_V_read(17 downto 17);
    tmp_3_fu_100_p1 <= data_V_read(4 - 1 downto 0);
    tmp_4_fu_140_p1 <= p_2_fu_132_p3(14 - 1 downto 0);
    tmp_5_fu_112_p2 <= "1" when (p_Result_2_fu_104_p3 = ap_const_lv10_0) else "0";
    tmp_6_fu_156_p3 <= index_fu_144_p2(14 downto 14);
    tmp_7_fu_172_p1 <= p_1_fu_164_p3(10 - 1 downto 0);
    tmp_s_fu_198_p1 <= std_logic_vector(resize(unsigned(index_1_fu_191_p3),64));
end behav;
