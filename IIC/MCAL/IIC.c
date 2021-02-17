/*
 * IIC.c
 *
 *  Created on: 19 Oct 2018
 *      Author: musta
 */
#include "../typed.h"
#include "../Functions.h"
#include "IIC_LOC.h"


void IIC_InIt(void)
{
	// Start Operation

	 // Enable TWI enable bit
	set_bit(TWCR, 6); // Enable Ack

	// Status register : make them zeros "TWPS0, TWPS1"

}

void TWIStart(void)
{
  set_bit(TWCR,5); // Start condition
  set_bit(TWCR,7); // TWI Interrupt Flag
  set_bit(TWCR,2); // Enable TWI enable bit

  // wait flag to be 1
  while(!(TWCR & get_bit(TWCR, 7)));
}

void TWIStop(void)
{
	  set_bit(TWCR, 7); // TWI Interrupt Flag
	  set_bit(TWCR, 2); // Enable TWI enable bit
	  set_bit(TWCR, 4); // Stop condition
}

void TWIWrite(u8 data)
{
  TWDR = data;
  set_bit(TWCR, 7); // TWI Interrupt Flag
  set_bit(TWCR, 2); // Enable TWI enable bit

  // wait flag to be 1
  while(!(TWCR & get_bit(TWCR, 7)));
}

u8 TWIReadNACK(void)
{
	  set_bit(TWCR, 7); // TWI Interrupt Flag
	  set_bit(TWCR, 2); // Enable TWI enable bit

	  // wait flag to be 1
	  while(!(TWCR & get_bit(TWCR, 7)));

	  // Read Data
	  return TWDR;
}

u8 TWIGetStatus(void)
{
  u8 status;
  status = TWSR & 0xF8;
  return status;
}
