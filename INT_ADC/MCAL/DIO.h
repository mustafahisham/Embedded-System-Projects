/*
 * DIO.h
 *
 *  Created on: Aug 31, 2018
 *      Author: haitham
 */

#ifndef DIO_H_
#define DIO_H_
/*Define port number */
# define PORTA ((u8) 1)
# define PORTB ((u8) 2)
# define PORTC ((u8) 3)
# define PORTD ((u8) 4)
/*Define port Dir*/
#define PORTDIR_OUTPUT ((u8) 0xff )
#define PORTDIR_INPUT  ((u8) 0x00 )
/*pin value*/
#define HIGH 1
#define LOW 0
/*pin number */
#define pin0 ((u8) 0)
#define pin1 ((u8) 1)
#define pin2 ((u8) 2)
#define pin3 ((u8) 3)
#define pin4 ((u8) 4)
#define pin5 ((u8) 5)
#define pin6 ((u8) 6)
#define pin7 ((u8) 7)

void DIO_vidSetPortDir(u8 u8portName , u8 u8PortDir) ;
void DIO_vidSetpinDir(u8 u8portName , u8 u8pinNO,u8 u8portDir);
void DIO_vidSetpinVAL(u8 u8portName , u8 u8pinNO,u8 u8pinVal);
void DIO_vidSetPortVAL(u8 u8portName , u8 u8PortVal);

#endif /* DIO_H_ */
