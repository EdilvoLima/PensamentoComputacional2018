#include <stdio.h>
#include "flush_in.h"

int main(){
	int e;
	float s, v;

	printf("nome: ");
	scanf(" %d", &e);
	flush_in();

	printf("salario: ");
	scanf(" %f", &s);
	flush_in();

	printf("total de vendas: ");
	scanf(" %f", &v);
	flush_in();
	
	printf("Salario total: R$ %.2f\n", s+((v*15)/100));

	return 0;
}
