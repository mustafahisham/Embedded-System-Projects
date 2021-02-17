/*
 * APP.c
 *
 *  Created on: 29 Sep 2018
 *      Author: musta
 */

#define F_CPU 12000000
#include "Functions.h"
#include "typed.h"
#include "MCAL/TIMER1.h"
#include"avr/delay.h"
#include "MCAL/DIO.h"

void main(void)
{
	DIO_vidSetPinDir(PORTD, 5 , 1);
	u16 servo = 1500;
	Timer1_vidInit();

	while(1)
	{
		TIMER1_vidSetOCRA1(servo);
		_delay_ms(20);
		servo += 20;

		if (servo == 3000)
			servo = 1500;
	}
}
