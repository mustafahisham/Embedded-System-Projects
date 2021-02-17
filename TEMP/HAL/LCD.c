/*
 * LCD.c
 *
 *  Created on: 1 Sep 2018
 *      Author: musta
 */


#include "../typed.h"
#include "../Functions.h"
#include "../MCAL/DIO/DIO.h"
#include "../MCAL/DIO/DIO_LOC.h"
#include "LCD_CHG.h"
#include <avr/delay.h>

void LCD_vidSendCMD(u8 u8CMD)
{
	// set RS 0
	//clr_bit(PORTA, 0);
	DIO_vidSetPinval(LCD_RsPort, LCD_RsPin, 0);

	// set RW to 0 "write"
	//clr_bit(PORTA, 1);
	DIO_vidSetPinval(LCD_RwPort, LCD_RwPin, 0);


	// Set falling register.
    //set_bit(PORTA,2);
	DIO_vidSetPinval(LCD_EnPort, LCD_EnPin, 1);

	//LCD_DataPort = u8CMD;
	DIO_vidSetPortVal(LCD_DataPort, u8CMD);

    _delay_ms(2);

    //clr_bit(PORTA,2);
    DIO_vidSetPinval(LCD_EnPort, LCD_EnPin, 0);

    _delay_ms(2);
}

void LCD_vidInit(void)
{

//	Delay 50ms to ensure to initialise of the LCD driver
	_delay_ms(50);

	// Function set
	LCD_vidSendCMD(0b00111100);
	_delay_ms(2);

	//display on/off
	LCD_vidSendCMD(0b00001100);
	_delay_ms(2);

	/* Clear Display */
	LCD_vidSendCMD(0b00000001);
	_delay_ms(5);

	/* Entry Mode Set  */
	LCD_vidSendCMD(0b00000110);

}

void LCD_vidWriteChar(u8 u8character)
{

	// set RS to 1
	//set_bit(PORTA, 0);
	DIO_vidSetPinval(LCD_RsPort, LCD_RsPin, 1);

	// set RW to 0 "write"
	//clr_bit(PORTA, 1);
	DIO_vidSetPinval(LCD_RwPort, LCD_RwPin, 0);

	// Set falling register.
	DIO_vidSetPinval(LCD_EnPort, LCD_EnPin, 1);

	DIO_vidSetPortVal(LCD_DataPort, u8character);

    _delay_ms(2);

    DIO_vidSetPinval(LCD_EnPort, LCD_EnPin, 0);

    _delay_ms(2);

}


void LCD_vidShiftRL(u8 u8index)
{
	u8 loop;

	for(loop = 0; loop < u8index; loop ++ )
	{
		LCD_vidSendCMD(0b00011100);

		_delay_ms(500);
	}

	for(loop = 0; loop < u8index; loop ++ )
	{
		LCD_vidSendCMD(0b00011000);

		_delay_ms(500);
	}
}

void LCD_vidWriteStr (u8 u8String[], u8 u8index)
{
	u8 loop;

	for (loop = 0; loop < u8index ; loop ++)
	{
		/* Write Character on LCD */
		LCD_vidWriteChar(u8String[loop]);

		_delay_ms(2);
     }

	_delay_ms(500);

////  Function to shift the entire display from right to lift and opposite.
//	LCD_vidShiftRL(16 - u8index);
//
////  Clear contents on display.
//	LCD_vidSendCMD(0b00000001);

	_delay_ms(5);

}

void LCD_Custom_Char (unsigned char loc, unsigned char *msg)
{
	unsigned char i;
	if(loc<8)
	{
		LCD_vidSendCMD(0x40 + (loc*8));	/* Command 0x40 and onwards forces the device to point CGRAM address */
		for(i=0;i<8;i++)	/* Write 8 byte for generation of 1 character */
		{
			LCD_vidWriteChar(msg[i]);
		}
	}
	LCD_vidSendCMD(0);
}



