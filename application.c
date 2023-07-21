/* 
 * File     : application.c
 * Author   : Mohamed Ahmed Abdel Wahab
 * LinkedIn : https://www.linkedin.com/in/mohamed-abdel-wahab-162413253/
 * Github   : https://github.com/moabdelwahab6611
 * Created on May 21, 2023, 5:38 PM
 */

/**************************Includes-Section*****************************/
#include "application.h"
/***********************************************************************/

/***********************************************************************/
led_t led1 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN0, .led_status = GPIO_LOW};
led_t led2 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN1, .led_status = GPIO_LOW};
led_t led3 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN2, .led_status = GPIO_LOW};
led_t led4 = {.port_name = PORTC_INDEX, .pin = GPIO_PIN3, .led_status = GPIO_LOW};
/***********************************************************************/

/***********************Main Function-Section***************************/
int main() 
{ 
    application_intialize();
    
    while(1)
    {
        led_turn_on(&led1); led_turn_on(&led2); led_turn_on(&led3); led_turn_on(&led4);
        __delay_ms(250);
        led_turn_off(&led1); led_turn_off(&led2); led_turn_off(&led3); led_turn_off(&led4);
        __delay_ms(250);  
    }
    return (EXIT_SUCCESS);
}
/***********************************************************************/

/*************************Functions-Section*****************************/
void application_intialize(void)
{
    Std_ReturnType ret = E_NOT_OK;
    ret = led_initialize(&led1);
    ret = led_initialize(&led2);
    ret = led_initialize(&led3);
    ret = led_initialize(&led4);
}
/***********************************************************************/