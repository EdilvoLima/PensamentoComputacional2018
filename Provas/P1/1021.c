#include <stdio.h>
#include <math.h>

int main(){
	float num, x;	
	int n, moeda, r, aux;

	printf("valor: ");
	scanf("%f", &num);

	n = floor(num);
	x = num - n;
	x = x*100;
	moeda = x;

	//cedulas
	printf("CEDULAS:\n");
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

	//moedas
	printf("MOEDAS:\n");
	n = r;
	aux = n/1;
	r = n%1;
	printf("%d moeda (s) R$ 1,00\n", aux);

	n = moeda;
	aux = n/50;
	r = n%50;
	printf("%d moeda (s) de R$ 0,50\n", aux);

	n = r;
	aux = n/25;
	r = n%25;
	printf("%d moeda (s) de R$ 0,25\n", aux);

	n = r;
	aux = n/10;
	r = n%10;
	printf("%d moeda (s) de R$ 0,10\n", aux);

	n = r;
	aux = n/5;
	r = n%5;
	printf("%d moeda (s) de R$ 0,05\n", aux);

	n = r;
	aux = n/1;
	r = n%1;
	printf("%d moeda (s) de R$ 0,01\n", aux);


	return 0;
}
