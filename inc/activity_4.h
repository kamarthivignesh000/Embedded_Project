#ifndef __ACTIVITY_4_H__
#define __ACTIVITY_4_H__
/**
 * @file activity_4.h
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
void activity_4();

void USARTInit(uint16_t);

void USARTWriteChar(char);

char USARTReadChar();



#endif  /** __ACTIVITY_4_H_ */