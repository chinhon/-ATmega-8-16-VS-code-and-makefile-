/*
 * ISR.c
 * Author : NguyenChiNhon
 */ 
// Interrupt
/*
#   Khai bao Port 
#   Khai bao GICR
#   Khai bao MCUCR
#   Goi ham sei()
#   Goi vector
*/
#include<ISR.h>
#include<avr/interrupt.h>
#include<util/delay.h>
#include<GPIO.h>
void Interrupt_Init()
{   
    
    GICR |= (1<<INT1); //Ngat tren chan INT1
//  MCUCR &= ~{(1<< ISC10)|(1<< ISC11)}; // Muc thap
//  MCUCR |= (1<< ISC10); // Thay doi tren chan tao ra ngat
//  MCUCR |= (1<< ISC10)|(1<< ISC11); // Canh len
    MCUCR |= (1<< ISC11); //Canh xuong

    GICR |= (1<< INT0); //Ngat tren chan INT0
//  MCUCR &= ~((1<< ISC00)|(1<< ISC01)); // Muc thap
//  MCUCR |= (1<< ISC00); // Thay doi tren chan tao ra ngat
//  MCUCR |= (1<< ISC00)|(1<< ISC01); // Canh len
    MCUCR |= (1<< ISC01); //Canh xuong

    /* Cho phep ngat */
	sei();
}
ISR(INT0_vect)
{
    /* chuong trinh ngat */
    if (OCR1A==2000)
    {
        /* code */
        OCR1A =3000;
    }
    else OCR1A =2000;
}
ISR(INT1_vect)
{
    /* chuong trinh ngat */
    if (OCR1B==3000)
    {
        /* code */
        OCR1B =2000;
    }
    else OCR1B =3000;     
}