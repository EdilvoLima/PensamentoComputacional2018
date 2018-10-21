#include <stdio.h>

int main(){
	int n, r, aux;

	printf("valor: ");
	scanf("%d", &n);

	aux = n/100;
	r = n%100;
	printf("%d notas de R$ 100,00\n", aux);
	
	n = r;
	aux = n/50;
	r = n%50;
	printf("%d notas de R$ 50,00\n", aux);
	
	n = r;
	aux = n/20;
	r = n%20;
	printf("%d notas de R$ 20,00\n", aux);

	n = r;
	aux = n/10;
	r = n%10;
	printf("%d notas de R$ 10,00\n", aux);

	n = r;
	aux = n/5;
	r = n%5;
	printf("%d notas de R$ 5,00\n", aux);

	n = r;
	aux = n/2;
	r = n%2;
	printf("%d notas de R$ 2,00\n", aux);

	n = r;
	aux = n/1;
	r = n%1;
	printf("%d notas de R$ 1,00\n", aux);

	return 0;
}
