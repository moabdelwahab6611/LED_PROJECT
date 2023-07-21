/* 
 * File:   application.h
 * Author: Mohamed Ahmed Abdel Wahab
 * LinkedIn : https://www.linkedin.com/in/mohamed-abdel-wahab-162413253/
 * Github : https://github.com/moabdelwahab6611
 * Created on May 21, 2023, 6:46 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

/**************************Includes-Section*****************************/
#include <stdio.h>
#include <stdlib.h>
#include "ECU_Layer/LED/ecu_led.h"
/***********************************************************************/

/**********************Macro Declarations-Section***********************/

/***********************************************************************/

/******************Macro Function Declarations-Section******************/

/***********************************************************************/

/********************Data Types Declarations-Section********************/

/***********************************************************************/

/**********Software Interfaces Functions Declarations-Section***********/
void application_intialize(void);
#define _XTAL_FREQ 8000000UL
/***********************************************************************/
#endif	/* APPLICATION_H */

