#include <util/delay.h> // for delay

void level1();
void level2();
void level3();
void level4();
void level5();
int check(int *pointer);

typedef struct sequence {
	int array[ 10 ];
	int checker;
};
struct sequence sq;