/*
 * TIMER_PhaseCorrecr_PWM.c
 *
 * Created: 9/27/2020 1:53:17 AM
 * Author : monad
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRC |=(1<<2)|(1<<7);
	DDRB |=(1<<3);
	OCR0 =200;
	TCCR0 |=(1<<COM01)|(1<<CS00)|(1<<CS01)|(1<<WGM00);
	sei();
    /* Replace with your application code */
    while (1) 
    {
    }
}
ISR (TIMER0_OVF_vect)
{
	
}
ISR (TIMER0_COMP_vect)
{
	
}
