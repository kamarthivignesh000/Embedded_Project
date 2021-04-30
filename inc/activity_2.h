#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
/**
 * @file activity_2.h
 * @author Vignesh (kamarthivignesh000@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include <util/delay.h>

#include <avr/io.h>

/**
 * Include files
 */ 
void InitADC();

uint16_t ReadADC(uint8_t ch);

void activity_2();

#endif  /** __ACTIVITY_2_H_ */