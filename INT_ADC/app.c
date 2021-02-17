#include "MCAL/datatype.h"
#include "MCAL/ADC.h"
#include "MCAL/DIO.h"


void main ()
{ 	DIO_vidSetPortDir(PORTD,PORTDIR_OUTPUT) ;
	ADC_vidinit() ;
    f32 data ;

	while (1)

	{
		 ADC_vidstartConv();
		data= ADC_u16GetData();
		 if (data<1.5)
		 {
			 DIO_vidSetPortVAL(PORTD,0b00000001);
		 }
		 if (data>1.5 && data <3)
				 {
					 DIO_vidSetPortVAL(PORTD,0b00000010);
				 }
		 if (data>3)
				 {
					 DIO_vidSetPortVAL(PORTD,0b00000100);
				 }


	}
}
