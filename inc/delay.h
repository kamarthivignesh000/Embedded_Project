#ifndef __DELAY_H__
#define __DELAY_H__
/**
 * @file delay.h
 * @author Vignesh (kamarthivignesh000.com)
 * @brief Prototype of delay function
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include <util/delay.h>

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);

#endif /* __USER_UTILS_H__ */