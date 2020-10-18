/*	Author: lxu092
 *  Partner(s) Name: Luofeng Xu
 *	Lab Section:3
 *	Assignment: Lab 3  Exercise 4
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
	DDRB=0xFF;PORTB=0x00;
	DDRC=0xFF;PORTC=0x00;
	unsigned char a_u=0x00;
	unsigned char a_l=0x00;
	unsigned char b=0x00;
	unsigned char c=0x00;
	while (1) {
		a_u=PINA>>4;
		a_l=PINA&0x0F;
		b=a_u;
		c=a_l<<4;
		PORTB=b;
		PORTC=c;
	}
	return 1;
}
