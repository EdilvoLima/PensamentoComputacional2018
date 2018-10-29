#include <stdio.h>

int main(){
	int e, h;
	float v;

	printf("quantidade de empregados: ");
	scanf("%d", &e);
	
	printf("total de horas trabalhadas: ");
	scanf("%d", &h);

	printf("valor da hora/trabalho: ");
	scanf("%f", &v);

	printf("Empregados: %d\nSalario: R$ %.2f\n", e, (h*v)/e);

	return 0;
}
