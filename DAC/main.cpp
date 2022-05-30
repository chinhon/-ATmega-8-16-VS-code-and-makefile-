// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
unsigned char DACValue[] = {127,166,202,230,248,254,248,230,202,166,127,88,52,24,6,0,6,24,52,88};
int main(void)
{
    GPIO_Init();
    while (1)
    {
       for( int i=0;i<20;i++)
        {
        PORTD = DACValue[i];
        _delay_ms(10);
        }
    }
    return 0;
}


