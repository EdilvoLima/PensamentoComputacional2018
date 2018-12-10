#include <stdio.h>

double media(double p1, double p2, double p3, char op){
	if(op == 'P'){
		return ((p1*5)+(p2*3)+(p3*2))/10;		
	}else if (op == 'A'){
		return (p1+p2+p3)/3;
	} else
		printf("opção inválida!\n");

}


int main(){

	double p1, p2, p3;
	char op;
	while(op != 'A' || op != 'P'){
		printf("Insira as 3 notas e a opcao: ");
		scanf("%lf %lf %lf %c", &p1, &p2, &p3, &op);
		if (op == 'A' || op == 'P'){
			printf("Media (%c): %.1lf\n", op, media(p1, p2, p3, op));
			return 0;
		}
	}

	return 0;
}
