/*
 * sevenSegment.c
 *
 * Created: 1/18/2020 8:56:36 PM
 *  Author: A_ayman
 */ 

#include "sevenSeg.h"

void sevenSegInit(En_SevenSegId_t a_segment_id)
{
	switch (a_segment_id)
	{
		case SEG_0:
		{
			gpioPinDirection(SEG_BCD_GPIO,SEG_BCD_BITS,OUTPUT);  //set data bits direction as output
		    gpioPinDirection(SEG_EN1_GPIO,SEG_EN1_BIT,OUTPUT);   //set enable bit direction as output
			gpioPinWrite(SEG_BCD_GPIO,SEG_BCD_BITS,LOW);

			
			break;
			
		}
		case SEG_1:
		{
			gpioPinDirection(SEG_BCD_GPIO,SEG_BCD_BITS,OUTPUT);  //set data bits direction as output
			gpioPinDirection(SEG_EN2_GPIO,SEG_EN2_BIT,OUTPUT);   //set enable bit direction as output
			break;
		}
		default:
		break;
	}
	
}

void sevenSegWrite(En_SevenSegId_t en_segment_id, uint8_t u8_number)
{
	switch( en_segment_id)
	{
		case SEG_0:
		{
			switch (u8_number)
			{
				case 0:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				
				case 1:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				
				case 2:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				
				case 3:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 4:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 5:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 6:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 7:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 8:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,HIGH);
				break;
				case 9:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,HIGH);
				break;
				
			}
	
			break;
		}
		case SEG_1:
		{
			switch (u8_number)
			{
				case 0:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				
				case 1:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				
				case 2:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				
				case 3:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 4:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 5:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 6:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 7:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,LOW);
				break;
				case 8:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,HIGH);
				break;
				case 9:
				gpioPinWrite(SEG_BCD_GPIO,BIT0,HIGH);
				gpioPinWrite(SEG_BCD_GPIO,BIT1,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT2,LOW);
				gpioPinWrite(SEG_BCD_GPIO,BIT3,HIGH);
				break;
				
			}
			
			break;
		}	
		
	}
}

void sevenSegEnable(En_SevenSegId_t en_segment_id)
{
	switch (en_segment_id)
	{
		case SEG_0:
		{
			gpioPinWrite(SEG_EN1_GPIO,SEG_EN1_BIT,HIGH);
			break;
		
		}
		case SEG_1:
		{
			gpioPinWrite(SEG_EN2_GPIO,SEG_EN2_BIT,HIGH);
			break;
		}
		default:
		break;
	}

	}


void sevenSegDisable(En_SevenSegId_t en_segment_id)
{
	switch (en_segment_id)
	{
		case SEG_0:
		{
			gpioPinWrite(SEG_EN1_GPIO,SEG_EN1_BIT,LOW);
			break;
			
		}
		case SEG_1:
		{
			gpioPinWrite(SEG_EN2_GPIO,SEG_EN2_BIT,LOW);
			break;
		}
		default:
		break;
	}

}
