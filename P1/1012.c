#include <stdio.h>

int main(){
	float a, b, c;
	int pi = 3.14159;

	printf("medidas: ");
	scanf("%f %f %f", &a,  &b, &c);

	printf("triangulo = %.3lf\n",(a*c)/2);
	printf("circulo = %.3lf\n", pi*(c/2)*(c/2));
	printf("trapezio = %.3lf\n",((a+b)*c)/2);
	printf("quadrado = %.3lf\n", b*b);
	printf("retangulo = %.3lf\n", a*b);
	

	return 0;
}
