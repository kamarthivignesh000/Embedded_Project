#ifndef __LED_H_
#define __LED_H_
/**
 * @file led.h
 * @author Vignesh (kamarthivignesh000@gmail.com)
 * @brief configuring LED ports connected to controller
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (1000)   /**< LED OFF time in milli seconds */

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);


#endif /** __SAMPLE_H_ */