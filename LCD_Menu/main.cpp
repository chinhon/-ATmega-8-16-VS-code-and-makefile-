// MCU
#ifndef __AVR_ATmega8__
	#define __AVR_ATmega8__
#endif
#include<avr/io.h>
#include<util/delay.h>
#include<GPIO.h>
#include<LCD.h>
#include<avr/sfr_defs.h>
typedef char String[100];
#define buttonDown 0 
#define buttonUp 1 
#define buttonOke 2 
#define buttonExit 3
int StateOke = 0; 
int StateDown = 0;
int StateUp = 0;
int StateExit = 0;
const int numOfScreens = 4;
int currentScreen = 0;
String screens[numOfScreens][2] = {{"Value_1","Unit_1"}, {"Value_2", "Unit_2"}, {"Value_3","Unit_3"}, {"Value_4","Unit_4"}};
int parameters[numOfScreens] = {0, 10, 50, 100};

int main(void)
{
    GPIO_Init();
    LCD_Init();							/* Initialization of LCD*/
    LCD_Clear();
    LCD_String_xy(0,0,">");
    while (1)
    {
        if(bit_is_clear(PINC,buttonDown))
        {
        _delay_ms(50);
        LCD_String_xy(StateDown,0,">");
        StateDown ++;
        _delay_ms(1000);
        }
    }
}
