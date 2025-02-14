/**
 * @file lv_ex_conf.h
 *
 */
/*
 * COPY THIS FILE AS lv_ex_conf.h
 */

#if 1 /*Set it to "1" to enable the content*/

#ifndef LV_EX_CONF_H
#define LV_EX_CONF_H



/*******************
 * GENERAL SETTING
 *******************/
#define LV_EX_PRINTF       1       /*Enable printf-ing data in demoes and examples*/
#define LV_EX_KEYBOARD     1       /*Add PC keyboard support to some examples (`lv_drivers` repository is required)*/
#define LV_EX_MOUSEWHEEL   1       /*Add 'encoder' (mouse wheel) support to some examples (`lv_drivers` repository is required)*/

/*********************
 * DEMO USAGE
 *********************/

/*Show some widget*/
#define LV_USE_DEMO_WIDGETS       0
#if LV_USE_DEMO_WIDGETS
#define LV_DEMO_WIDGETS_SLIDESHOW  1
#endif

/*Printer demo, optimized for 800x480*/
#define LV_USE_DEMO_PRINTER     1

/*Demonstrate the usage of encoder and keyboard*/
#define LV_USE_DEMO_KEYPAD_AND_ENCODER     0

/*Benchmark your system*/
#define LV_USE_DEMO_BENCHMARK   1

/*Stress test for LVGL*/
#define LV_USE_DEMO_STRESS     0

#endif /*LV_EX_CONF_H*/

#endif /*End of "Content enable"*/

