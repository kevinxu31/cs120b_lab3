/*	Author: lxu092
 *  Partner(s) Name: Luofeng Xu
 *	Lab Section:3
 *	Assignment: Lab 3  Exercise 2
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
	DDRB=0xFE;PORTB=0x01;
	DDRD=0x00;PORTD=0xFF;
	unsigned char d=0x00;
	unsigned char b0=0x00;
	unsigned char b=0x00;
	unsigned short w=0;
	while (1) {
		d=PIND;
		w=d*2;
		b=PINB;
		b0=b&0x01;
		w=w+b0;
		if(w>=70){
			PORTB=(b&0x01)|0x02;
		}
		else if((w>5) &&(w<70)){
			PORTB=(b&0x01)|0x04;
		}
		else{
			PORTB=b&0x01;
		}
		
	}
	return 1;
}
