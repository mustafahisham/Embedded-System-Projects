/*
 * DIO.h
 *
 *  Created on: 31 Aug 2018
 *      Author: musta
 */

#ifndef DIO_H_
#define DIO_H_


// Define PORT number
#define PORTA ((u8)0)
#define PORTB ((u8)1)
#define PORTC ((u8)2)
#define PORTD ((u8)3)

//Define PORT Direction
#define PORTDIR_OUTPUT ((u8)0XFF)
#define PORTDIR_INPUT  ((u8)0)

// PIN Defines
#define PIN0 ((u8)0)
#define PIN1 ((u8)1)
#define PIN2 ((u8)2)
#define PIN3 ((u8)3)
#define PIN4 ((u8)4)
#define PIN5 ((u8)5)
#define PIN6 ((u8)6)
#define PIN7 ((u8)7)

/* PIN Directions */
#define INPUT  0
#define OUTPUT 1

/* PIN Value Options */
#define HIGH   1
#define LOW    0

void DIO_vidSetPortDir(u8 u8PortNo, u8 u8PortDir);

void DIO_vidSetPinDir(u8 u8PortName, u8 u8PinNo, u8 uS8PinDir);

void DIO_vidSetPinval(u8 u8portName, u8 u8pinNo, u8 u8pinVal);

void DIO_vidSetPortVal(u8 u8PortName,u8 u8PortVal);
#endif /* DIO_H_ */
