/*
 * LCD.h
 * Author : NguyenChiNhon
 */ 
#ifndef _LCD_H_
#define _LCD_H_
#include <avr/io.h>

void LCD_Command( unsigned char cmnd );
void LCD_Char( unsigned char data );
void LCD_Init (void);
void LCD_String (char *str)	;
void LCD_String_xy (char row, char pos, char *str);
void LCD_Clear();

#endif