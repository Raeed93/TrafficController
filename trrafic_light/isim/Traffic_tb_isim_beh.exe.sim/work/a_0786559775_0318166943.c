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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_TEXTIO;
extern char *STD_STANDARD;
static const char *ng2 = "C:/trrafic_light/Traffic_tb.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


void work_a_0786559775_0318166943_sub_225039193_1453620706(char *t0, char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[48];
    char t8[16];
    char t30[16];
    char t32[16];
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    int t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    char *t37;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 1);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t7 + 4U);
    *((char **)t10) = t2;
    t13 = (t7 + 12U);
    t14 = (t3 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t7 + 20U);
    *((char **)t15) = t4;
    t16 = (t7 + 28U);
    t17 = (t5 != 0);
    if (t17 == 1)
        goto LAB5;

LAB4:    t18 = (t7 + 36U);
    *((char **)t18) = t8;
    t19 = (t0 + 3568U);
    t20 = *((char **)t19);
    t21 = xsi_mem_cmp(t20, t5, 2U);
    if (t21 == 1)
        goto LAB7;

LAB12:    t19 = (t0 + 3688U);
    t22 = *((char **)t19);
    t23 = xsi_mem_cmp(t22, t5, 2U);
    if (t23 == 1)
        goto LAB8;

LAB13:    t19 = (t0 + 3808U);
    t24 = *((char **)t19);
    t25 = xsi_mem_cmp(t24, t5, 2U);
    if (t25 == 1)
        goto LAB9;

LAB14:    t19 = (t0 + 3928U);
    t26 = *((char **)t19);
    t27 = xsi_mem_cmp(t26, t5, 2U);
    if (t27 == 1)
        goto LAB10;

LAB15:
LAB11:
LAB6:
LAB1:    return;
LAB3:    *((char **)t13) = t3;
    goto LAB2;

LAB5:    *((char **)t16) = t5;
    goto LAB4;

