/**
 * @file activity_3.c
 * @author Vignesh (kamarthivignesh000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "project_config.h"

#include "user_utils.h"
#include "sample.h"
#include "activity_1.h"
#include "activity_2.h"
#include "activity_3.h"
#include "activity_4.h"


/**
 * @brief Setting non-inverting mode, prescalar and Fast PWM mode
 * 
 */
void activity_3()
{
    TCCR1A |=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B |=(1<<WGM12)|(1<<CS11); 

    DDRB|=1<<PB1;

}