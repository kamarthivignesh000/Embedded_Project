/**
 * @file main.c
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
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 */
int main(void)
{
    uint16_t temp;
    activity_1();       // Calling activity_1 function 
    activity_2();       // Calling activity_2 function
    activity_3();       // Calling activity_3 function
    activity_4();       // Calling activity_4 function

    while(1)
    {
        if((SW_PIN&(1<<SW2_PORT))==0)
        {
            if((SW_PIN&(1<<SW1_PORT))==0)
            {
                change_led_state(LED_ON);
				//delay_ms(LED_ON_TIME);
                temp=ReadADC(0);
                Output_Compare_Register_1_A = temp;
                if(temp<=200)
                {
                    unsigned char data1[]="20 degree C\n";
                    int i=0;
                    /* Transmitting data to controller */
                    while(data1[i])
                    {
                         /* USART Control and Status Register  and USART I/O Data Register */
                        while(!(UCSR0A&(1<<UDRE0)));
                        UDR0 = data1[i];
                        i++;
                    }
                }
                else if(temp>=210 && temp<=500)
                {
                    unsigned char data2[]="25 degree C\n";
                    int i=0;
                    /* Transmitting data to controller */
                    while(data2[i])
                    {
                        /* USART Control and Status Register  and USART I/O Data Register */
                        while(!(UCSR0A&(1<<UDRE0)));
                        UDR0 = data2[i];
                        i++;
                    }
                }
                else if(temp>=510 && temp<=700)
                {
                    unsigned char data3[]="29 degree C\n";
                    int i=0;
                    /* Transmitting data to controller */
                    while(data3[i])
                    {
                        /* USART Control and Status Register  and USART I/O Data Register */
                        while(!(UCSR0A&(1<<UDRE0)));
                        UDR0 = data3[i];
                        i++;
                    }
                }
                else if(temp>=710 && temp<=1024)
                {
                    unsigned char data4[]="33 degree C\n";
                    int i=0;
                    /* Transmitting data to controller */
                    while(data4[i])
                    {
                        /* USART Control and Status Register  and USART I/O Data Register */
                        while(!(UCSR0A&(1<<UDRE0)));
                        UDR0 = data4[i];
                        i++;
                    }
                }
            }
            else
            {
                change_led_state(LED_OFF);
				delay_ms(LED_OFF_TIME);
            }
        }
        else
        {
            change_led_state(LED_OFF);
			delay_ms(LED_OFF_TIME);
        }
    }
    return 0;
}