/*
 * GPIO.cpp
 * Author : NguyenChiNhon
 */ 
#include<GPIO.h>
#include<avr/io.h>
/*
#	IO: 
#	DDRx -1-sbi(OUTPUT) -0-cbi(INPUT)
#	PORTx : OUTPUT	: -1-sbi(HIGH) -0-cbi(LOW)
			INPUT 	: -1-Pull up	  
*/
void GPIO_Init()
{   
	/* OC1A */
    sbi(DDRB,1);
	cbi(PORTB,1);
	/* OC1B */
    sbi(DDRB,2);
	cbi(PORTB,2);
	/*INT0 INT1*/
	cbi(DDRD,2);
	sbi(PORTD,2);
	cbi(DDRD,3);
	sbi(PORTD,3);
}