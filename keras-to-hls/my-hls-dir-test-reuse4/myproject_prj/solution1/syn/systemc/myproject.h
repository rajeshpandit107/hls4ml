// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _myproject_HH_
#define _myproject_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "compute_layer_0_0_0_s.h"
#include "compute_layer_0_0_0_1.h"
#include "relu.h"
#include "sigmoid.h"

namespace ap_rtl {

struct myproject : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<18> > data_0_V;
    sc_in< sc_lv<18> > data_1_V;
    sc_in< sc_lv<18> > data_2_V;
    sc_in< sc_lv<18> > data_3_V;
    sc_in< sc_lv<18> > data_4_V;
    sc_in< sc_lv<18> > data_5_V;
    sc_in< sc_lv<18> > data_6_V;
    sc_in< sc_lv<18> > data_7_V;
    sc_in< sc_lv<18> > data_8_V;
    sc_in< sc_lv<18> > data_9_V;
    sc_out< sc_lv<18> > res_0_V;
    sc_out< sc_logic > res_0_V_ap_vld;
    sc_out< sc_lv<16> > const_size_in;
    sc_out< sc_logic > const_size_in_ap_vld;
    sc_out< sc_lv<16> > const_size_out;
    sc_out< sc_logic > const_size_out_ap_vld;


    // Module declarations
    myproject(sc_module_name name);
    SC_HAS_PROCESS(myproject);

