/**
 * @file activity_1.c
 * @author Vignesh (kamarthivignesh000@gmail.com)
 * @brief Defined activity_1
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

#include "delay.h"
#include "led.h"

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
    /* Clear PORTD */
    DDRD&=~(1<<PD0);
    /* Set PORTB */    
    DDRB|=(1<<PB0);
    /* Set PORTD */
    PORTD|=(1<<PD0)|(1<<PD1);
}