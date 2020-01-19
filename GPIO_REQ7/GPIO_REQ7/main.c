/*
 * GPIO_REQ7.c
 *
 * Created: 1/18/2020 10:04:25 PM
 * Author : A_ayman
 */ 

#include "Common_Macros.h"
#include "gpio.h"
#include "std_types.h"
#include "registers.h"
#include "sevenSeg.h"
#include "softwareDelay.h"
#define F_CPU 8000000
#include  <util/delay.h>


int main(void)
{
	uint8_t count=0;
	uint8_t count2=0;
    /* Replace with your application code */
	 sevenSegInit(SEG_0);
	 sevenSegInit(SEG_1);
	sevenSegWrite(SEG_0,3);
// 	sevenSegEnable(SEG_0);
// 	sevenSegWrite(SEG_0,count);
// 	sevenSegDisable(SEG_0);
// 	sevenSegEnable(SEG_0);
// 	sevenSegWrite(SEG_1,count2);
// 	sevenSegDisable(SEG_1);
	
	sevenSegEnable(SEG_0);
    while (1) 
    {
		
		sevenSegWrite(SEG_0,count);
		
		count++;
		if (count==9)
		{
			count=0;
			count2++;
		}
		SwDelay_ms(1000);
		
    }
}

