/*
 * TC1.cpp
 * Author : NguyenChiNhon
 *
    X = (Delta * Fcpu)/clock
    TCNT0 = 256 - X (8bit) KHz
    ******
    Delta: thoi gian dinh thi (ms Y* 10^-3)(s)
    Fcpu:  tan so thach anh (Y* 10^6)(Mhz)

 */ 

#include<TC1.h>
#include<GPIO.h>
#include<util/delay.h>
/*vi du CTC*/
volatile unsigned char val = 0;
void TC1_Init()
{   
    /* TIMER1 
    // ######################
//  TCCR1B |= (1<<CS10);                     // Clock i/o
//  TCCR1B |= (1<<CS11);                     // Clk/8
//  TCCR1B |= (1<<CS11)|(1<<CS10);           // Clk/64
    TCCR1B |= (1<<CS12);                     // Clk/256
//  TCCR1B |= (1<<CS12)|(1<<CS10);           // Clk/1024
    TCNT1 = 3035;                            // gia tri khoi tao
    TIMSK |= (1 << TOIE1);                  // Ngat tran
    sei();                                  // cho phep ngat
    // ######################  
     END TIMER1 */

//###############################################

    /* COUNTER1 CTC */
    // ######################
    // MODE CTC
    TCCR1B |= (1<<WGM12)|(1<<CS11)|(1<<CS12);             // T1 canh xuong
//  TCCR1B |= (1<<WGM12)|(1<<CS10)|(1<<CS11)|(1<<CS12);   // T1 canh len 
    TCNT1 = 0;
    OCR1A = 4;                                 // gia tri so sanh
    TIMSK |= (1<<OCIE1A);                      // ngat khi dem bang 4
    sei();
    while (1)
    {
        /* code */
    }
    

    // ######################
    /* END COUNTER1 CTC */

}
/*  Chuong trinh ngat TIMER 
ISR(TIMER1_OVF_vect)
{
    TCNT1 = 3035;  
    tbi(PORTB,0);
}
*/
/* Chuong trinh CTC */
ISR(TIMER1_COMPA_vect)
{
    val++;
    if (val==10)
    {
        /* code */
        val = 0;
    }
    PORTB = val;
    
    _delay_ms(100);
}