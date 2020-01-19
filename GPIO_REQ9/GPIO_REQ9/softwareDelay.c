/*
 * softwareDelay.c
 *
 * Created: 1/18/2020 2:48:30 PM
 *  Author: A_ayman
 */ 
#include "std_types.h"
void SwDelay_ms(uint32_t n)
{
	/* this function will give you a delay of 1 ms if your frequency is 8 MHZ
		                                   of 2 ms if your frequency is 4 MHZ
	*/
	volatile uint32_t z=0;
    uint16_t j=0;
	uint32_t i=0;
	
	for(i=0; i<n;i++)
	{
		for( j=0; j<350;j++)
		{
			z++;
		}	
	}
}
