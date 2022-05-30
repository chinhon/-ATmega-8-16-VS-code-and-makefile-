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
	cbi(DDRC,1);
	cbi(DDRC,2);
	cbi(DDRC,3);
	cbi(DDRC,0);
	sbi(PORTC,1);
	sbi(PORTC,2);
	sbi(PORTC,3);
	sbi(PORTC,0);
}