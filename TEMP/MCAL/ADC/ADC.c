#include "../../typed.h"
#include "../DIO/DIO.h"
#include "../../Functions.h"
#include "ADC_LOC.h"

void ADC_vidinit()
{   /*select ADC channel input*/
	DIO_vidSetPortDir(PORTA,PORTDIR_INPUT);

	/*ENABLE ADC */
	set_bit(ADCSRA,7);
	/*SET THE SPEED */
	/**/
	/* select voltage reference */
	set_bit(ADMUX,6);
	/*SELECT INPUT CHANNEL*/
	/*Initially 0000 _pin0 in portA IS THE SINGLE ENDED CHANNEL*/

}
void ADC_vidstartConv()
{
	set_bit(ADCSRA,6);
}

u16 ADC_u16GetData ()
{
	u16  ADC_return ;
	u8 gate;

    while (1)
	{ /* INERRUPT FLAG =1 */

    	gate = get_bit(ADCSRA,4);

    	if(gate == 1)
	    {
			ADC_return = ADCL_REGISTER;
			ADC_return = ADC_return + (ADCH_REGISTER<<8);
			ADC_return = ((ADC_return * 5) * 100)/1024;

			/*CLEAR FLAG */
			set_bit(ADCSRA,4);
			return ADC_return ;
		}
	}
}

