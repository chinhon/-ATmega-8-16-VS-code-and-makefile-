// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
#include<PWM.h>
#include<ISR.h>

int main(void)
{
    GPIO_Init();
    Interrupt_Init();
    PWM_Init(40000); //20ms
    PWM_channel_A(2000);
    PWM_channel_B(3000);
    while (1)
    {
    //code
    }
    return 0;
}
