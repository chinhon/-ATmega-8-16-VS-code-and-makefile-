// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<GPIO.h>
#include<ISR.h>
#include<util/delay.h>

int main(void)
{   
    GPIO_Init();
    Interrupt_Init();
    while (1)
    {
       
    }
    return 0;
}
