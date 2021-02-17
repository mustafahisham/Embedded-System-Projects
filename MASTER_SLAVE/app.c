/*
 * app.c
 *
 *  Created on: 12 Oct 2018
 *      Author: musta
 */

#include "typed.h"
#include "Functions.h"
#include "MCAL/Master_Slave.h"
#include "MCAL/DIO/DIO.h"
#include "HAL/LCD.h"

void main(void)
{

  u8 value;

  DIO_vidSetPortDir(PORTD,0XFF);
  DIO_vidSetPortDir(PORTA,0XFF);

  LCD_vidInit();

	//MOSI AS SLAVE
  DIO_vidSetPinDir(PORTB,5,0);

  // MISO AS A SLAVE
  DIO_vidSetPinDir(PORTB,6,1);

  // (SS)' AS A SLAVE
  DIO_vidSetPinDir(PORTB,4,0);

  // clock
  DIO_vidSetPinDir(PORTB,7,0);

  SPI_SlaveInit();

  SPI_MasterSend('R');

  value = SPI_SlaveReceive();

  LCD_vidWriteChar(value);

  while(1);

}
