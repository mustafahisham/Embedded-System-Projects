/*
 * APP.C
 *
 *  Created on: 1 Sep 2018
 *      Author: musta
 */

#include"typed.h"
#include"Functions.h"
#include "MCAL/DIO.h"
#include "MCAL/DIO_LOC.h"
#include "HAL/LCD.h"



void main(void)
{


	DIO_vidSetPortDir(PORTB, 0X0F);
	DIO_vidSetPortDir(PORTD, 0XFF);
	LCD_vidInit();
	while(1)
	{
		LCD_vidWriteStr("Mustafa",7);
	}

}
