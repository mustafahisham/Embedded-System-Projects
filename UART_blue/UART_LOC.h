/*
 * UART_LOC.h
 *
 *  Created on: 20 Apr 2019
 *      Author: musta
 */

#ifndef UART_LOC_H_
#define UART_LOC_H_

#define UDR      *((volatile unsigned char*)0x9C)
#define UBRRH    *((volatile unsigned char*)0x98)
#define UBRRL    *((volatile unsigned char*)0x99)
#define UCSRB    *((volatile unsigned char*)0x9A)
#define UCSRC    *((volatile unsigned char*)0x9D)
#define UCSRA    *((volatile unsigned char*)0x9B)


// For UCSRB (No.PIN)
#define RXEN 4
#define TXEN 3

// For UCSRC (No.PIN)
#define UCSZ0 1
#define USBS  3

// For UCSRA (No.PIN)
#define UDRE 5
#define RXC  7

#endif /* UART_LOC_H_ */
