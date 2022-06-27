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
static const char *ng0 = "D:/vhdl_test_ise-/Test1/left_shift_8_bit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0910734355_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 1312U);
    t1 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5339);
    t6 = (t0 + 3520);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB3:    t2 = (t0 + 3312);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1032U);
    t9 = *((char **)t2);
    t2 = (t0 + 3392);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1672U);
    t6 = *((char **)t3);
    t3 = (t0 + 3520);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t6, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = (6 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t3 + t17);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3392);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = (5 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t3 + t17);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3392);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t6, 1U, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = (4 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t3 + t17);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3392);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t6, 2U, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = (3 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t3 + t17);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3392);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t6, 3U, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = (2 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t3 + t17);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3392);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t6, 4U, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = (1 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t3 + t17);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3392);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t6, 5U, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t14 = (0 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t3 + t17);
    t1 = *((unsigned char *)t2);
    t6 = (t0 + 3392);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_delta(t6, 6U, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 7U, 1, 0LL);
    goto LAB3;

}


extern void work_a_0910734355_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0910734355_3212880686_p_0};
	xsi_register_didat("work_a_0910734355_3212880686", "isim/mul_2_isim_beh.exe.sim/work/a_0910734355_3212880686.didat");
	xsi_register_executes(pe);
}
