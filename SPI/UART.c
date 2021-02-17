/*
 * UART.c
 *
 *  Created on: 6 Oct 2018
 *      Author: musta
 */
#include "typed.h"
#include "Functions.h"
#include "UART_LOC.h"

void UART_vidInit(void)
{
	// Set RX,TX and Error flags to zero.
	UCSRA = 0 ;

	// Set RXEN and TXEN
	set_bit(UCSRB, 4);
	set_bit(UCSRB, 3);

	// Set URSEL to be able to write on UCSRC
	set_bit(UCSRC, 7);

	// Select Async mode.
	clr_bit(UCSRC, 6);

	// Select Parity mode to disabled.
	clr_bit(UCSRC, 5);
	clr_bit(UCSRC, 4);

	// Select stop bit to 1 bit.
	clr_bit(UCSRC, 3);

	//Select char size to 8-bits.
	set_bit(UCSRB, 2);
	clr_bit(UCSRC, 2);
	clr_bit(UCSRC, 1);

	// Set baud rate to 9600 at 12Htz.
	UBRRH = 0;
	UBRRL = 77;
}

void UART_vidSendChar(u8 u8SendChar)
{
	while(get_bit(UCSRA, 5) == 0);
	UDR = u8SendChar;
}

u8 UART_u8GetChar(void)
{
	u8 x;
	while(get_bit(UCSRA, 7) == 0);
	x = UDR;
	return x ;
}
