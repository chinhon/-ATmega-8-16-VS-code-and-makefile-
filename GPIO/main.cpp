// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>

int main(void)
{
    GPIO_Init();
    while (1)
    {
        /* code */
        sbi(PORTD,0);
        sbi(PORTD,2);
        _delay_ms(1000);
        cbi(PORTD,0);
        cbi(PORTD,2);
        _delay_ms(1000);
    }
    return 0;
}
