#include <stdio.h>
#include <math.h>


int nulo(double a){
	if(a == 0) return 1;
	else return 0;
}

double delta(double a, double b, double c){
	return (b*b) - (4*a*c);
}


int main(){

	double a, b, c;

	scanf("%lf %lf %lf", &a, &b, &c);

	if(nulo(a)) {
		printf("equanção nao é do primeiro grau\n");
		return 0;
	}else if(delta(a, b, c) < 0){
		printf("nao existe(m) raiz(es).\n");
		return 0;
	}

	//
	printf("raiz 1: %.0lf\n", ((-b)+(sqrt(delta(a, b, c))))/(2*a));

	printf("raiz 2: %.0lf\n", ((-b)-(sqrt(delta(a, b, c))))/(2*a));


	return 0;
}
