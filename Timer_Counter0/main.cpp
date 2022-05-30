// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<GPIO.h>
#include<util/delay.h>
#include<TC0.h>
int main(void)
{   
    GPIO_Init();
    TC0_Init();
    while (1)
    {
       
    }
    return 0;
}
