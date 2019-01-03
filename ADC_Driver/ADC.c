#include "ADC.h"
#include "macros.h"
#include <avr/io.h>

void ADC_vInit(){
	/*adc ENABLE*/
	SET_BIT(ADCSRA,ADEN);
	/*set vref*/
	SET_BIT(ADMUX,REFS0);
	CLEAR_BIT(ADMUX,REFS1);
	/* PRESCALER */
	CLEAR_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS2);	
	
}


short ADC_vRead()
{ short d = 0;
	/* start conversion*/
	SET_BIT(ADCSRA,ADSC);
	/*check ADIF Flag*/	
	CLEAR_BIT(ADMUX,ADLAR);
	while(READ_BIT(ADCSRA,ADIF) == 0)
	{
		
	}
		d = ADCL;
		d |= (short) (ADCH << 8);
			
	
	
	return d;
}