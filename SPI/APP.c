/*
 * APP.c
 *
 *  Created on: 6 Oct 2018
 *      Author: musta
 */
#include "typed.h"
#include "MCAL/DIO.h"
#include "USART.h"


void main(void)
{
	u8 u8Result;
	DIO_vidSetPinDir(PORTD, 0, 0);
	DIO_vidSetPinDir(PORTD, 1, 1);
	DIO_vidSetPortDir(PORTA, 0XFF);
	UART_vidInit();


	while(1)
	{
		u8Result = UART_u8GetChar();

		switch(u8Result)
		{
		case'1':
			DIO_vidSetPinval(PORTA,0,1);
			break;

		case'2':
			DIO_vidSetPortVal(PORTA, 0X02);
			break;

		case'3':
			DIO_vidSetPortVal(PORTA, 0X04);
			break;

		case'4':
			DIO_vidSetPortVal(PORTA, 0X08);
			break;

		case'5':
			DIO_vidSetPortVal(PORTA, 0X10);
			break;

		case'6':
			DIO_vidSetPortVal(PORTA, 0X20);
			break;

		case'7':
			DIO_vidSetPortVal(PORTA, 0X40);
			break;

		case'8':
			DIO_vidSetPortVal(PORTA, 0X80);
			break;
		}
	}
}
