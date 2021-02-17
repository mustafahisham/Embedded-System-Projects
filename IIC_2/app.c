/*
 * app.c
 *
 *  Created on: 19 Oct 2018
 *      Author: musta
 */

#include "typed.h"
#include "Functions.h"
#include "DIO/DIO.h"
#include "IIC.h"
#include "eeprom.h"
#include"avr/delay.h"
#include "avr/io.h"

void main (void)
{
	u8 get_value,S;
	DIO_vidSetPortDir(PORTA,1);
	DIO_vidSetPortDir(PORTB,0);

	I2C_Init();

	S = EEPROM_WriteByte(0x00,9);

	_delay_ms(50);

	get_value = TWDR;

	if(get_value == 9)
	{DIO_vidSetPinval(PORTB,0,1);}
}
