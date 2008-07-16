/*
  OrangutanLCD.h - Library for using the LCD on the Orangutan LV-168
  Originally written by Tom Benedict as part of Orangutan-Lib.
  Modified by Ben Schmidel, May 14, 2008.
*/
#ifndef OrangutanLCD_h
#define OrangutanLCD_h

#include <avr/pgmspace.h>

#define LCD_LEFT	0
#define	LCD_RIGHT	1
#define CURSOR_SOLID	0
#define CURSOR_BLINKING	1

void lcd_init_printf();
void clear();
void print(const char *str);
void print_character(char c);
void print_long(long value);
void print_unsigned_long(long value);
void print_binary(unsigned char value);
void print_hex(unsigned int value);
void print_hex_byte(unsigned char value);
void lcd_goto_xy(int col, int row);
void lcd_show_cursor(unsigned char cursorType);
void lcd_hide_cursor();
void lcd_move_cursor(unsigned char direction, unsigned char num);
void lcd_scroll(unsigned char direction, unsigned char num, 
		unsigned int delay_time);
void lcd_load_custom_character(const PROGMEM char *picture, unsigned char number);

#endif
