#include "LED.h"

void led_on(int led)
{
	PORTA &= ~(1<<led);
	_delay_ms(200);
	return;
}

void led_off(int led)
{
	PORTA |= 1<<led;
	_delay_ms(200);
	return;
}

void intro()
{
	all_leds_off();
	int i;
	
	for(i = 0; i < 9; i = i + 1)
	{
		led_on(i);
	}
	
	int j = 3;
	while(j)
	{
		all_leds_off();
		all_leds_on();
		j = j - 1;
	}
	all_leds_off();
}

void lose(){
	all_leds_on();

	for(int i = 7; i > 0; i--)
	{
		led_off(i);
	}
	
	int j = 2;
	while(j)
	{
		all_leds_off();
		all_leds_on();
		j = j - 1;
	}
	all_leds_off();
}

void win(){
	for(int i = 0; i < 3; i++){
		all_leds_on();
		all_leds_off();
	}
	_delay_ms(300);
}

void all_leds_off()
{
	PORTA = 0xFF;
	_delay_ms(300);
	return;
}


void all_leds_on()
{
	PORTA = 0;
	_delay_ms(300);
	return;
}

void blink_led(int led)
{
	led_on(led);
	led_off(led);
}