LAB7:    t19 = (t0 + 11868);
    t31 = ((STD_STANDARD) + 1008);
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 1;
    t34 = (t33 + 4U);
    *((int *)t34) = 9;
    t34 = (t33 + 8U);
    *((int *)t34) = 1;
    t35 = (9 - 1);
    t12 = (t35 * 1);
    t12 = (t12 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t12;
    t29 = xsi_base_array_concat(t29, t30, t31, (char)97, t3, t4, (char)97, t19, t32, (char)101);
    t34 = (t4 + 12U);
    t12 = *((unsigned int *)t34);
    t12 = (t12 * 1U);
    t36 = (t12 + 9U);
    t37 = (char *)alloca(t36);
    memcpy(t37, t29, t36);
    std_textio_write7(STD_TEXTIO, t1, t2, t37, t30, (unsigned char)0, 0);
    goto LAB6;

LAB8:    t9 = (t0 + 11877);
    t22 = ((STD_STANDARD) + 1008);
    t24 = (t32 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = 1;
    t26 = (t24 + 4U);
    *((int *)t26) = 9;
    t26 = (t24 + 8U);
    *((int *)t26) = 1;
    t11 = (9 - 1);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t12;
    t20 = xsi_base_array_concat(t20, t30, t22, (char)97, t3, t4, (char)97, t9, t32, (char)101);
    t26 = (t4 + 12U);
    t12 = *((unsigned int *)t26);
    t12 = (t12 * 1U);
    t36 = (t12 + 9U);
    t28 = (char *)alloca(t36);
    memcpy(t28, t20, t36);
    std_textio_write7(STD_TEXTIO, t1, t2, t28, t30, (unsigned char)0, 0);
    goto LAB6;

LAB9:    t9 = (t0 + 11886);
    t22 = ((STD_STANDARD) + 1008);
    t24 = (t32 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = 1;
    t26 = (t24 + 4U);
    *((int *)t26) = 9;
    t26 = (t24 + 8U);
    *((int *)t26) = 1;
    t11 = (9 - 1);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t12;
    t20 = xsi_base_array_concat(t20, t30, t22, (char)97, t3, t4, (char)97, t9, t32, (char)101);
    t26 = (t4 + 12U);
    t12 = *((unsigned int *)t26);
    t12 = (t12 * 1U);
    t36 = (t12 + 9U);
    t29 = (char *)alloca(t36);
    memcpy(t29, t20, t36);
    std_textio_write7(STD_TEXTIO, t1, t2, t29, t30, (unsigned char)0, 0);
    goto LAB6;

LAB10:    t9 = (t0 + 11895);
    t22 = ((STD_STANDARD) + 1008);
    t24 = (t32 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = 1;
    t26 = (t24 + 4U);
    *((int *)t26) = 9;
    t26 = (t24 + 8U);
    *((int *)t26) = 1;
    t11 = (9 - 1);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t12;
    t20 = xsi_base_array_concat(t20, t30, t22, (char)97, t3, t4, (char)97, t9, t32, (char)101);
    t26 = (t4 + 12U);
    t12 = *((unsigned int *)t26);
    t12 = (t12 * 1U);
    t36 = (t12 + 9U);
    t31 = (char *)alloca(t36);
    memcpy(t31, t20, t36);
    std_textio_write7(STD_TEXTIO, t1, t2, t31, t30, (unsigned char)0, 0);
    goto LAB6;

LAB16:;
}

void work_a_0786559775_0318166943_sub_1330538640_1453620706(char *t0, char *t1, char *t2, char *t3)
{
    char t4[80];
    char t5[40];
    char t6[16];
    char t11[16];
    char t36[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    int64 t25;
    int64 t26;
    unsigned char t27;
    int64 t28;
    char *t29;
    char *t30;
    int64 t31;
    int64 t32;
    char *t33;
    int64 t34;
    int t35;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 1);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 1;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 1);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t4 + 4U);
    t14 = ((STD_TEXTIO) + 3280);
    t15 = (t12 + 56U);
    *((char **)t15) = t14;
    t16 = (t12 + 40U);
    *((char **)t16) = 0;
    t17 = (t12 + 64U);
    *((int *)t17) = 1;
    t18 = (t12 + 48U);
    *((char **)t18) = 0;
    t19 = (t5 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t5 + 12U);
    *((char **)t21) = t6;
    t22 = (t5 + 20U);
    t23 = (t3 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t5 + 28U);
    *((char **)t24) = t11;
    t25 = xsi_get_sim_current_time();
    t26 = (0 * 1000LL);
    t27 = (t25 != t26);
    if (t27 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB1:    xsi_access_variable_delete(t12);
    return;
LAB3:    *((char **)t19) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t3;
    goto LAB4;

LAB6:    t28 = xsi_get_sim_current_time();
    t29 = (t0 + 2952U);
    t30 = *((char **)t29);
    t31 = *((int64 *)t30);
    t32 = (t28 - t31);
    t29 = (t0 + 4168U);
    t33 = *((char **)t29);
    t34 = *((int64 *)t33);
    t35 = (t32 / t34);
    std_textio_write5(STD_TEXTIO, t1, t12, t35, (unsigned char)0, 10);
    t7 = (t0 + 11904);
    t14 = (t36 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 6;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t9 = (6 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t10;
    std_textio_write7(STD_TEXTIO, t1, t12, t7, t36, (unsigned char)0, 0);
    t7 = (t0 + 11910);
    t14 = (t36 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 2;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t9 = (2 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t10;
    t15 = (t6 + 12U);
    t10 = *((unsigned int *)t15);
    t10 = (t10 * 1U);
    t16 = (char *)alloca(t10);
    memcpy(t16, t2, t10);
    work_a_0786559775_0318166943_sub_225039193_1453620706(t0, t1, t12, t7, t36, t16);
    t7 = (t0 + 11912);
    t14 = (t36 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 2;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t9 = (2 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t10;
    t15 = (t11 + 12U);
    t10 = *((unsigned int *)t15);
    t10 = (t10 * 1U);
    t17 = (char *)alloca(t10);
    memcpy(t17, t3, t10);
    work_a_0786559775_0318166943_sub_225039193_1453620706(t0, t1, t12, t7, t36, t17);
    t25 = xsi_get_sim_current_time();
    t7 = (t0 + 2952U);
    t8 = *((char **)t7);
    t26 = *((int64 *)t8);
    t20 = (t25 != t26);
    if (t20 != 0)
        goto LAB9;

LAB11:
LAB10:    t7 = ((STD_TEXTIO) + 1480U);
    t8 = xsi_access_variable_all(t12);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t18 = ((STD_STANDARD) + 1008);
    t29 = (t4 + 4U);
    t30 = xsi_access_variable_all(t29);
    t33 = (t30 + 64U);
    t33 = *((char **)t33);
    t14 = xsi_base_array_concat(t14, t36, t18, (char)97, t15, t33, (char)99, (unsigned char)10, (char)101);
    std_textio_write(t7, t14, t36);
    xsi_access_variable_deallocate(t12);
    goto LAB7;

LAB9:    t7 = (t0 + 11914);
    t15 = (t36 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 1;
    t18 = (t15 + 4U);
    *((int *)t18) = 15;
    t18 = (t15 + 8U);
    *((int *)t18) = 1;
    t9 = (15 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t10;
    std_textio_write7(STD_TEXTIO, t1, t12, t7, t36, (unsigned char)0, 0);
    t25 = xsi_get_sim_current_time();
    t7 = (t0 + 3112U);
    t8 = *((char **)t7);
    t26 = *((int64 *)t8);
    t28 = (t25 - t26);
    t7 = (t0 + 4168U);
    t14 = *((char **)t7);
    t31 = *((int64 *)t14);
    t9 = (t28 / t31);
    std_textio_write5(STD_TEXTIO, t1, t12, t9, (unsigned char)0, 10);
    t7 = (t0 + 11929);
    t14 = (t36 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 5;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t9 = (5 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t10;
    std_textio_write7(STD_TEXTIO, t1, t12, t7, t36, (unsigned char)0, 0);
    goto LAB10;

}

void work_a_0786559775_0318166943_sub_737560796_1453620706(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, unsigned int t6, unsigned int t7, char *t8, unsigned int t9, unsigned int t10)
{
    char t11[80];
    char t30[16];
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int64 t19;
    int64 t20;
    unsigned char t21;
    int64 t22;
    char *t23;
    char *t24;
    int64 t25;
    int64 t26;
    char *t27;
    int64 t28;
    int t29;
    unsigned int t31;
    unsigned char t32;
    unsigned char t33;

LAB0:    t13 = (t11 + 4U);
    t14 = ((STD_TEXTIO) + 3280);
    t15 = (t13 + 56U);
    *((char **)t15) = t14;
    t16 = (t13 + 40U);
    *((char **)t16) = 0;
    t17 = (t13 + 64U);
    *((int *)t17) = 1;
    t18 = (t13 + 48U);
    *((char **)t18) = 0;
    t19 = xsi_get_sim_current_time();
    t20 = (0 * 1000LL);
    t21 = (t19 != t20);
    if (t21 != 0)
        goto LAB2;

LAB4:
LAB3:
LAB1:    xsi_access_variable_delete(t13);
    return;
LAB2:    t22 = xsi_get_sim_current_time();
    t23 = (t0 + 2952U);
    t24 = *((char **)t23);
    t25 = *((int64 *)t24);
    t26 = (t22 - t25);
    t23 = (t0 + 4168U);
    t27 = *((char **)t23);
    t28 = *((int64 *)t27);
    t29 = (t26 / t28);
    std_textio_write5(STD_TEXTIO, t1, t13, t29, (unsigned char)0, 10);
    t14 = (t0 + 11934);
    t16 = (t30 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 6;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t29 = (6 - 1);
    t31 = (t29 * 1);
    t31 = (t31 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t31;
    std_textio_write7(STD_TEXTIO, t1, t13, t14, t30, (unsigned char)0, 0);
    t21 = xsi_signal_has_event(t2);
    if (t21 != 0)
        goto LAB5;

LAB7:
LAB6:    t21 = xsi_signal_has_event(t5);
    if (t21 != 0)
        goto LAB11;

LAB13:
LAB12:    t21 = xsi_signal_has_event(t8);
    if (t21 != 0)
        goto LAB17;

LAB19:
LAB18:    t14 = ((STD_TEXTIO) + 1480U);
    t15 = xsi_access_variable_all(t13);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((STD_STANDARD) + 1008);
    t23 = (t11 + 4U);
    t24 = xsi_access_variable_all(t23);
    t27 = (t24 + 64U);
    t27 = *((char **)t27);
    t16 = xsi_base_array_concat(t16, t30, t18, (char)97, t17, t27, (char)99, (unsigned char)10, (char)101);
    std_textio_write(t14, t16, t30);
    xsi_access_variable_deallocate(t13);
    goto LAB3;

LAB5:    t14 = (t2 + 40U);
    t15 = *((char **)t14);
    t14 = (t15 + t4);
    t32 = *((unsigned char *)t14);
    t33 = (t32 == (unsigned char)3);
    if (t33 != 0)
        goto LAB8;

LAB10:    t14 = (t0 + 11954);
    t16 = (t30 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 15;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t29 = (15 - 1);
    t31 = (t29 * 1);
    t31 = (t31 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t31;
    std_textio_write7(STD_TEXTIO, t1, t13, t14, t30, (unsigned char)0, 0);

LAB9:    goto LAB6;

LAB8:    t15 = (t0 + 11940);
    t17 = (t30 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((int *)t18) = 14;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t29 = (14 - 1);
    t31 = (t29 * 1);
    t31 = (t31 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t31;
    std_textio_write7(STD_TEXTIO, t1, t13, t15, t30, (unsigned char)0, 0);
    goto LAB9;

LAB11:    t14 = (t5 + 40U);
    t15 = *((char **)t14);
    t14 = (t15 + t7);
    t32 = *((unsigned char *)t14);
    t33 = (t32 == (unsigned char)3);
    if (t33 != 0)
        goto LAB14;

LAB16:    t14 = (t0 + 11983);
    t16 = (t30 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 15;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t29 = (15 - 1);
    t31 = (t29 * 1);
    t31 = (t31 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t31;
    std_textio_write7(STD_TEXTIO, t1, t13, t14, t30, (unsigned char)0, 0);

LAB15:    goto LAB12;

LAB14:    t15 = (t0 + 11969);
    t17 = (t30 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((int *)t18) = 14;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t29 = (14 - 1);
    t31 = (t29 * 1);
    t31 = (t31 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t31;
    std_textio_write7(STD_TEXTIO, t1, t13, t15, t30, (unsigned char)0, 0);
    goto LAB15;

LAB17:    t14 = (t8 + 40U);
    t15 = *((char **)t14);
    t14 = (t15 + t10);
    t32 = *((unsigned char *)t14);
    t33 = (t32 == (unsigned char)3);
    if (t33 != 0)
        goto LAB20;

LAB22:    t14 = (t0 + 12012);
    t16 = (t30 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 15;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t29 = (15 - 1);
    t31 = (t29 * 1);
    t31 = (t31 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t31;
    std_textio_write7(STD_TEXTIO, t1, t13, t14, t30, (unsigned char)0, 0);

LAB21:    goto LAB18;

LAB20:    t15 = (t0 + 11998);
    t17 = (t30 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((int *)t18) = 14;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t29 = (14 - 1);
    t31 = (t29 * 1);
    t31 = (t31 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t31;
    std_textio_write7(STD_TEXTIO, t1, t13, t15, t30, (unsigned char)0, 0);
    goto LAB21;

}

static void work_a_0786559775_0318166943_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(151, ng2);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (!(t3));
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(155, ng2);
    t1 = (t0 + 7936);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 7600);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(152, ng2);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 11516U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t1);
    t7 = ((unsigned char)(t6));
    t8 = (t0 + 7808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(153, ng2);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 11532U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t1);
    t3 = ((unsigned char)(t6));
    t5 = (t0 + 7872);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

}

static void work_a_0786559775_0318166943_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 5544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(164, ng2);

LAB4:    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(169, ng2);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(165, ng2);
    t2 = (t0 + 8000);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(165, ng2);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 5352);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(166, ng2);
    t2 = (t0 + 8000);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(166, ng2);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 5352);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_0786559775_0318166943_p_2(char *t0)
{
    char t9[8];
    char t11[8];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    int64 t12;

LAB0:    xsi_set_current_line(201, ng2);
    t2 = (t0 + 1952U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 1792U);
    t5 = xsi_signal_has_event(t4);
    t1 = t5;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 7616);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(202, ng2);
    t6 = (t0 + 5600);
    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 2U);
    t7 = (t0 + 1832U);
    t10 = *((char **)t7);
    memcpy(t11, t10, 2U);
    work_a_0786559775_0318166943_sub_1330538640_1453620706(t0, t6, t9, t11);
    xsi_set_current_line(203, ng2);
    t12 = xsi_get_sim_current_time();
    t2 = (t0 + 8064);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int64 *)t8) = t12;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

}

static void work_a_0786559775_0318166943_p_3(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(216, ng2);
    t3 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t3);
    if (t4 == 1)
        goto LAB8;

LAB9:    t5 = (t0 + 1472U);
    t6 = xsi_signal_has_event(t5);
    t2 = t6;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 1632U);
    t8 = xsi_signal_has_event(t7);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 7648);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(217, ng2);
    t9 = (t0 + 5848);
    t10 = (t0 + 1312U);
    t11 = (t0 + 1472U);
    t12 = (t0 + 1632U);
    work_a_0786559775_0318166943_sub_737560796_1453620706(t0, t9, t10, 0U, 0U, t11, 0U, 0U, t12, 0U, 0U);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

}

static void work_a_0786559775_0318166943_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;

LAB0:    xsi_set_current_line(224, ng2);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 3808U);
    t4 = *((char **)t2);
    t5 = 1;
    if (2U == 2U)
        goto LAB7;

LAB8:    t5 = 0;

LAB9:    if ((!(t5)) == 1)
        goto LAB4;

LAB5:    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t8 = (t0 + 3568U);
    t10 = *((char **)t8);
    t11 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t11 = 0;

LAB15:    t1 = t11;

LAB6:    if (t1 == 0)
        goto LAB2;

LAB3:    t16 = (t0 + 7680);
    *((int *)t16) = 1;

LAB1:    return;
LAB2:    t14 = (t0 + 12027);
    xsi_report(t14, 52U, (unsigned char)3);
    goto LAB3;

LAB4:    t1 = (unsigned char)1;
    goto LAB6;

LAB7:    t6 = 0;

LAB10:    if (t6 < 2U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t2 = (t3 + t6);
    t7 = (t4 + t6);
    if (*((unsigned char *)t2) != *((unsigned char *)t7))
        goto LAB8;

LAB12:    t6 = (t6 + 1);
    goto LAB10;

LAB13:    t12 = 0;

LAB16:    if (t12 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t8 = (t9 + t12);
    t13 = (t10 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t13))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

}

static void work_a_0786559775_0318166943_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;

LAB0:    xsi_set_current_line(227, ng2);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 3808U);
    t4 = *((char **)t2);
    t5 = 1;
    if (2U == 2U)
        goto LAB7;

LAB8:    t5 = 0;

LAB9:    if ((!(t5)) == 1)
        goto LAB4;

LAB5:    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t8 = (t0 + 3568U);
    t10 = *((char **)t8);
    t11 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t11 = 0;

LAB15:    t1 = t11;

LAB6:    if (t1 == 0)
        goto LAB2;

LAB3:    t16 = (t0 + 7696);
    *((int *)t16) = 1;

LAB1:    return;
LAB2:    t14 = (t0 + 12079);
    xsi_report(t14, 52U, (unsigned char)3);
    goto LAB3;

LAB4:    t1 = (unsigned char)1;
    goto LAB6;

LAB7:    t6 = 0;

LAB10:    if (t6 < 2U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t2 = (t3 + t6);
    t7 = (t4 + t6);
    if (*((unsigned char *)t2) != *((unsigned char *)t7))
        goto LAB8;

LAB12:    t6 = (t6 + 1);
    goto LAB10;

LAB13:    t12 = 0;

LAB16:    if (t12 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t8 = (t9 + t12);
    t13 = (t10 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t13))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

}

static void work_a_0786559775_0318166943_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;

LAB0:    xsi_set_current_line(230, ng2);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    t5 = 1;
    if (2U == 2U)
        goto LAB7;

LAB8:    t5 = 0;

LAB9:    if ((!(t5)) == 1)
        goto LAB4;

LAB5:    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t8 = (t0 + 3568U);
    t10 = *((char **)t8);
    t11 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t11 = 0;

LAB15:    t1 = t11;

LAB6:    if (t1 == 0)
        goto LAB2;

LAB3:    t16 = (t0 + 7712);
    *((int *)t16) = 1;

LAB1:    return;
LAB2:    t14 = (t0 + 12131);
    xsi_report(t14, 51U, (unsigned char)3);
    goto LAB3;

LAB4:    t1 = (unsigned char)1;
    goto LAB6;

LAB7:    t6 = 0;

LAB10:    if (t6 < 2U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t2 = (t3 + t6);
    t7 = (t4 + t6);
    if (*((unsigned char *)t2) != *((unsigned char *)t7))
        goto LAB8;

LAB12:    t6 = (t6 + 1);
    goto LAB10;

LAB13:    t12 = 0;

LAB16:    if (t12 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t8 = (t9 + t12);
    t13 = (t10 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t13))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

}

static void work_a_0786559775_0318166943_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;

LAB0:    xsi_set_current_line(233, ng2);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    t5 = 1;
    if (2U == 2U)
        goto LAB7;

LAB8:    t5 = 0;

LAB9:    if ((!(t5)) == 1)
        goto LAB4;

LAB5:    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t8 = (t0 + 3568U);
    t10 = *((char **)t8);
    t11 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t11 = 0;

LAB15:    t1 = t11;

LAB6:    if (t1 == 0)
        goto LAB2;

LAB3:    t16 = (t0 + 7728);
    *((int *)t16) = 1;

LAB1:    return;
LAB2:    t14 = (t0 + 12182);
    xsi_report(t14, 51U, (unsigned char)3);
    goto LAB3;

LAB4:    t1 = (unsigned char)1;
    goto LAB6;

LAB7:    t6 = 0;

LAB10:    if (t6 < 2U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t2 = (t3 + t6);
    t7 = (t4 + t6);
    if (*((unsigned char *)t2) != *((unsigned char *)t7))
        goto LAB8;

LAB12:    t6 = (t6 + 1);
    goto LAB10;

LAB13:    t12 = 0;

LAB16:    if (t12 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t8 = (t9 + t12);
    t13 = (t10 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t13))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

}

void work_a_0786559775_0318166943_sub_2033206713_3933544415(char *t0, char *t1, char *t2, char *t3, unsigned char t4, unsigned char t5, unsigned char t6)
{
    char t7[80];
    char t8[24];
    char t30[16];
    char t32[16];
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int64 t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t31;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t9 = (t7 + 4U);
    t10 = ((STD_TEXTIO) + 3280);
    t11 = (t9 + 56U);
    *((char **)t11) = t10;
    t12 = (t9 + 40U);
    *((char **)t12) = 0;
    t13 = (t9 + 64U);
    *((int *)t13) = 1;
    t14 = (t9 + 48U);
    *((char **)t14) = 0;
    t15 = (t8 + 4U);
    t16 = (t2 != 0);
    if (t16 == 1)
        goto LAB3;

LAB2:    t17 = (t8 + 12U);
    *((char **)t17) = t3;
    t18 = (t8 + 20U);
    *((unsigned char *)t18) = t4;
    t19 = (t8 + 21U);
    *((unsigned char *)t19) = t5;
    t20 = (t8 + 22U);
    *((unsigned char *)t20) = t6;
    t21 = xsi_get_sim_current_time();
    t22 = (t0 + 8192);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((int64 *)t26) = t21;
    xsi_driver_first_trans_fast(t22);
    t21 = (0 * 1000LL);
    xsi_process_wait(t1, t21);

LAB7:    t10 = (t1 + 88U);
    t11 = *((char **)t10);
    t12 = (t11 + 2480U);
    *((unsigned int *)t12) = 1U;
    t13 = (t1 + 88U);
    t14 = *((char **)t13);
    t22 = (t14 + 0U);
    getcontext(t22);
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 2480U);
    t27 = *((unsigned int *)t25);
    if (t27 == 1)
        goto LAB8;

LAB9:    t26 = (t1 + 88U);
    t28 = *((char **)t26);
    t29 = (t28 + 2480U);
    *((unsigned int *)t29) = 3U;

LAB5:
LAB6:
LAB4:    t10 = (t0 + 12233);
    t12 = (t30 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((int *)t13) = 67;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t31 = (67 - 1);
    t27 = (t31 * 1);
    t27 = (t27 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t27;
    std_textio_write7(STD_TEXTIO, t1, t9, t10, t30, (unsigned char)0, 0);
    t11 = ((STD_STANDARD) + 1008);
    t10 = xsi_base_array_concat(t10, t30, t11, (char)99, (unsigned char)10, (char)97, t2, t3, (char)101);
    t13 = ((STD_STANDARD) + 1008);
    t12 = xsi_base_array_concat(t12, t32, t13, (char)97, t10, t30, (char)99, (unsigned char)10, (char)101);
    t14 = (t3 + 12U);
    t27 = *((unsigned int *)t14);
    t27 = (t27 * 1U);
    t33 = (1U + t27);
    t34 = (t33 + 1U);
    t22 = (char *)alloca(t34);
    memcpy(t22, t12, t34);
    std_textio_write7(STD_TEXTIO, t1, t9, t22, t32, (unsigned char)0, 0);
    t10 = (t0 + 12300);
    t12 = (t30 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 1;
    t13 = (t12 + 4U);
    *((int *)t13) = 67;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t31 = (67 - 1);
    t27 = (t31 * 1);
    t27 = (t27 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t27;
    std_textio_write7(STD_TEXTIO, t1, t9, t10, t30, (unsigned char)0, 0);
    t10 = ((STD_TEXTIO) + 1480U);
    t11 = xsi_access_variable_all(t9);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((STD_STANDARD) + 1008);
    t23 = (t7 + 4U);
    t24 = xsi_access_variable_all(t23);
    t25 = (t24 + 64U);
    t25 = *((char **)t25);
    t12 = xsi_base_array_concat(t12, t30, t14, (char)97, t13, t25, (char)99, (unsigned char)10, (char)101);
    std_textio_write(t10, t12, t30);
    xsi_access_variable_deallocate(t9);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t10 = (t0 + 11532U);
    t12 = (t10 + 12U);
    t27 = *((unsigned int *)t12);
    t27 = (t27 * 1U);
    t13 = (char *)alloca(t27);
    memcpy(t13, t11, t27);
    t14 = (t0 + 1832U);
    t23 = *((char **)t14);
    t14 = (t0 + 11516U);
    t24 = (t14 + 12U);
    t33 = *((unsigned int *)t24);
    t33 = (t33 * 1U);
    t25 = (char *)alloca(t33);
    memcpy(t25, t23, t33);
    work_a_0786559775_0318166943_sub_1330538640_1453620706(t0, t1, t13, t25);
    t10 = (t0 + 8256);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t23 = *((char **)t14);
    *((unsigned char *)t23) = t4;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 8320);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t23 = *((char **)t14);
    *((unsigned char *)t23) = t5;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 8384);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t23 = *((char **)t14);
    *((unsigned char *)t23) = t6;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 1152U);
    xsi_add_dynamic_wait(t1, t10, -1, -1);

LAB13:    t11 = (t1 + 224U);
    t11 = *((char **)t11);
    xsi_wp_set_status(t11, 1);
    t12 = (t1 + 88U);
    t14 = *((char **)t12);
    t23 = (t14 + 2480U);
    *((unsigned int *)t23) = 1U;
    t24 = (t1 + 88U);
    t26 = *((char **)t24);
    t28 = (t26 + 0U);
    getcontext(t28);
    t29 = (t1 + 88U);
    t35 = *((char **)t29);
    t36 = (t35 + 2480U);
    t27 = *((unsigned int *)t36);
    if (t27 == 1)
        goto LAB14;

LAB15:    t37 = (t1 + 88U);
    t38 = *((char **)t37);
    t39 = (t38 + 2480U);
    *((unsigned int *)t39) = 3U;

LAB11:
LAB12:    t40 = (t0 + 1152U);
    t16 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t40, 0U, 0U);
    if (t16 == 1)
        goto LAB10;
    else
        goto LAB13;

LAB3:    *((char **)t15) = t2;
    goto LAB2;

LAB8:    xsi_saveStackAndSuspend(t1);
    goto LAB9;

LAB10:    xsi_remove_dynamic_wait(t1, t10);

LAB1:    xsi_access_variable_delete(t9);
    return;
LAB14:    xsi_saveStackAndSuspend(t1);
    goto LAB15;

}

void work_a_0786559775_0318166943_sub_2098905694_3933544415(char *t0, char *t1, unsigned char t2, unsigned char t3, unsigned char t4)
{
    char t6[8];
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;

LAB0:    t7 = (t6 + 4U);
    *((unsigned char *)t7) = t2;
    t8 = (t6 + 5U);
    *((unsigned char *)t8) = t3;
    t9 = (t6 + 6U);
    *((unsigned char *)t9) = t4;
    t10 = (t0 + 8256);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t2;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 8320);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 8384);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t4;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 1152U);
    xsi_add_dynamic_wait(t1, t10, -1, -1);

LAB5:    t11 = (t1 + 224U);
    t11 = *((char **)t11);
    xsi_wp_set_status(t11, 1);
    t12 = (t1 + 88U);
    t13 = *((char **)t12);
    t14 = (t13 + 2480U);
    *((unsigned int *)t14) = 1U;
    t15 = (t1 + 88U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    getcontext(t17);
    t18 = (t1 + 88U);
    t19 = *((char **)t18);
    t20 = (t19 + 2480U);
    t21 = *((unsigned int *)t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 2480U);
    *((unsigned int *)t24) = 3U;

LAB3:
LAB4:    t25 = (t0 + 1152U);
    t26 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t25, 0U, 0U);
    if (t26 == 1)
        goto LAB2;
    else
        goto LAB5;

LAB2:    xsi_remove_dynamic_wait(t1, t10);

LAB1:    return;
LAB6:    xsi_saveStackAndSuspend(t1);
    goto LAB7;

}

void work_a_0786559775_0318166943_sub_2204784430_3933544415(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    int64 t25;

LAB0:    t4 = (t0 + 1952U);
    xsi_add_dynamic_wait(t1, t4, -1, -1);
    t5 = (t0 + 1792U);
    xsi_add_dynamic_wait(t1, t5, -1, -1);

LAB5:    t6 = (t1 + 224U);
    t6 = *((char **)t6);
    xsi_wp_set_status(t6, 1);
    t7 = (t1 + 88U);
    t8 = *((char **)t7);
    t9 = (t8 + 2480U);
    *((unsigned int *)t9) = 1U;
    t10 = (t1 + 88U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    getcontext(t12);
    t13 = (t1 + 88U);
    t14 = *((char **)t13);
    t15 = (t14 + 2480U);
    t16 = *((unsigned int *)t15);
    if (t16 == 1)
        goto LAB6;

LAB7:    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t19 = (t18 + 2480U);
    *((unsigned int *)t19) = 3U;

LAB3:
LAB4:    t21 = (t0 + 1952U);
    t22 = xsi_signal_has_event(t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    t23 = (t0 + 1792U);
    t24 = xsi_signal_has_event(t23);
    t20 = t24;

LAB10:    if (t20 == 1)
        goto LAB2;
    else
        goto LAB5;

LAB2:    xsi_remove_dynamic_wait(t1, t4);
    xsi_remove_dynamic_wait(t1, t5);
    t25 = (0 * 1000LL);
    xsi_process_wait(t1, t25);

LAB14:    t4 = (t1 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 2480U);
    *((unsigned int *)t6) = 1U;
    t7 = (t1 + 88U);
    t8 = *((char **)t7);
    t9 = (t8 + 0U);
    getcontext(t9);
    t10 = (t1 + 88U);
    t11 = *((char **)t10);
    t12 = (t11 + 2480U);
    t16 = *((unsigned int *)t12);
    if (t16 == 1)
        goto LAB15;

LAB16:    t13 = (t1 + 88U);
    t14 = *((char **)t13);
    t15 = (t14 + 2480U);
    *((unsigned int *)t15) = 3U;

LAB12:
LAB13:
LAB11:
LAB1:    return;
LAB6:    xsi_saveStackAndSuspend(t1);
    goto LAB7;

LAB8:    t20 = (unsigned char)1;
    goto LAB10;

LAB15:    xsi_saveStackAndSuspend(t1);
    goto LAB16;

}

void work_a_0786559775_0318166943_sub_3936339813_3933544415(char *t0, char *t1)
{
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned char t36;
    unsigned int t37;
    char *t38;
    int64 t39;

LAB0:    t4 = (t0 + 1952U);
    xsi_add_dynamic_wait(t1, t4, -1, -1);
    t5 = (t0 + 1792U);
    xsi_add_dynamic_wait(t1, t5, -1, -1);

LAB5:    t6 = (t1 + 224U);
    t6 = *((char **)t6);
    xsi_wp_set_status(t6, 1);
    t7 = (t1 + 88U);
    t8 = *((char **)t7);
    t9 = (t8 + 2480U);
    *((unsigned int *)t9) = 1U;
    t10 = (t1 + 88U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    getcontext(t12);
    t13 = (t1 + 88U);
    t14 = *((char **)t13);
    t15 = (t14 + 2480U);
    t16 = *((unsigned int *)t15);
    if (t16 == 1)
        goto LAB6;

LAB7:    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t19 = (t18 + 2480U);
    *((unsigned int *)t19) = 3U;

LAB3:
LAB4:    t21 = (t0 + 1992U);
    t22 = *((char **)t21);
    t21 = (t0 + 11532U);
    t23 = (t21 + 12U);
    t24 = *((unsigned int *)t23);
    t24 = (t24 * 1U);
    t25 = (t0 + 3568U);
    t26 = *((char **)t25);
    t27 = 1;
    if (t24 == 2U)
        goto LAB11;

LAB12:    t27 = 0;

LAB13:    if (t27 == 1)
        goto LAB8;

LAB9:    t20 = (unsigned char)0;

LAB10:    if (t20 == 1)
        goto LAB2;
    else
        goto LAB5;

LAB2:    xsi_remove_dynamic_wait(t1, t4);
    xsi_remove_dynamic_wait(t1, t5);
    t39 = (0 * 1000LL);
    xsi_process_wait(t1, t39);

LAB26:    t4 = (t1 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 2480U);
    *((unsigned int *)t6) = 1U;
    t7 = (t1 + 88U);
    t8 = *((char **)t7);
    t9 = (t8 + 0U);
    getcontext(t9);
    t10 = (t1 + 88U);
    t11 = *((char **)t10);
    t12 = (t11 + 2480U);
    t16 = *((unsigned int *)t12);
    if (t16 == 1)
        goto LAB27;

LAB28:    t13 = (t1 + 88U);
    t14 = *((char **)t13);
    t15 = (t14 + 2480U);
    *((unsigned int *)t15) = 3U;

LAB24:
LAB25:
LAB23:
LAB1:    return;
LAB6:    xsi_saveStackAndSuspend(t1);
    goto LAB7;

LAB8:    t30 = (t0 + 1832U);
    t31 = *((char **)t30);
    t30 = (t0 + 11516U);
    t32 = (t30 + 12U);
    t33 = *((unsigned int *)t32);
    t33 = (t33 * 1U);
    t34 = (t0 + 3808U);
    t35 = *((char **)t34);
    t36 = 1;
    if (t33 == 2U)
        goto LAB17;

LAB18:    t36 = 0;

LAB19:    t20 = t36;
    goto LAB10;

LAB11:    t28 = 0;

LAB14:    if (t28 < t24)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t25 = (t22 + t28);
    t29 = (t26 + t28);
    if (*((unsigned char *)t25) != *((unsigned char *)t29))
        goto LAB12;

LAB16:    t28 = (t28 + 1);
    goto LAB14;

LAB17:    t37 = 0;

LAB20:    if (t37 < t33)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t34 = (t31 + t37);
    t38 = (t35 + t37);
    if (*((unsigned char *)t34) != *((unsigned char *)t38))
        goto LAB18;

LAB22:    t37 = (t37 + 1);
    goto LAB20;

LAB27:    xsi_saveStackAndSuspend(t1);
    goto LAB28;

}

void work_a_0786559775_0318166943_sub_1400401000_3933544415(char *t0, char *t1)
{
    char t8[16];
    char t10[16];
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;

LAB0:    t4 = ((STD_TEXTIO) + 1480U);
    t5 = (t0 + 12367);
    t9 = ((STD_STANDARD) + 1008);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 1;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (0 - 1);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t7 = xsi_base_array_concat(t7, t8, t9, (char)97, t5, t10, (char)99, (unsigned char)10, (char)101);
    std_textio_write(t4, t7, t8);

LAB1:    return;
}

void work_a_0786559775_0318166943_sub_2246665488_3933544415(char *t0, char *t1, unsigned char t2, unsigned char t3, unsigned char t4, char *t5, char *t6)
{
    char t7[368];
    char t8[24];
    char t12[8];
    char t18[8];
    char t24[8];
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    unsigned char t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned char t37;
    unsigned char t38;
    unsigned char t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    t9 = (t7 + 4U);
    t10 = ((STD_STANDARD) + 0);
    t11 = (t9 + 88U);
    *((char **)t11) = t10;
    t13 = (t9 + 56U);
    *((char **)t13) = t12;
    xsi_type_set_default_value(t10, t12, 0);
    t14 = (t9 + 80U);
    *((unsigned int *)t14) = 1U;
    t15 = (t7 + 124U);
    t16 = ((STD_STANDARD) + 0);
    t17 = (t15 + 88U);
    *((char **)t17) = t16;
    t19 = (t15 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, 0);
    t20 = (t15 + 80U);
    *((unsigned int *)t20) = 1U;
    t21 = (t7 + 244U);
    t22 = ((STD_STANDARD) + 0);
    t23 = (t21 + 88U);
    *((char **)t23) = t22;
    t25 = (t21 + 56U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, 0);
    t26 = (t21 + 80U);
    *((unsigned int *)t26) = 1U;
    t27 = (t8 + 4U);
    *((unsigned char *)t27) = t2;
    t28 = (t8 + 5U);
    *((unsigned char *)t28) = t3;
    t29 = (t8 + 6U);
    *((unsigned char *)t29) = t4;
    t30 = (t8 + 7U);
    t31 = (t5 != 0);
    if (t31 == 1)
        goto LAB3;

LAB2:    t32 = (t8 + 15U);
    *((char **)t32) = t6;
    t33 = (t2 == (unsigned char)3);
    t34 = (t9 + 56U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    *((unsigned char *)t34) = t33;
    t31 = (t3 == (unsigned char)3);
    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((unsigned char *)t10) = t31;
    t31 = (t4 == (unsigned char)3);
    t10 = (t21 + 56U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((unsigned char *)t10) = t31;
    t10 = (t6 + 12U);
    t36 = *((unsigned int *)t10);
    t36 = (t36 * 1U);
    t11 = (char *)alloca(t36);
    memcpy(t11, t5, t36);
    work_a_0786559775_0318166943_sub_2033206713_3933544415(t0, t1, t11, t6, t2, t3, t4);
    work_a_0786559775_0318166943_sub_2098905694_3933544415(t0, t1, t2, (unsigned char)2, (unsigned char)2);

LAB4:    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t37 = *((unsigned char *)t13);
    if (t37 == 1)
        goto LAB11;

LAB12:    t10 = (t15 + 56U);
    t14 = *((char **)t10);
    t38 = *((unsigned char *)t14);
    t33 = t38;

LAB13:    if (t33 == 1)
        goto LAB8;

LAB9:    t10 = (t21 + 56U);
    t16 = *((char **)t10);
    t39 = *((unsigned char *)t16);
    t31 = t39;

LAB10:    if (t31 != 0)
        goto LAB5;

LAB7:    work_a_0786559775_0318166943_sub_3936339813_3933544415(t0, t1);
    work_a_0786559775_0318166943_sub_1400401000_3933544415(t0, t1);

LAB1:    return;
LAB3:    *((char **)t30) = t5;
    goto LAB2;

LAB5:    work_a_0786559775_0318166943_sub_2204784430_3933544415(t0, t1);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t33 = *((unsigned char *)t13);
    if (t33 == 1)
        goto LAB17;

LAB18:    t31 = (unsigned char)0;

LAB19:    if (t31 != 0)
        goto LAB14;

LAB16:
LAB15:    t10 = (t15 + 56U);
    t13 = *((char **)t10);
    t33 = *((unsigned char *)t13);
    if (t33 == 1)
        goto LAB35;

LAB36:    t31 = (unsigned char)0;

LAB37:    t22 = (t15 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((unsigned char *)t22) = t31;
    t10 = (t21 + 56U);
    t13 = *((char **)t10);
    t33 = *((unsigned char *)t13);
    if (t33 == 1)
        goto LAB44;

LAB45:    t31 = (unsigned char)0;

LAB46:    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((unsigned char *)t22) = t31;
    goto LAB4;

LAB6:;
LAB8:    t31 = (unsigned char)1;
    goto LAB10;

LAB11:    t33 = (unsigned char)1;
    goto LAB13;

LAB14:    work_a_0786559775_0318166943_sub_2098905694_3933544415(t0, t1, (unsigned char)2, (unsigned char)2, (unsigned char)2);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t10 = (t13 + 0);
    *((unsigned char *)t10) = (unsigned char)0;
    goto LAB15;

LAB17:    t10 = (t0 + 1992U);
    t14 = *((char **)t10);
    t10 = (t0 + 11532U);
    t16 = (t10 + 12U);
    t36 = *((unsigned int *)t16);
    t36 = (t36 * 1U);
    t17 = (t0 + 3808U);
    t19 = *((char **)t17);
    t38 = 1;
    if (t36 == 2U)
        goto LAB23;

LAB24:    t38 = 0;

LAB25:    if (t38 == 1)
        goto LAB20;

LAB21:    t22 = (t0 + 1992U);
    t23 = *((char **)t22);
    t22 = (t0 + 11532U);
    t25 = (t22 + 12U);
    t41 = *((unsigned int *)t25);
    t41 = (t41 * 1U);
    t26 = (t0 + 3928U);
    t34 = *((char **)t26);
    t39 = 1;
    if (t41 == 2U)
        goto LAB29;

LAB30:    t39 = 0;

LAB31:    t37 = t39;

LAB22:    t31 = t37;
    goto LAB19;

LAB20:    t37 = (unsigned char)1;
    goto LAB22;

LAB23:    t40 = 0;

LAB26:    if (t40 < t36)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t17 = (t14 + t40);
    t20 = (t19 + t40);
    if (*((unsigned char *)t17) != *((unsigned char *)t20))
        goto LAB24;

LAB28:    t40 = (t40 + 1);
    goto LAB26;

LAB29:    t42 = 0;

LAB32:    if (t42 < t41)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t26 = (t23 + t42);
    t35 = (t34 + t42);
    if (*((unsigned char *)t26) != *((unsigned char *)t35))
        goto LAB30;

LAB34:    t42 = (t42 + 1);
    goto LAB32;

LAB35:    t10 = (t0 + 1992U);
    t14 = *((char **)t10);
    t10 = (t0 + 11532U);
    t16 = (t10 + 12U);
    t36 = *((unsigned int *)t16);
    t36 = (t36 * 1U);
    t17 = (t0 + 3928U);
    t19 = *((char **)t17);
    t37 = 1;
    if (t36 == 2U)
        goto LAB38;

LAB39:    t37 = 0;

LAB40:    t31 = (!(t37));
    goto LAB37;

LAB38:    t40 = 0;

LAB41:    if (t40 < t36)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t17 = (t14 + t40);
    t20 = (t19 + t40);
    if (*((unsigned char *)t17) != *((unsigned char *)t20))
        goto LAB39;

LAB43:    t40 = (t40 + 1);
    goto LAB41;

LAB44:    t10 = (t0 + 1832U);
    t14 = *((char **)t10);
    t10 = (t0 + 11516U);
    t16 = (t10 + 12U);
    t36 = *((unsigned int *)t16);
    t36 = (t36 * 1U);
    t17 = (t0 + 3928U);
    t19 = *((char **)t17);
    t37 = 1;
    if (t36 == 2U)
        goto LAB47;

LAB48:    t37 = 0;

LAB49:    t31 = (!(t37));
    goto LAB46;

LAB47:    t40 = 0;

LAB50:    if (t40 < t36)
        goto LAB51;
    else
        goto LAB49;

LAB51:    t17 = (t14 + t40);
    t20 = (t19 + t40);
    if (*((unsigned char *)t17) != *((unsigned char *)t20))
        goto LAB48;

LAB52:    t40 = (t40 + 1);
    goto LAB50;

}

static void work_a_0786559775_0318166943_p_8(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int t9;
    unsigned int t10;

LAB0:    t1 = (t0 + 7280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(386, ng2);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(386, ng2);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 7088);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(387, ng2);
    t2 = (t0 + 8128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(387, ng2);
    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 7088);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(393, ng2);
    t2 = (t0 + 7088);
    t3 = (t0 + 12367);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 44;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t9 = (44 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t10;
    work_a_0786559775_0318166943_sub_2246665488_3933544415(t0, t2, (unsigned char)2, (unsigned char)3, (unsigned char)2, t3, t8);
    xsi_set_current_line(394, ng2);
    t2 = (t0 + 7088);
    t3 = (t0 + 12411);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 30;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t9 = (30 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t10;
    work_a_0786559775_0318166943_sub_2246665488_3933544415(t0, t2, (unsigned char)3, (unsigned char)2, (unsigned char)2, t3, t8);
    xsi_set_current_line(395, ng2);
    t2 = (t0 + 7088);
    t3 = (t0 + 12441);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 30;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t9 = (30 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t10;
    work_a_0786559775_0318166943_sub_2246665488_3933544415(t0, t2, (unsigned char)2, (unsigned char)2, (unsigned char)3, t3, t8);
    xsi_set_current_line(396, ng2);
    t2 = (t0 + 7088);
    t3 = (t0 + 12471);
    t5 = (t8 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 30;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t9 = (30 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t10;
    work_a_0786559775_0318166943_sub_2246665488_3933544415(t0, t2, (unsigned char)3, (unsigned char)2, (unsigned char)3, t3, t8);
    xsi_set_current_line(402, ng2);
    t7 = (1 * 1000000000000LL);
    t2 = (t0 + 7088);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(404, ng2);
    t2 = (t0 + 8448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(405, ng2);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}


extern void work_a_0786559775_0318166943_init()
{
	static char *pe[] = {(void *)work_a_0786559775_0318166943_p_0,(void *)work_a_0786559775_0318166943_p_1,(void *)work_a_0786559775_0318166943_p_2,(void *)work_a_0786559775_0318166943_p_3,(void *)work_a_0786559775_0318166943_p_4,(void *)work_a_0786559775_0318166943_p_5,(void *)work_a_0786559775_0318166943_p_6,(void *)work_a_0786559775_0318166943_p_7,(void *)work_a_0786559775_0318166943_p_8};
	static char *se[] = {(void *)work_a_0786559775_0318166943_sub_225039193_1453620706,(void *)work_a_0786559775_0318166943_sub_1330538640_1453620706,(void *)work_a_0786559775_0318166943_sub_737560796_1453620706,(void *)work_a_0786559775_0318166943_sub_2033206713_3933544415,(void *)work_a_0786559775_0318166943_sub_2098905694_3933544415,(void *)work_a_0786559775_0318166943_sub_2204784430_3933544415,(void *)work_a_0786559775_0318166943_sub_3936339813_3933544415,(void *)work_a_0786559775_0318166943_sub_1400401000_3933544415,(void *)work_a_0786559775_0318166943_sub_2246665488_3933544415};
	xsi_register_didat("work_a_0786559775_0318166943", "isim/Traffic_tb_isim_beh.exe.sim/work/a_0786559775_0318166943.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
