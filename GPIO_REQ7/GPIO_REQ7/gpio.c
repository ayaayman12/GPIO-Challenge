/*
 * gpio.c
 *
 * Created: 1/18/2020 12:42:37 AM
 *  Author: A_ayman
 */ 
#include "gpio.h"
#include "registers.h"
void gpioPortDirection(uint8_t u8_port, uint8_t u8_direction)
{
	if( u8_direction == INPUT)
	{
		switch(u8_port)
		{
			case GPIOA: PORTA_DIR = 0x00;break;
			case GPIOB: PORTB_DIR = 0x00;break;
			case GPIOC: PORTC_DIR = 0x00;break;
			case GPIOD: PORTD_DIR = 0x00;break;
			default: break;
		}
	}
	else if( u8_direction == OUTPUT)
	{
		switch(u8_port)
		{
			case GPIOA: PORTA_DIR = 0xff;break;
			case GPIOB: PORTB_DIR = 0xff;break;
			case GPIOC: PORTC_DIR = 0xff;break;
			case GPIOD: PORTD_DIR = 0xff;break;
			default: break;
		}
	}
}

void gpioPortWrite(uint8_t u8_port, uint8_t u8_value)
{
	switch(u8_port)
	{
		case GPIOA: PORTA_DATA = u8_value;break;
		case GPIOB: PORTB_DATA = u8_value;break;
		case GPIOC: PORTC_DATA = u8_value;break;
		case GPIOD: PORTD_DATA = u8_value;break;
		default:break;
	}
}

void gpioPortToggle(uint8_t u8_port)
{
	switch(u8_port)
	{
		case GPIOA: PORTA_DATA ^= (0xff);break;
		case GPIOB: PORTB_DATA ^= (0xff);break;
		case GPIOC: PORTC_DATA ^= (0xff);break;
		case GPIOD: PORTD_DATA ^= (0xff);break;
		default: break;
	}
}


uint8_t gpioPortRead(uint8_t u8_port)
{
	uint8_t port_value;
	switch(u8_port)
	{
		case GPIOA: port_value = PORTA_DATA;break;
		case GPIOB: port_value = PORTB_DATA;break;
		case GPIOC: port_value = PORTC_DATA;break;
		case GPIOD: port_value = PORTD_DATA;break;
		default: break;
	}
	return port_value;
}


void gpioPinDirection(uint8_t u8_port, uint8_t u8_pins, uint8_t u8_direction)
{

	if( u8_direction == INPUT)
	{
		switch(u8_port)
		{
			case GPIOA: PORTA_DIR &= ~(1 << u8_pins);break;
			case GPIOB: PORTB_DIR &= ~(1 << u8_pins);break;
			case GPIOC: PORTC_DIR &= ~(1 << u8_pins);break;
			case GPIOD: PORTD_DIR &= ~(1 << u8_pins);break;
			default: break;
		}
	}
	
	else if( u8_direction == OUTPUT)
	{
		switch(u8_port)
		{
			case GPIOA: PORTA_DIR |= (1 << u8_pins);break;
			case GPIOB: PORTB_DIR |= (1 << u8_pins);break;
			case GPIOC: PORTC_DIR |= (1 << u8_pins);break;
			case GPIOD: PORTD_DIR |= (1 << u8_pins);break;
			default: break;
		}
	}
}


void gpioPinWrite(uint8_t u8_port, uint8_t u8_pins, uint8_t u8_value)
{
	
	if( u8_value == 0)
	{
		switch(u8_port)
		{
			case GPIOA: PORTA_DATA &= ~(1 << u8_pins);break;
			case GPIOB: PORTA_DATA &= ~(1 << u8_pins);break;
			case GPIOC: PORTA_DATA &= ~(1 << u8_pins);break;
			case GPIOD: PORTA_DATA &= ~(1 << u8_pins);break;
			default: break;
		}
	}
	
	else if( u8_value == 1)
	{
		switch(u8_port)
		{
			case GPIOA: PORTA_DATA |= (1 << u8_pins);break;
			case GPIOB: PORTA_DATA |= (1 << u8_pins);break;
			case GPIOC: PORTA_DATA |= (1 << u8_pins);break;
			case GPIOD: PORTA_DATA |= (1 << u8_pins);break;
			default: break;
		}
	}
}

void gpioPinToggle(uint8_t u8_port, uint8_t u8_pins)
{
	switch(u8_port)
	{
		case GPIOA: PORTA_DATA ^= 1 << u8_pins;break;
		case GPIOB: PORTB_DATA ^= 1 << u8_pins;break;
		case GPIOC: PORTC_DATA ^= 1 << u8_pins;break;
		case GPIOD: PORTD_DATA ^= 1 << u8_pins;break;
		default: break;
	}
}

uint8_t gpioPinRead(uint8_t u8_port, uint8_t u8_pin)
{
	uint8_t u8_pin_value;
	switch(u8_port)
	{
		case GPIOA: u8_pin_value = ((PORTA_PIN >> u8_pin) & 1);break;
		case GPIOB: u8_pin_value = ((PORTB_PIN >> u8_pin) & 1);break;
		case GPIOC: u8_pin_value = ((PORTC_PIN >> u8_pin) & 1);break;
		case GPIOD: u8_pin_value = ((PORTD_PIN >> u8_pin) & 1);break;
		default:break;
	}
	return u8_pin_value;
}
