#include "setup.h"

void initPort()
{
	DDRA = ALL_ON;
	PORTA = 0x00;
	
	DDRB = 0x00;
	PORTB = 0x00;
}