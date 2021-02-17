
#include "datatype.h"
#include "bit.h"
#include "DIO.h"
#include "DIO_LOC.h"
void DIO_vidSetPortDir(u8 u8portName , u8 u8PortDir)
{
        switch(u8portName)
         {
        	case PORTA :
        	            {
        	              DDRA_REGISTER = u8PortDir ;
        	              }break;
        	case PORTB :
        	        	{
        	        	  DDRB_REGISTER = u8PortDir ;
        	        	}break;
        	case PORTC :
        	        	{
        	        	  DDRC_REGISTER = u8PortDir ;
        	        	}break;
        	case PORTD :
        	        	{
        	        	  DDRD_REGISTER = u8PortDir ;
        	        	}break;

         }

}

void DIO_vidSetpinDir(u8 u8portName , u8 u8pinNO,u8 u8portDir)

{
	switch (u8portName)
	{

	  case PORTA :
	  {
		if (u8portDir == PORTDIR_OUTPUT)
		{
			Set_Bit(DDRA_REGISTER ,u8pinNO);
		}

		else if (u8portDir==PORTDIR_INPUT)
		{
			Clr_Bit(DDRA_REGISTER ,u8pinNO);
		}
	  }break;

	  case PORTB :
		  {
			if (u8portDir==PORTDIR_OUTPUT)
			{
				Set_Bit(DDRB_REGISTER ,u8pinNO);
			}

			else if  (u8portDir==PORTDIR_INPUT )
			{
				Clr_Bit(DDRB_REGISTER ,u8pinNO);
			}
		  }break;
	  case PORTC :
		  {
			if (u8portDir==PORTDIR_OUTPUT)
			{
				Set_Bit(DDRC_REGISTER ,u8pinNO);
			}

			else if (u8portDir==PORTDIR_INPUT )
			{
				Clr_Bit(DDRC_REGISTER ,u8pinNO);
			}
		  }break;
	  case PORTD :
		  {
			if (u8portDir==PORTDIR_OUTPUT)
			{
				Set_Bit(DDRD_REGISTER ,u8pinNO);
			}

			else if  (u8portDir==PORTDIR_INPUT )
			{
				Clr_Bit(DDRD_REGISTER ,u8pinNO);
			}
		  }break;
	}
}

void DIO_vidSetpinVAL(u8 u8portName , u8 u8pinNO,u8 u8pinVal)

{


	switch (u8portName)
	{

	  case PORTA :
	  {
		if (u8pinVal == HIGH)
		{
			Set_Bit(PORTA_REGISTER ,u8pinNO);
		}

		else if (u8pinVal==LOW)
		{
			Clr_Bit(PORTA_REGISTER ,u8pinNO);
		}
	  }break;

	  case PORTB :
		  {
			if (u8pinVal == HIGH)
			{
				Set_Bit(PORTB_REGISTER ,u8pinNO);
			}

			else if (u8pinVal==LOW)
			{
				Clr_Bit(PORTB_REGISTER ,u8pinNO);
			}
		  }break;
	  case PORTC:
		  {
			if (u8pinVal == HIGH)
			{
				Set_Bit(PORTC_REGISTER ,u8pinNO);
			}

			else if (u8pinVal==LOW)
			{
				Clr_Bit(PORTC_REGISTER ,u8pinNO);
			}
		  }break;
	  case PORTD :
		  {
			if (u8pinVal == HIGH)
			{
				Set_Bit(PORTD_REGISTER ,u8pinNO);
			}

			else if (u8pinVal==LOW)
			{
				Clr_Bit(PORTD_REGISTER ,u8pinNO);
			}
		  }break;
}
}

void DIO_vidSetPortVAL(u8 u8portName , u8 u8PortVal)
{
switch(u8portName)
 {
	case PORTA :
	            {
	             PORTA_REGISTER = u8PortVal ;
	              }break;
	case PORTB :
	        	{
	        	 PORTB_REGISTER = u8PortVal ;
	        	}break;
	case PORTC :
	        	{
	        	PORTC_REGISTER = u8PortVal ;
	        	}break;
	case PORTD :
	        	{
	        	  PORTD_REGISTER = u8PortVal ;
	        	}break;

 }
}



