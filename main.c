/*
 * GccApplication1.c
 *
 * Created: 09-May-19 2:15:46 PM
 * Author : JAYASREE
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA=0X80;
	DDRB=0X80;
	DDRC=0X80;
	DDRD=0X80;
    while (1) 
    {
		PORTA|=1<<PA7;
		PORTB|=1<<PB7;
		PORTC|=1<<PC7;
		PORTD|=1<<PD7;
		
    }
}

