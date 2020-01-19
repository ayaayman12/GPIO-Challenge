/*
 * GPIO_REQ9.c
 *
 * Created: 1/18/2020 9:18:59 PM
 * Author : A_ayman
 */ 


#include "Common_Macros.h"
#include "gpio.h"
#include "std_types.h"
#include "registers.h"
#include "led.h"
#include "softwareDelay.h"
#define F_CPU 8000000


void periodic_state_machine(void)
{
	Led_Off(LED_2);
	Led_On(LED_1);         // it means go..
	SwDelay_ms(1000);
	Led_Off(LED_1);   
	Led_On(LED_3);        // it means stop.
	SwDelay_ms(1000);
	Led_Off(LED_3);
	Led_On(LED_2);
	SwDelay_ms(1000);     // it means get ready.
	
}



int main(void)
{
    /* Replace with your application code */
	Led_Init(LED_1);
	Led_Init(LED_2);
	Led_Init(LED_3);
    while (1) 
    {
		periodic_state_machine();
    }
}

