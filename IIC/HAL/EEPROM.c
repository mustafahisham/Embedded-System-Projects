/*
 * EEPROM.c
 *
 *  Created on: 19 Oct 2018
 *      Author: musta
 */

#include "../typed.h"
#include "../Functions.h"
#include "../MCAL/IIC.h"

u8 EEPROM_WriteByte(u16 addr, unsigned char data)
{
	  u8 state = 0;
	  u8 _3MSBAddr = 0;

	  // Start TWI
	  TWIStart();
	  // Get State
	  state = TWIGetStatus();
	  // Check if TWI Start


}
