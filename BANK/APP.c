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
#include "HAL/KeyPad/Keypad.h"

u8 key[12]= {'1','2','3','4','5','6','7','8','9','a','b'};


void main(void)
{
	u8 u8key_pressedKey;
	DIO_vidSetPortDir(PORTB, 0X0F);
	DIO_vidSetPortDir(PORTD, 0XFF);
	KEYPAD_vidInit();
	LCD_vidInit();

	while(1)
	{
		u8key_pressedKey = KEYPAD_u8GetPressedKey();
		LCD_vidWriteChar(key[u8key_pressedKey]);
	}

}
