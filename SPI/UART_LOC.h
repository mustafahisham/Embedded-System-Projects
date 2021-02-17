/*
 * UART_LOC.h
 *
 *  Created on: 6 Oct 2018
 *      Author: musta
 */

#ifndef UART_LOC_H_
#define UART_LOC_H_

#define UDR    *((volatile u8*)0x2C)
#define UCSRA  *((volatile u8*)0x2B)
#define UCSRB  *((volatile u8*)0x2A)
#define UBRRL  *((volatile u8*)0x29)
#define UBRRH  *((volatile u8*)0x40)
#define UBRRL  *((volatile u8*)0x29)
#define UCSRC  *((volatile u8*)0x40)

#endif /* UART_LOC_H_ */
