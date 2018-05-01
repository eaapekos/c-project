 #ifdef Test
 
 #include "JUnitTest.h"
 #include "atmega2560_drivers.h"
 
 int main(void)
 {
	 init_stdio(0, 10000000L);
	 sei();
	 
	 	printf("Hello world!");
	 
	 	initPort();
	 	printf("   ");
	//test_WaitTillAnyButtonPressed();
	// 	test_led_on();
	 //	test_led_off();
		 test_check();

 }
 
 void test_led_off(){
	 	all_leds_on();
		led_off(3);
	 	if ((PINA & 0b11110111) ==0){
		 		printf("true");
		 
		 		}else{
		 		printf("false");
	 	}
	 
 }
 
 
 
 void test_led_on(){
	 	all_leds_off();
	 	led_on(3);
	 	if ((PINA & 0b00001000) ==0){
		 			printf("true");
		 
		 	}else{
		 		printf("false");
	 	}
	 
}
 
 void test_WaitTillAnyButtonPressed(){
	 	all_leds_off();
	 	WaitTillAnyButtonPressed();
	 	printf("button was pressed");
	 
	 
 }
 
 void test_check(){
	 all_leds_off();
	int array[ 2 ];
	array[0] = 1;
	array[1] = 3;
	
	
	
	
	if(check(array) == 1)
	{
		printf("correct");
	}
	else printf("incorrect");
 }
 
 
 #endif