#define F_CPU 10000000L // set Processor speed

#include <avr/io.h> // for AVR
#include <util/delay.h> // for delay

void led_on(int led);
void led_off(int led);
void all_leds_off();
void all_leds_on();
void blink_led(int led);

void intro();
void lose();
void win();