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
static const char *ng0 = "/home/ctnguyen/Works/MultiCycleProcessor/unsigned_fixedpoint_divider_module.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void work_a_4005832299_3212880686_p_0(char *t0)
{
    char t15[16];
    char t16[16];
    char t23[16];
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
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18};

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 936U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3096);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 868U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2064U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 3140);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3176);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 3212);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(83, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 3248);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(85, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t3 = t1;
    memset(t3, (unsigned char)2, 64U);
    t4 = (t0 + 3284);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 64U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(86, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 3320);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(87, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 3356);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3392);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3428);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2372U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 3176);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3176);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB21:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3140);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 2372U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB8;

LAB11:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t1 = (t0 + 7024U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t16, t3, t1, (unsigned char)0);
    t7 = (t16 + 12U);
    t11 = *((unsigned int *)t7);
    t11 = (t11 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t11, 1);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t15, t8, t16);
    t10 = (t15 + 12U);
    t17 = *((unsigned int *)t10);
    t17 = (t17 * 1U);
    t2 = (64U != t17);
    if (t2 == 1)
        goto LAB32;

LAB33:    t12 = (t0 + 3284);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t18 = (t14 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 64U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB12:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t20 = (2 * 32);
    t21 = (t20 - 1);
    t11 = (63 - t21);
    t17 = (t11 * 1U);
    t22 = (0 + t17);
    t1 = (t3 + t22);
    t4 = (t0 + 3356);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB13:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB14:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1696U);
    t3 = *((char **)t1);
    t20 = (32 - 1);
    t21 = (t20 - 31);
    t11 = (t21 * -1);
    t17 = (1U * t11);
    t22 = (0 + t17);
    t1 = (t3 + t22);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1696U);
    t3 = *((char **)t1);
    t1 = (t0 + 3284);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_delta(t1, 0U, 32U, 0LL);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB35:    goto LAB8;

LAB15:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t1 = (t0 + 7024U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t16, t3, t1, (unsigned char)0);
    t7 = (t16 + 12U);
    t11 = *((unsigned int *)t7);
    t11 = (t11 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t11, 1);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t15, t8, t16);
    t10 = (t15 + 12U);
    t17 = *((unsigned int *)t10);
    t17 = (t17 * 1U);
    t2 = (64U != t17);
    if (t2 == 1)
        goto LAB37;

LAB38:    t12 = (t0 + 3284);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t18 = (t14 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 64U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 3284);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 63U, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB16:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t1 = (t0 + 7024U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t16, t3, t1, (unsigned char)0);
    t7 = (t16 + 12U);
    t11 = *((unsigned int *)t7);
    t11 = (t11 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t11, 1);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t15, t8, t16);
    t10 = (t15 + 12U);
    t17 = *((unsigned int *)t10);
    t17 = (t17 * 1U);
    t2 = (64U != t17);
    if (t2 == 1)
        goto LAB39;

LAB40:    t12 = (t0 + 3284);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t18 = (t14 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 64U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB17:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2372U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t21 = (t20 + 1);
    t1 = (t0 + 2372U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t21;
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 2372U);
    t3 = *((char **)t1);
    t20 = *((int *)t3);
    t2 = (t20 == 32);
    if (t2 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB8;

LAB18:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t20 = (32 - 1);
    t11 = (63 - t20);
    t17 = (t11 * 1U);
    t22 = (0 + t17);
    t1 = (t3 + t22);
    t4 = (t0 + 3212);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t20 = (2 * 32);
    t21 = (t20 - 1);
    t11 = (63 - t21);
    t17 = (t11 * 1U);
    t22 = (0 + t17);
    t1 = (t3 + t22);
    t4 = (t23 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 63;
    t7 = (t4 + 4U);
    *((int *)t7) = 32;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t24 = (32 - 63);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t25;
    t7 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t16, t1, t23, (unsigned char)0);
    t8 = (t16 + 12U);
    t25 = *((unsigned int *)t8);
    t25 = (t25 * 1U);
    t9 = xsi_vhdl_bitvec_srl(t9, t7, t25, 1);
    t10 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t15, t9, t16);
    t12 = (t15 + 12U);
    t26 = *((unsigned int *)t12);
    t26 = (t26 * 1U);
    t2 = (32U != t26);
    if (t2 == 1)
        goto LAB44;

LAB45:    t13 = (t0 + 3248);
    t14 = (t13 + 32U);
    t18 = *((char **)t14);
    t19 = (t18 + 32U);
    t27 = *((char **)t19);
    memcpy(t27, t10, 32U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 3140);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB19:    xsi_set_current_line(156, ng0);
    goto LAB8;

LAB20:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 684U);
    t4 = *((char **)t1);
    t1 = (t0 + 2304U);
    t7 = *((char **)t1);
    t6 = 1;
    if (32U == 32U)
        goto LAB26;

LAB27:    t6 = 0;

LAB28:    if (t6 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(104, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 3284);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t4, 0U, 32U, 0LL);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 592U);
    t3 = *((char **)t1);
    t1 = (t0 + 3284);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_delta(t1, 32U, 32U, 0LL);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = (t0 + 3320);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 32U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(102, ng0);
    t9 = (t0 + 3464);
    t10 = (t9 + 32U);
    t12 = *((char **)t10);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t9);
    goto LAB24;

LAB26:    t11 = 0;

LAB29:    if (t11 < 32U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t1 = (t4 + t11);
    t8 = (t7 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t8))
        goto LAB27;

LAB31:    t11 = (t11 + 1);
    goto LAB29;

LAB32:    xsi_size_not_matching(64U, t17, 0);
    goto LAB33;

LAB34:    xsi_set_current_line(128, ng0);
    t4 = (t0 + 3464);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)7;
    xsi_driver_first_trans_fast(t4);
    goto LAB35;

LAB37:    xsi_size_not_matching(64U, t17, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(64U, t17, 0);
    goto LAB40;

LAB41:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 3464);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_size_not_matching(32U, t26, 0);
    goto LAB45;

}


extern void work_a_4005832299_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4005832299_3212880686_p_0};
	xsi_register_didat("work_a_4005832299_3212880686", "isim/tb_fixedpoint_divider_module_isim_beh.exe.sim/work/a_4005832299_3212880686.didat");
	xsi_register_executes(pe);
}
