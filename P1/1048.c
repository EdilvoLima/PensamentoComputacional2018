#include <stdio.h>

int main(){

	float n, s, t;

	printf("salario: ");
	scanf("%f", &n);

	if(n >= 0 && n <= 400.00){
		t = 15;
		s = ((n*t)/100)+n;
	}
	else if(n >= 400.01 && n <= 800.00){
		t = 12;
		s = ((n*t)/100)+n;
	}
	else if(n >= 800.01 && n <= 1200.00){
		t = 10;
		s = ((n*t)/100)+n;
	}
	if(n >= 1200.01 && n <= 2000.00){
		t = 7;
		s = ((n*t)/100)+n;
	}
	else if(n > 2000.00){
		t = 4;
		s = ((n*t)/100)+n;
	}

	printf("novo salario: %.2f\nreajuste ganho: %.2f\nem percentual: %.0f %%\n", s, (n*t)/100, t);


	return 0;
}
