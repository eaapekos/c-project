#include "sequence.h"

void level1()
{
	sq.array[0] = 2;
	sq.array[1] = 4;
	sq.array[2] = 6;
	
	blink_led(sq.array[1]);
	_delay_ms(400);
	blink_led(sq.array[2]);
	_delay_ms(400);
	
	
	sq.checker = check(sq.array);
	
	if(sq.checker == 1)
	{
		win();
		level2();
	}
}

void level2(){
	sq.array[0] = 3;
	sq.array[1] = 1;
	sq.array[2] = 7;
	sq.array[3] = 2;
	
	blink_led(sq.array[1]);
	_delay_ms(400);
	blink_led(sq.array[2]);
	_delay_ms(400);
	blink_led(sq.array[3]);
	_delay_ms(400);
	
	sq.checker = check(sq.array);

	if(sq.checker == 1)
	{
		win();
		level3();
	}
}

void level3(){
	sq.array[0] = 4;
	sq.array[1] = 6;
	sq.array[2] = 3;
	sq.array[3] = 6;
	sq.array[4] = 3;
	
	blink_led(sq.array[1]);
	_delay_ms(400);
	blink_led(sq.array[2]);
	_delay_ms(400);
	blink_led(sq.array[3]);
	_delay_ms(300);
	blink_led(sq.array[4]);
	_delay_ms(300);
	
	
	sq.checker = check(sq.array);

	if(sq.checker == 1)
	{
		win();
		level4();
	}
}

void level4(){
	sq.array[0] = 5;
	sq.array[1] = 6;	
	sq.array[2] = 5;
	sq.array[3] = 6;
	sq.array[4] = 6;
	sq.array[5] = 5;
	
	blink_led(sq.array[1]);
	_delay_ms(300);
	blink_led(sq.array[2]);
	_delay_ms(300);
	blink_led(sq.array[3]);
	_delay_ms(300);
	blink_led(sq.array[4]);
	_delay_ms(200);
	blink_led(sq.array[5]);
	_delay_ms(200);
	
	sq.checker = check(sq.array);

	if(sq.checker == 1)
	{
		win();
		level5();
	}
}

void level5(){
	sq.array[0] = 7;
	sq.array[1] = 5;
	sq.array[2] = 3;
	sq.array[3] = 1;
	sq.array[4] = 3;
	sq.array[5] = 6;
	sq.array[6] = 7;
	sq.array[7] = 7;
	
	blink_led(sq.array[1]);
	_delay_ms(200);
	blink_led(sq.array[2]);
	_delay_ms(200);
	blink_led(sq.array[3]);
	_delay_ms(200);
	blink_led(sq.array[4]);
	_delay_ms(150);
	blink_led(sq.array[5]);
	_delay_ms(100);
	blink_led(sq.array[6]);
	_delay_ms(50);
	blink_led(sq.array[7]);
	_delay_ms(200);
	
	sq.checker = check(sq.array);

	if(sq.checker == 1)
	{
		win();
	}
}

int check(int *pointer){
	int userInput;
	
	for (int i = 1; i < ((*pointer)+1); i++)
	{
		userInput = getUserInput();
		if(userInput != (*(pointer+i)))
		{
			lose();
			return 0;
		}
	}
	
	return 1;
}