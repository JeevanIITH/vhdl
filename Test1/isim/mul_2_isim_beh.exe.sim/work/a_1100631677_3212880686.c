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
static const char *ng0 = "D:/vhdl_test_ise-/Test1/mul_2.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1100631677_3212880686_p_0(char *t0)
{
    char t13[16];
    char t15[16];
    char *t1;
    char *t2;
    unsigned int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    if (-1 == 1)
        goto LAB5;

LAB6:    t3 = 4U;

LAB7:    t4 = (t3 - 4);
    t5 = (t4 * 1);
    t6 = (1U * t5);
    t7 = (t2 + t6);
    t8 = (4U - 7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t10 = (1U * t9);
    memset(t7, (unsigned char)2, t10);
    t11 = (t0 + 1192U);
    t12 = *((char **)t11);
    t14 = ((IEEE_P_2592010699) + 4024);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 4;
    t17 = (t16 + 4U);
    *((int *)t17) = 7;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (7 - 4);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t0 + 6304U);
    t11 = xsi_base_array_concat(t11, t13, t14, (char)97, t1, t15, (char)97, t12, t17, (char)101);
    t19 = (4U + 4U);
    t20 = (8U != t19);
    if (t20 == 1)
        goto LAB8;

LAB9:    t21 = (t0 + 4136);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t11, 8U);
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 4040);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    t3 = 7;
    goto LAB7;

LAB8:    xsi_size_not_matching(8U, t19, 0);
    goto LAB9;

}

static void work_a_1100631677_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4200);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 4056);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 6427);
    t6 = (t0 + 4200);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

}


extern void work_a_1100631677_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1100631677_3212880686_p_0,(void *)work_a_1100631677_3212880686_p_1};
	xsi_register_didat("work_a_1100631677_3212880686", "isim/mul_2_isim_beh.exe.sim/work/a_1100631677_3212880686.didat");
	xsi_register_executes(pe);
}
