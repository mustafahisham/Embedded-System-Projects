/*
 * DIO.c
 *
 *  Created on: 31 Aug 2018
 *      Author: musta
 */

#include "../../typed.h"
#include "DIO_LOC.h"
#include "DIO.h"
#include "../../Functions.h"


void DIO_vidSetPortDir(u8 u8PortName, u8 u8PortDir)
{
	switch(u8PortName)
	{
	  case PORTA:
	  {
		  DDRA_Register = u8PortDir ;

	  }break ;
	  case PORTB:
	  {
		  DDRB_Register = u8PortDir ;

	  }break ;
	  case PORTC:
	  {
		  DDRC_Register = u8PortDir ;

	  }break ;
	  case PORTD:
	  {
		  DDRD_Register = u8PortDir ;

	  }
	  break ;
	  default: /* Wrong Port ID */        break;
	}

}

void DIO_vidSetPortVal(u8 u8PortName,u8 u8PortVal)
{
	switch (u8PortName)
	{
	case PORTA :
		{
		PORTA_Register = u8PortVal;
		}break;

	case PORTB :
		{
		PORTB_Register = u8PortVal;
		}break;

	case PORTC :
		{
		PORTC_Register = u8PortVal;
		}break;

		case PORTD :
		{
		PORTD_Register = u8PortVal;
		}break;

		default: /* Wrong Port ID */        break;
	}
}

void DIO_vidSetPinDir(u8 u8PortName, u8 u8PinNo, u8 u8PinDir)
{
	switch(u8PortName)
	{
	  case PORTA :
	  {
		if(u8PinDir == PORTDIR_INPUT)
		{
		  clr_bit(DDRA_Register,u8PinNo);
		}

		else if (u8PinDir == PORTDIR_OUTPUT)
		{
			set_bit(DDRA_Register, u8PinNo)	;
		}

		else
		{
			// INAVALLED
		}

	  } break;

	  case PORTB :
	  {
		if(u8PinDir == PORTDIR_INPUT)
		{
		  clr_bit(DDRB_Register,u8PinNo);
		}

		else if (u8PinDir == PORTDIR_OUTPUT)
		{
			set_bit(DDRB_Register, u8PinNo)	;
		}

		else
		{
			// INAVALLED
		}

	  } break;

	  case PORTC :
	  {
		if(u8PinDir == PORTDIR_INPUT)
		{
		  clr_bit(DDRC_Register,u8PinNo);
		}

		else if (u8PinDir == PORTDIR_OUTPUT)
		{
			set_bit(DDRC_Register, u8PinNo)	;
		}

		else
		{
			// INAVALLED
		}

	  } break;

	  case PORTD :
	  {
		if(u8PinDir == PORTDIR_INPUT)
		{
		  clr_bit(DDRD_Register,u8PinNo);
		}

		else if (u8PinDir == PORTDIR_OUTPUT)
		{
			set_bit(DDRD_Register, u8PinNo)	;
		}

		else
		{
			// INAVALLED
		}

	  } break;

	}
}

void DIO_vidSetPinval(u8 u8portName, u8 u8pinNo, u8 u8pinVal)
{
	switch(u8portName)
	{
	case PORTA:
	{
		if(u8pinVal == HIGH)
		{
			set_bit(PORTA_Register, u8pinNo);
		}

		else if (u8pinVal == LOW)
		{
			clr_bit(PORTA_Register, u8pinNo);
		}
	}break;

	case PORTB:
	{
		if(u8pinVal == HIGH)
		{
			set_bit(PORTB_Register, u8pinNo);
		}

		else if (u8pinVal == LOW)
		{
			clr_bit(PORTB_Register, u8pinNo);
		}
	}break;

	case PORTC:
	{
		if(u8pinVal == HIGH)
		{
			set_bit(PORTC_Register, u8pinNo);
		}

		else if (u8pinVal == LOW)
		{
			clr_bit(PORTC_Register, u8pinNo);
		}
	}break;

	case PORTD:
	{
		if(u8pinVal == HIGH)
		{
			set_bit(PORTD_Register, u8pinNo);
		}

		else if (u8pinVal == LOW)
		{
			clr_bit(PORTD_Register, u8pinNo);
		}
	}break;
	}
}

u8 DIO_u8GetPinaValue(u8 u8portName,u8 u8pinNo)
{
  u8 value;
  switch(u8portName)
  {
  	  case PORTA:
  	  {
  		 value = get_bit(PINA_Register, u8pinNo);
  	  }break;

  	case PORTB:
  	  	  {
  	  		 value = get_bit(PINB_Register, u8pinNo);
  	  	  }break;

  	case PORTC:
  	  	  {
  	  		 value = get_bit(PINC_Register, u8pinNo);
  	  	  }break;

	case PORTD:
  	  	  {
  	  		 value = get_bit(PIND_Register, u8pinNo);
  	  	  }break;

  }
  return value;
}
