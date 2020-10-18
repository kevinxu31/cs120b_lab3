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
	DDRA=0x00;PORTA=0xFF;
	DDRC=0xFF;PORTC=0x00;
	unsigned char fuel_val=0x00;
	unsigned char c=0x00;
	while (1) {	
		fuel_val=PINA&0x0F;
		if (fuel_val<=2) {
			c=0x60;
		}
		else if (fuel_val>2 && fuel_val<=4 ){
			c=0x70;
		}
		else if (fuel_val>4 && fuel_val<=6){
			c=0x30;
		}
		else if (fuel_val>6 && fuel_val<=9){
			c=0x3c;
		}
		else if (fuel_val>9 && fuel_val<=12){
			c=0x3e;
		}
		else if (fuel_val>12 && fuel_val<=15){
			c=0x3f;
		}
		PORTC=c;

	}
	return 1;
}