    ~myproject();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    compute_layer_0_0_0_s* grp_compute_layer_0_0_0_s_fu_145;
    compute_layer_0_0_0_1* grp_compute_layer_0_0_0_1_fu_169;
    relu* call_ret2_relu_fu_205;
    sigmoid* grp_sigmoid_fu_241;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage6;
    sc_signal< sc_lv<18> > logits1_0_V_reg_539;
    sc_signal< sc_lv<18> > logits1_1_V_reg_544;
    sc_signal< sc_lv<18> > logits1_2_V_reg_549;
    sc_signal< sc_lv<18> > logits1_3_V_reg_554;
    sc_signal< sc_lv<18> > logits1_4_V_reg_559;
    sc_signal< sc_lv<18> > logits1_5_V_reg_564;
    sc_signal< sc_lv<18> > logits1_6_V_reg_569;
    sc_signal< sc_lv<18> > logits1_7_V_reg_574;
    sc_signal< sc_lv<18> > logits1_8_V_reg_579;
    sc_signal< sc_lv<18> > logits1_9_V_reg_584;
    sc_signal< sc_lv<18> > logits1_10_V_reg_589;
    sc_signal< sc_lv<18> > logits1_11_V_reg_594;
    sc_signal< sc_lv<18> > logits1_12_V_reg_599;
    sc_signal< sc_lv<18> > logits1_13_V_reg_604;
    sc_signal< sc_lv<18> > logits1_14_V_reg_609;
    sc_signal< sc_lv<18> > logits1_15_V_reg_614;
    sc_signal< sc_lv<18> > logits1_16_V_reg_619;
    sc_signal< sc_lv<18> > logits1_17_V_reg_624;
    sc_signal< sc_lv<18> > logits1_18_V_reg_629;
    sc_signal< sc_lv<18> > logits1_19_V_reg_634;
    sc_signal< sc_lv<18> > logits1_20_V_reg_639;
    sc_signal< sc_lv<18> > logits1_21_V_reg_644;
    sc_signal< sc_lv<18> > logits1_22_V_reg_649;
    sc_signal< sc_lv<18> > logits1_23_V_reg_654;
    sc_signal< sc_lv<18> > logits1_24_V_reg_659;
    sc_signal< sc_lv<18> > logits1_25_V_reg_664;
    sc_signal< sc_lv<18> > logits1_26_V_reg_669;
    sc_signal< sc_lv<18> > logits1_27_V_reg_674;
    sc_signal< sc_lv<18> > logits1_28_V_reg_679;
    sc_signal< sc_lv<18> > logits1_29_V_reg_684;
    sc_signal< sc_lv<18> > logits1_30_V_reg_689;
    sc_signal< sc_lv<18> > logits1_31_V_reg_694;
    sc_signal< sc_lv<18> > layer1_out_0_V_reg_699;
    sc_signal< sc_lv<18> > layer1_out_1_V_reg_704;
    sc_signal< sc_lv<18> > layer1_out_2_V_reg_709;
    sc_signal< sc_lv<18> > layer1_out_3_V_reg_714;
    sc_signal< sc_lv<18> > layer1_out_4_V_reg_719;
    sc_signal< sc_lv<18> > layer1_out_5_V_reg_724;
    sc_signal< sc_lv<18> > layer1_out_6_V_reg_729;
    sc_signal< sc_lv<18> > layer1_out_7_V_reg_734;
    sc_signal< sc_lv<18> > layer1_out_8_V_reg_739;
    sc_signal< sc_lv<18> > layer1_out_9_V_reg_744;
    sc_signal< sc_lv<18> > layer1_out_10_V_reg_749;
    sc_signal< sc_lv<18> > layer1_out_11_V_reg_754;
    sc_signal< sc_lv<18> > layer1_out_12_V_reg_759;
    sc_signal< sc_lv<18> > layer1_out_13_V_reg_764;
    sc_signal< sc_lv<18> > layer1_out_14_V_reg_769;
    sc_signal< sc_lv<18> > layer1_out_15_V_reg_774;
    sc_signal< sc_lv<18> > layer1_out_16_V_reg_779;
    sc_signal< sc_lv<18> > layer1_out_17_V_reg_784;
    sc_signal< sc_lv<18> > layer1_out_18_V_reg_789;
    sc_signal< sc_lv<18> > layer1_out_19_V_reg_794;
    sc_signal< sc_lv<18> > layer1_out_20_V_reg_799;
    sc_signal< sc_lv<18> > layer1_out_21_V_reg_804;
    sc_signal< sc_lv<18> > layer1_out_22_V_reg_809;
    sc_signal< sc_lv<18> > layer1_out_23_V_reg_814;
    sc_signal< sc_lv<18> > layer1_out_24_V_reg_819;
    sc_signal< sc_lv<18> > layer1_out_25_V_reg_824;
    sc_signal< sc_lv<18> > layer1_out_26_V_reg_829;
    sc_signal< sc_lv<18> > layer1_out_27_V_reg_834;
    sc_signal< sc_lv<18> > layer1_out_28_V_reg_839;
    sc_signal< sc_lv<18> > layer1_out_29_V_reg_844;
    sc_signal< sc_lv<18> > layer1_out_30_V_reg_849;
    sc_signal< sc_lv<18> > layer1_out_31_V_reg_854;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_1_fu_169_ap_return;
    sc_signal< sc_lv<18> > logits2_0_V_reg_859;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0_preg;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_logic > grp_compute_layer_0_0_0_s_fu_145_ap_start;
    sc_signal< sc_logic > grp_compute_layer_0_0_0_s_fu_145_ap_done;
    sc_signal< sc_logic > grp_compute_layer_0_0_0_s_fu_145_ap_idle;
    sc_signal< sc_logic > grp_compute_layer_0_0_0_s_fu_145_ap_ready;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_0;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_1;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_2;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_3;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_4;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_5;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_6;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_7;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_8;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_9;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_10;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_11;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_12;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_13;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_14;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_15;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_16;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_17;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_18;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_19;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_20;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_21;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_22;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_23;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_24;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_25;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_26;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_27;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_28;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_29;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_30;
    sc_signal< sc_lv<18> > grp_compute_layer_0_0_0_s_fu_145_ap_return_31;
    sc_signal< sc_logic > grp_compute_layer_0_0_0_1_fu_169_ap_start;
    sc_signal< sc_logic > grp_compute_layer_0_0_0_1_fu_169_ap_done;
    sc_signal< sc_logic > grp_compute_layer_0_0_0_1_fu_169_ap_idle;
    sc_signal< sc_logic > grp_compute_layer_0_0_0_1_fu_169_ap_ready;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_0;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_1;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_2;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_3;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_4;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_5;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_6;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_7;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_8;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_9;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_10;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_11;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_12;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_13;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_14;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_15;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_16;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_17;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_18;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_19;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_20;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_21;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_22;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_23;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_24;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_25;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_26;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_27;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_28;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_29;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_30;
    sc_signal< sc_lv<18> > call_ret2_relu_fu_205_ap_return_31;
    sc_signal< sc_logic > grp_sigmoid_fu_241_ap_start;
    sc_signal< sc_logic > grp_sigmoid_fu_241_ap_done;
    sc_signal< sc_logic > grp_sigmoid_fu_241_ap_idle;
    sc_signal< sc_logic > grp_sigmoid_fu_241_ap_ready;
    sc_signal< sc_lv<10> > grp_sigmoid_fu_241_ap_return;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< sc_logic > ap_grp_compute_layer_0_0_0_s_fu_145_ap_start;
    sc_signal< sc_logic > ap_reg_grp_compute_layer_0_0_0_1_fu_169_ap_start;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_reg_grp_sigmoid_fu_241_ap_start;
    sc_signal< sc_logic > ap_pipeline_idle_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_pp0_stage0;
    static const sc_lv<7> ap_ST_fsm_pp0_stage1;
    static const sc_lv<7> ap_ST_fsm_pp0_stage2;
    static const sc_lv<7> ap_ST_fsm_pp0_stage3;
    static const sc_lv<7> ap_ST_fsm_pp0_stage4;
    static const sc_lv<7> ap_ST_fsm_pp0_stage5;
    static const sc_lv<7> ap_ST_fsm_pp0_stage6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<16> ap_const_lv16_A;
    static const sc_lv<16> ap_const_lv16_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_done();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_grp_compute_layer_0_0_0_s_fu_145_ap_start();
    void thread_ap_idle();
    void thread_ap_pipeline_idle_pp0();
    void thread_ap_ready();
    void thread_const_size_in();
    void thread_const_size_in_ap_vld();
    void thread_const_size_out();
    void thread_const_size_out_ap_vld();
    void thread_grp_compute_layer_0_0_0_1_fu_169_ap_start();
    void thread_grp_compute_layer_0_0_0_s_fu_145_ap_start();
    void thread_grp_sigmoid_fu_241_ap_start();
    void thread_res_0_V();
    void thread_res_0_V_ap_vld();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
