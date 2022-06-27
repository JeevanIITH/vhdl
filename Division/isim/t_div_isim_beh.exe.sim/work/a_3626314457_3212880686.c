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
static const char *ng0 = "D:/vhdl_test_ise-/Division/comp_sub.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3626314457_3212880686_p_0(char *t0)
{
    char t11[16];
    char t15[16];
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4956U);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t3 = (t0 + 4940U);
    t5 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3232);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t12 = (7 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t3 = (t15 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 7;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t16 = (0 - 7);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t17;
    t4 = (t0 + 5013);
    t7 = (t20 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t21 = (7 - 0);
    t17 = (t21 * 1);
    t17 = (t17 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t17;
    t8 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t1, t15, t4, t20);
    t9 = (t11 + 12U);
    t17 = *((unsigned int *)t9);
    t18 = (1U * t17);
    t5 = (8U != t18);
    if (t5 == 1)
        goto LAB7;

LAB8:    t10 = (t0 + 3296);
    t24 = (t10 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t8, 8U);
    xsi_driver_first_trans_fast_port(t10);

LAB3:    t1 = (t0 + 3152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 3232);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t12 = (7 - 7);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t3 = (t15 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 7;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t16 = (0 - 7);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t17;
    t4 = (t0 + 1032U);
    t6 = *((char **)t4);
    t17 = (7 - 7);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t6 + t19);
    t7 = (t20 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t22;
    t8 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t1, t15, t4, t20);
    t9 = (t11 + 12U);
    t22 = *((unsigned int *)t9);
    t23 = (1U * t22);
    t5 = (8U != t23);
    if (t5 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 3296);
    t24 = (t10 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t8, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, t23, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(8U, t18, 0);
    goto LAB8;

}


extern void work_a_3626314457_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3626314457_3212880686_p_0};
	xsi_register_didat("work_a_3626314457_3212880686", "isim/t_div_isim_beh.exe.sim/work/a_3626314457_3212880686.didat");
	xsi_register_executes(pe);
}
