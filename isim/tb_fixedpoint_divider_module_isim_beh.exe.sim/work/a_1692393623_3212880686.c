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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ctnguyen/Works/MultiCycleProcessor/fixedpoint_divider_module.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);


static void work_a_1692393623_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (t3 - 31);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 5796);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5704);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1692393623_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (t3 - 31);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 5832);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5712);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1692393623_3212880686_p_2(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 2248U);
    t12 = *((char **)t11);
    t11 = (t0 + 12680U);
    t13 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t10, t12, t11);
    t14 = (t10 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (1U * t15);
    t17 = (32U != t16);
    if (t17 == 1)
        goto LAB7;

LAB8:    t18 = (t0 + 5868);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 32U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 5720);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 592U);
    t5 = *((char **)t1);
    t1 = (t0 + 5868);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(32U, t16, 0);
    goto LAB8;

}

static void work_a_1692393623_3212880686_p_3(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 2340U);
    t12 = *((char **)t11);
    t11 = (t0 + 12696U);
    t13 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t10, t12, t11);
    t14 = (t10 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (1U * t15);
    t17 = (32U != t16);
    if (t17 == 1)
        goto LAB7;

LAB8:    t18 = (t0 + 5904);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 32U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 5728);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 684U);
    t5 = *((char **)t1);
    t1 = (t0 + 5904);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(32U, t16, 0);
    goto LAB8;

}

static void work_a_1692393623_3212880686_p_4(char *t0)
{
    char t11[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    int t13;
    int t14;
    int t15;
    char *t16;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 844U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2800U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 5940);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 5976);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(130, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 6012);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(131, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 6048);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 6084);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 6120);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = xsi_get_transient_memory(2U);
    memset(t1, 0, 2U);
    t3 = t1;
    memset(t3, (unsigned char)2, 2U);
    t4 = (t0 + 4164U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 2U);

LAB6:    goto LAB3;

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 5940);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 6084);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB16:    goto LAB8;

LAB10:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 6084);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 6120);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 6084);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB12:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 6120);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2156U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 6084);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB8;

LAB13:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 4164U);
    t3 = *((char **)t1);
    t1 = (t0 + 13431);
    t13 = xsi_mem_cmp(t1, t3, 2U);
    if (t13 == 1)
        goto LAB22;

LAB27:    t7 = (t0 + 13433);
    t14 = xsi_mem_cmp(t7, t3, 2U);
    if (t14 == 1)
        goto LAB23;

LAB28:    t9 = (t0 + 13435);
    t15 = xsi_mem_cmp(t9, t3, 2U);
    if (t15 == 1)
        goto LAB24;

LAB29:    t16 = (t0 + 13437);
    t18 = xsi_mem_cmp(t16, t3, 2U);
    if (t18 == 1)
        goto LAB25;

LAB30:
LAB26:    xsi_set_current_line(181, ng0);

LAB21:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 5940);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 6084);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB14:    xsi_set_current_line(186, ng0);
    goto LAB8;

LAB15:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 6084);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 2312);
    t1 = xsi_base_array_concat(t1, t11, t7, (char)99, t2, (char)99, t5, (char)101);
    t8 = (t0 + 4164U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t12 = (1U + 1U);
    memcpy(t8, t1, t12);
    goto LAB16;

LAB18:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 6084);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB22:    xsi_set_current_line(165, ng0);
    t19 = (t0 + 1788U);
    t20 = *((char **)t19);
    t19 = (t0 + 6012);
    t21 = (t19 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 32U);
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 1880U);
    t3 = *((char **)t1);
    t1 = (t0 + 6048);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(167, ng0);
    t1 = (t0 + 2064U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5976);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 2432U);
    t3 = *((char **)t1);
    t1 = (t0 + 6012);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 1880U);
    t3 = *((char **)t1);
    t1 = (t0 + 6048);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 2064U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5976);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB24:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 2432U);
    t3 = *((char **)t1);
    t1 = (t0 + 6012);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(174, ng0);
    t1 = (t0 + 2524U);
    t3 = *((char **)t1);
    t1 = (t0 + 6048);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(175, ng0);
    t1 = (t0 + 2064U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5976);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB25:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 1788U);
    t3 = *((char **)t1);
    t1 = (t0 + 6012);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 2524U);
    t3 = *((char **)t1);
    t1 = (t0 + 6048);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 2064U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5976);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB31:;
}

static void work_a_1692393623_3212880686_p_5(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t2 = (t0 + 1788U);
    t3 = *((char **)t2);
    t2 = (t0 + 12632U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (32U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 6156);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 32U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5744);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t7, 0);
    goto LAB6;

}

static void work_a_1692393623_3212880686_p_6(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(115, ng0);

LAB3:    t2 = (t0 + 1880U);
    t3 = *((char **)t2);
    t2 = (t0 + 12648U);
    t4 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (32U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 6192);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 32U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5752);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t7, 0);
    goto LAB6;

}


extern void work_a_1692393623_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1692393623_3212880686_p_0,(void *)work_a_1692393623_3212880686_p_1,(void *)work_a_1692393623_3212880686_p_2,(void *)work_a_1692393623_3212880686_p_3,(void *)work_a_1692393623_3212880686_p_4,(void *)work_a_1692393623_3212880686_p_5,(void *)work_a_1692393623_3212880686_p_6};
	xsi_register_didat("work_a_1692393623_3212880686", "isim/tb_fixedpoint_divider_module_isim_beh.exe.sim/work/a_1692393623_3212880686.didat");
	xsi_register_executes(pe);
}
