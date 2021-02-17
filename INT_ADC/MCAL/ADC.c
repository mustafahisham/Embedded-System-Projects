#include "datatype.h"
#include "DIO.h"
#include "bit.h"
#include "ADC_LOC.h"

void ADC_vidinit()
{   /*select ADC channel input*/
	DIO_vidSetPortDir(PORTA,PORTDIR_INPUT);

	/*ENABLE ADC */
	Set_Bit(ADCSRA,7);
	/*SET THE SPEED */
	/**/
	/* select voltage refrence */
	Set_Bit(ADMUX,6);
	/*SELECT INPUT CHANNEL*/
	/*Initially 0000 _pin0 in portA IS THE SINGLE ENDED CHANNEL*/

}
void ADC_vidstartConv()
{
	Set_Bit(ADCSRA,6);
}

f32 ADC_u16GetData ()
{
	f32  ADC_return ;

    while (1)
	{ /* INERRUPT FLAG =1 */

    	if(Get_Bit(ADCSRA,4) == 1)
	    {
			ADC_return = ADCL_REGISTER;
			ADC_return = ADC_return + (ADCH_REGISTER<<8);
			ADC_return = (ADC_return * 5)/1024;

			/*CLEAR FLAG */
			Set_Bit(ADCSRA,4);
			return ADC_return ;
		}
	}
}

