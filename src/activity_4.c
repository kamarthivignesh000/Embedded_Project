/**
 * @file activity_4.c
 * @author Vignesh (kamarthivignesh000@gmail.com)
 * @brief Defined activity_4
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
 * @brief Calculating BAUDRATE
 * 
 * @param ubrr_value 
 */
void USARTInit(uint16_t ubrr_value)
{

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

/**
 * @brief Defining activity_4
 * 
 */
void activity_4()
{
    /*Passing BAUDRATE */
    USARTInit(103);
}
