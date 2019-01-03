/*
 * ADC_Driver.c
 *
 * Created: 12/29/2018 9:14:29 AM
 * Author : user
 */ 

#include <avr/io.h>
#include "macros.h"
#include "ADC.h"

int main(void)
{
	ADC_vInit();
    SET_BIT(DDRD,5);
    
    SET_BIT(DDRD,6);
	
	while (1) 
    {
			if(ADC_vRead() < 500)
			{
				PORTD |= (1<<6);
				PORTD &= ~(1<<5);
			}
			else if(ADC_vRead() < 1023)
			{
			PORTD |= (1<<5);
			PORTD &= ~(1<<6);
			}
		    
		
    }
}

