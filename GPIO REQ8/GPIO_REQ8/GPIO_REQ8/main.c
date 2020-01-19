/*
 * GPIO_REQ8.c
 *
 * Created: 1/19/2020 12:33:55 AM
 * Author : A_ayman
 */ 

#include "Common_Macros.h"
#include "gpio.h"
#include "std_types.h"
#include "registers.h"
#include "softwareDelay.h"
#include "pushButton.h"
#include "led.h"
#define F_CPU 8000000



int main(void)
{
	
	uint8_t buttonStatus=0;
	uint8_t count =0;
	uint16_t i = 0;
	
    /* Replace with your application code */
	pushButtonInit(BTN_0);
	Led_Init(LED_0);
    while (1) 
    {
		buttonStatus=pushButtonGetStatus(BTN_0);
		if (pushButtonGetStatus(BTN_0)==Pressed)
		{
			count++;
			Led_On(LED_0);
			SwDelay_ms((1000*count));
			Led_Off(LED_0);
		}
    }
}





