#include <stdio.h>

int main (){
	
	float a, b, c;

	printf("medidas: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a<b+c && b<a+c && c<a+b){
		
		printf("perimetro = %.1f\n", a+b+c);
	}
	else
		printf("area = %.1f\n", ((a+b)*c)/2);


	return 0;

}
