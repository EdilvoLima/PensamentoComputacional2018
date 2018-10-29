#include <stdio.h>

int main(){

	int d;

	printf("distancia: ");
	scanf("%d", &d);

	//a cada 2 minutos o carro se distancia 1 kilometro
	printf("%d minutos\n", d*2);

	return 0;
}
