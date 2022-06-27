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
static const char *ng0 = "D:/vhdl_test_ise-/Division/LS_Q.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2239987027_3212880686_p_0(char *t0)
{
    char t11[16];
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = (7 - 6);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4024);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 6;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 6);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t8 = xsi_base_array_concat(t8, t11, t12, (char)97, t3, t13, (char)99, t10, (char)101);
    t17 = (7U + 1U);
    t18 = (8U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t15 = (t0 + 3232);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t8, 8U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t16 = *((int *)t3);
    t23 = (t16 + 1);
    t1 = (t0 + 3296);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    *((int *)t12) = t23;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t16 = *((int *)t3);
    t2 = (t16 == 7);
    if (t2 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB5:    xsi_size_not_matching(8U, t17, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 3360);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t12 = (t9 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t4, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

}


extern void work_a_2239987027_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2239987027_3212880686_p_0};
	xsi_register_didat("work_a_2239987027_3212880686", "isim/t_div_isim_beh.exe.sim/work/a_2239987027_3212880686.didat");
	xsi_register_executes(pe);
}
