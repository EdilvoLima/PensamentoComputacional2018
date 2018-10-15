#include <stdio.h>

int main (){

	int num;

	scanf("%d", &num);

	switch (num % 2){
		case 0 : 
			printf("Numero par!\n");
			break;
		default : 
			printf("Numero impar!\n");
			break;
	}

	return 0;
}
