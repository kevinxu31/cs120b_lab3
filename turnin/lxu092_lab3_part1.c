/*	Author: lxu092
 *  Partner(s) Name: Luofeng Xu
 *	Lab Section:3
 *	Assignment: Lab 3  Exercise 1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRA=0x00;PORTA=0xFF;
	DDRB=0x00;PORTB=0xFF;
	DDRC=0xFF;PORTC=0x00;
	unsigned char a=0x00;
	unsigned char b=0x00;
	unsigned char i=0x00;
	unsigned char c=0x00;
	while (1) {	
		c=0x00;	
		a=PINA;
		b=PINB;
		for(i=0;i<8;++i){
			c=c+((a>>i)&0x01)+((b>>i)&0x01);
		}
		PORTC=c;
	}
	return 0;
}
