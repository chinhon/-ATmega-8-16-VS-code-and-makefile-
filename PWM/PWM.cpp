/*
 * PWM.cpp
 *
 * Author : NguyenChiNhon
 */ 
/*
    ICR1(us)
    X = Fcpu/ clk (16MHZ/8=2ms  *20ms)   (Hz-s , Mhz - ms, Khz - us)
*/
#include<PWM.h>
#include<GPIO.h>
#include<avr/io.h>

void PWM_Init(uint16_t Time_pr) // PWM_Init( *ms)
{   
    TCCR1A |= (1<< COM1A1)| (1<< COM1B1)| (1<< WGM11); // OC1A | OC1B dau ra muc cao
//  TCCR1A |= (1<< COM1A0)| (1<< COM1B0)| (1<< WGM11); // OC1A | OC1B dau ra muc thap

//  TCCR1B |= (1<< WGM13)| (1<< WGM12)|(1<<CS10);       // mode 14 Fast PWM, Clock i/o
    TCCR1B |= (1<< WGM13)| (1<< WGM12)|(1<< CS11);      // mode 14 Fast PWM, ICR1 luu gia tri TOP; Clk/8
//  TCCR1B |= (1<< WGM13)| (1<< WGM12)|(1<<CS11)|(1<<CS10);           // Clk/64
//  TCCR1B |= (1<< WGM13)| (1<< WGM12)|(1<<CS12);                     // Clk/256
//  TCCR1B |= (1<< WGM13)| (1<< WGM12)|(1<<CS12)|(1<<CS10);           // Clk/1024
    ICR1 = Time_pr; //Time period(T) 20ms
}
void PWM_channel_A(uint16_t Duty_A) //Duty cycle 1ms 0 do|1.5ms 90 do
{
    OCR1A= Duty_A; 
}
void PWM_channel_B(uint16_t Duty_B) //Duty cycle 1ms 0 do|1.5ms 90 do
{
    OCR1B= Duty_B; 
}