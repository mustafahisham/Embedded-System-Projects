/*
 * App.c
 *
 *  Created on: 5 Oct 2018
 *      Author: musta
 */
#include "typed.h"
#include "MCAL/DIO.h"
#include "Functions.h"
#include "avr/delay.h"

#define WDTCR *((volatile u8*)0x41)

void int_WatchDog(void);
void enable(void);

void main(main)
{
  DIO_vidSetPinDir(PORTC,0,1);
  DIO_vidSetPinval(PORTC,0,1);
  enable();
  int_WatchDog();

  while(1)
  {

  }

}

void int_WatchDog(void)
{
	// 2.1 Seconds
	set_bit(WDTCR,0);
	set_bit(WDTCR,1);
	set_bit(WDTCR,2);

}

void enable(void)
{
	// Set watch dog enable and turn on enable
	set_bit(WDTCR,3);
	set_bit(WDTCR,4);
}
