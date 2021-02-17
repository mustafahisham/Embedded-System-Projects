/*
 * TIMER1.c
 *
 *  Created on: 29 Sep 2018
 *      Author: musta
 */

#include "../Functions.h"
#include "../typed.h"
#include "Timer_LOC.h"

extern void Timer1_vidInit(void)
{
	// Set prescaler to 8
	set_bit(TCCR1B , CS11);

	// SET mode. Fast PWM: TOP = ICR
	set_bit(TCCR1A , WGN11);
	set_bit(TCCR1B , WGN12);
	set_bit(TCCR1B , WGN13);

	//Clear OCR0 on compare match
	set_bit(TCCR1A , COM1A1);

	//Set Top value to get freq 50HZ (T = 0.02s)
	ICR1 = 30000;
}

extern void TIMER1_vidSetOCRA1(u16 u16OCRVal)
{
	OCR1A = u16OCRVal;
}

