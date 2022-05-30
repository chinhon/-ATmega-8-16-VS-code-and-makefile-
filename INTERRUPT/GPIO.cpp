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
	/* INT0   */
	cbi(DDRD,2);
	sbi(PORTD,2);
	/* INT1   */
	cbi(DDRD,3);
	sbi(PORTD,3);

}