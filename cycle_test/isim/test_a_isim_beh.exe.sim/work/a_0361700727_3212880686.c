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
static const char *ng0 = "D:/vhdl_test_ise-/cycle_test/a.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0361700727_3212880686_p_0(char *t0)
{
    char t18[16];
    char t20[16];
    char t26[16];
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 < 0);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 != 0)
        goto LAB19;

LAB20:
LAB6:    t1 = (t0 + 3992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t1 = (t0 + 4072);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t10 = (3 - 2);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t2 = (t5 + t12);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t6 = (t0 + 2568U);
    t8 = *((char **)t6);
    t3 = *((int *)t8);
    t13 = (t3 - 3);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, t3);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t6 = (t7 + t16);
    t17 = *((unsigned char *)t6);
    t19 = ((IEEE_P_2592010699) + 4024);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 2;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 2);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t9 = xsi_base_array_concat(t9, t18, t19, (char)97, t2, t20, (char)99, t17, (char)101);
    t22 = (t0 + 2688U);
    t25 = *((char **)t22);
    t22 = (t25 + 0);
    t24 = (3U + 1U);
    memcpy(t22, t9, t24);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    t1 = (t0 + 6232U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 6120U);
    t4 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    t10 = (3 - 3);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = (t20 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 3;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (0 - 3);
    t14 = (t3 * -1);
    t14 = (t14 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t14;
    t6 = (t0 + 6296);
    t8 = (t26 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t18, t1, t20, t6, t26);
    t19 = (t18 + 12U);
    t14 = *((unsigned int *)t19);
    t15 = (1U * t14);
    t4 = (4U != t15);
    if (t4 == 1)
        goto LAB15;

LAB16:    t21 = (t0 + 4136);
    t22 = (t21 + 56U);
    t25 = *((char **)t22);
    t27 = (t25 + 56U);
    t29 = *((char **)t27);
    memcpy(t29, t9, 4U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t10 = (3 - 2);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t20 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 2;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t3 = (0 - 2);
    t14 = (t3 * -1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t5 = xsi_base_array_concat(t5, t18, t6, (char)97, t1, t20, (char)99, (unsigned char)2, (char)101);
    t14 = (3U + 1U);
    t4 = (4U != t14);
    if (t4 == 1)
        goto LAB17;

LAB18:    t8 = (t0 + 4200);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t5, 4U);
    xsi_driver_first_trans_fast(t8);

LAB9:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t13 = (t3 - 1);
    t1 = (t0 + 2568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t13;
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t13 = (t3 - 1);
    t1 = (t0 + 2448U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t13;
    goto LAB6;

LAB8:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 2688U);
    t8 = *((char **)t7);
    t10 = (3 - 3);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    t9 = (t20 + 0U);
    t19 = (t9 + 0U);
    *((int *)t19) = 3;
    t19 = (t9 + 4U);
    *((int *)t19) = 0;
    t19 = (t9 + 8U);
    *((int *)t19) = -1;
    t3 = (0 - 3);
    t14 = (t3 * -1);
    t14 = (t14 + 1);
    t19 = (t9 + 12U);
    *((unsigned int *)t19) = t14;
    t19 = (t0 + 1192U);
    t21 = *((char **)t19);
    t14 = (3 - 3);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t19 = (t21 + t16);
    t22 = (t26 + 0U);
    t25 = (t22 + 0U);
    *((int *)t25) = 3;
    t25 = (t22 + 4U);
    *((int *)t25) = 0;
    t25 = (t22 + 8U);
    *((int *)t25) = -1;
    t13 = (0 - 3);
    t24 = (t13 * -1);
    t24 = (t24 + 1);
    t25 = (t22 + 12U);
    *((unsigned int *)t25) = t24;
    t25 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t18, t7, t20, t19, t26);
    t27 = (t18 + 12U);
    t24 = *((unsigned int *)t27);
    t28 = (1U * t24);
    t17 = (4U != t28);
    if (t17 == 1)
        goto LAB11;

LAB12:    t29 = (t0 + 4136);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t25, 4U);
    xsi_driver_first_trans_fast(t29);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t10 = (3 - 2);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t20 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 2;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t3 = (0 - 2);
    t14 = (t3 * -1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t5 = xsi_base_array_concat(t5, t18, t6, (char)97, t1, t20, (char)99, (unsigned char)3, (char)101);
    t14 = (3U + 1U);
    t4 = (4U != t14);
    if (t4 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 4200);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t5, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

LAB11:    xsi_size_not_matching(4U, t28, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(4U, t14, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(4U, t15, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(4U, t14, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t2 = (t0 + 4264);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB6;

}


extern void work_a_0361700727_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0361700727_3212880686_p_0};
	xsi_register_didat("work_a_0361700727_3212880686", "isim/test_a_isim_beh.exe.sim/work/a_0361700727_3212880686.didat");
	xsi_register_executes(pe);
}
