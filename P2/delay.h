#include <stdio.h>
#include <time.h>

void delay(int seg){

	int ms = 1000000 * seg;
	clock_t st = clock();

	while(clock() < st + ms);
} 
