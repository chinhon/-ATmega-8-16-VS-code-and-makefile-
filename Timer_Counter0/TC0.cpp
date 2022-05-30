/*
 * TC0.cpp
 * Author : NguyenChiNhon
 *
 #  Khai bao TCCRO
 #  Gia tri TCNT0
 #  Cho phep ngat TIMSK
 #  Sei();
 #  Thuc thi chuong trinh ngat

    X = (Delta * Fcpu)/clock
    TCNT0 = 256 - X (8bit) KHz
    ******
    Delta: thoi gian dinh thi (ms Y* 10^-3)(s)
    Fcpu:  tan so thach anh (Y* 10^6)(Mhz)

 */ 

#include<TC0.h>
#include<avr/interrupt.h>
#include<GPIO.h>
void TC0_Init()
{   
    /* TIMER0 */
    // ######################
//  TCCR0 |= (1<<CS00);                     // Clock i/o
    TCCR0 |= (1<<CS01);                     // Clk/8
//  TCCR0 |= (1<<CS01)|(1<<CS00);           // Clk/64
//  TCCR0 |= (1<<CS02);                     // Clk/256
//  TCCR0 |= (1<<CS02)|(1<<CS00);           // Clk/1024
    TCNT0 = 130;                            // gia tri khoi tao
    TIMSK |= (1 << TOIE0);                  // Ngat tran
    sei();                                  // cho phep ngat
    // ######################  
    /* END TIMER0 */

//###############################################

    /* COUNTER0 */
    // ######################
//  TCCR0 |= (1<<CS01)|(1<<CS02);             // T0 canh xuong
//  TCCR0 |= (1<<CS00)|(1<<CS01)|(1<<CS02);   // T0 canh len 
//  TCNT0 = 0;   
    // ######################
    /* END COUNTER0 */

}
/*  Chuong trinh ngat */
ISR(TIMER0_OVF_vect)
{
    TCNT0 = 130;  
    tbi(PORTB,0);
}