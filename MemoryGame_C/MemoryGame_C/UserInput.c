

#include "UserInput.h"

int getUserInput(){
	while(1)
	{
		while((PINB & 0b00000001) == 0)
		{
			led_on(0);
			led_off(0);
			return 0;
		}
		while((PINB & 0b00000010) == 0)
		{
			led_on(1);
			led_off(1);
			return 1;
		}
		while((PINB & 0b00000100) == 0)
		{
			led_on(2);
			led_off(2);
			return 2;
		}
		while((PINB & 0b00001000) == 0)
		{
			led_on(3);
			led_off(3);
			return 3;
		}
		while((PINB & 0b00010000) == 0)
		{
			led_on(4);
			led_off(4);
			return 4;
		}
		while((PINB & 0b00100000) == 0)
		{
			led_on(5);
			led_off(5);
			return 5;
		}
		while((PINB & 0b01000000) == 0)
		{
			led_on(6);
			led_off(6);
			return 6;
		}
		while((PINB & 0b10000000) == 0)
		{
			led_on(7);
			led_off(7);
			return 7;
		}
	}
}



void WaitTillAnyButtonPressed(){
	int loop;
	loop = 1;
	while(loop)
	{
		while((PINB & 0b00000001) == 0)
		{
			loop = 0;
		}
		while((PINB & 0b00000010) == 0)
		{
			loop = 0;
		}
		while((PINB & 0b00000100) == 0)
		{
			loop = 0;
		}
		while((PINB & 0b00001000) == 0)
		{
			loop = 0;
		}
		while((PINB & 0b00010000) == 0)
		{
			loop = 0;
		}
		while((PINB & 0b00100000) == 0)
		{
			loop = 0;
		}
		while((PINB & 0b01000000) == 0)
		{
			loop = 0;
		}
		while((PINB & 0b10000000) == 0)
		{
			loop = 0;
		}
	}
};