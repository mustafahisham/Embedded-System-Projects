/*
 * DIO_LOC.h
 *
 *  Created on: 31 Aug 2018
 *      Author: musta
 */

#ifndef DIO_LOC_H_
#define DIO_LOC_H_


// Define register
#define DDRA_Register  *((volatile u8*)0x3A)
#define PORTA_Register *((volatile u8*)0x3B)
#define PINA_Register  *((volatile u8*)0x39)

#define DDRB_Register  *((volatile u8*)0X37)
#define PORTB_Register *((volatile u8*)0X38)
#define PINB_Register  *((volatile u8*)0X36)

#define DDRC_Register  *((volatile u8*)0X34)
#define PORTC_Register *((volatile u8*)0X35)
#define PINC_Register  *((volatile u8*)0X33)

#define DDRD_Register  *((volatile u8*)0x31)
#define PORTD_Register *((volatile u8*)0x32)
#define PIND_Register  *((volatile u8*)0x30)

#endif /* DIO_LOC_H_ */
