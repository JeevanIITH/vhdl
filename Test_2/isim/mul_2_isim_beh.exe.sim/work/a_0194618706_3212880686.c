/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/vhdl_test_ise-/Test_2/sum.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_0194618706_3212880686_p_0(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t1 = (t0 + 4516U);
    t5 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t6 = (t3 + t5);
    t7 = (t0 + 1488U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t6;
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1608U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 - 1);
    t1 = (t0 + 1608U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t5;
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, t3, 8);
    t4 = (t0 + 2992);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    t1 = (t0 + 2912);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void work_a_0194618706_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0194618706_3212880686_p_0};
	xsi_register_didat("work_a_0194618706_3212880686", "isim/mul_2_isim_beh.exe.sim/work/a_0194618706_3212880686.didat");
	xsi_register_executes(pe);
}
