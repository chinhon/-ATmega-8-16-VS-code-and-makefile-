/*
 * GPIO.cpp
 * Author : NguyenChiNhon
 */ 
#include<GPIO.h>
/*
#	IO: 
#	DDRx -1-sbi(OUTPUT) -0-cbi(INPUT)
#	PORTx : OUTPUT	: -1-sbi(HIGH) -0-cbi(LOW)
			INPUT 	: -1-Pull up	  
*/
void GPIO_Init()
{   
	/* cau hinh chan */
	DDRB = 0xFF;
	PORTB = 0x00;
}