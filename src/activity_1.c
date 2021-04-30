/**
 * @file activity_1.c
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
 * @brief Changing state of LED
 * 
 * @param state 
 */
void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}

/**
 * @brief Intializing ports for two switches and LED
 * 
 */
void activity_1()
{
    DDRD&=~(1<<PD0);
    DDRB|=(1<<PB0);
    PORTD|=(1<<PD0)|(1<<PD1);
}