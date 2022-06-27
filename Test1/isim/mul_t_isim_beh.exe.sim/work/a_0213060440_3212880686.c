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
static const char *ng0 = "D:/vhdl_test_ise-/Test1/clock.vhd";



static void work_a_0213060440_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;

LAB0:    t1 = (t0 + 2712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1488U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 4769);
    *((int *)t2) = 1;
    t5 = (t0 + 4773);
    *((int *)t5) = t4;
    t6 = 1;
    t7 = t4;

LAB4:    if (t6 <= t7)
        goto LAB5;

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(45, ng0);
    t8 = (t0 + 1728U);
    t9 = *((char **)t8);
    t10 = *((int64 *)t9);
    t11 = (t10 / 2);
    t8 = (t0 + 2520);
    xsi_process_wait(t8, t11);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:    t2 = (t0 + 4769);
    t6 = *((int *)t2);
    t3 = (t0 + 4773);
    t7 = *((int *)t3);
    if (t6 == t7)
        goto LAB7;

LAB15:    t4 = (t6 + 1);
    t6 = t4;
    t5 = (t0 + 4769);
    *((int *)t5) = t6;
    goto LAB4;

LAB8:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3096);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);

LAB13:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3096);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t14 = *((char **)t9);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB13;

}


extern void work_a_0213060440_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0213060440_3212880686_p_0};
	xsi_register_didat("work_a_0213060440_3212880686", "isim/mul_t_isim_beh.exe.sim/work/a_0213060440_3212880686.didat");
	xsi_register_executes(pe);
}
