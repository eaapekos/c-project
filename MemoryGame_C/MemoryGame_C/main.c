/*
 * MemoryGame_C.c
 *
 * Created: 10/04/2018 08:33:21
 * Author : Harry
 */ 

#include "main.h"

#ifndef Test
// MAIN function
int main(void)
{
	// setup the ports
	initPort();
	
	while(1)
	{
		// Call intro light sequence
		intro();
		// wait for user input to start level 1
		WaitTillAnyButtonPressed();
		//start level1
		level1();
	}
}
#endif