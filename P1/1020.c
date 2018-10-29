#include <stdio.h>

int main(){

	int n, a, m , d, aux;

	printf("quantidade de dias: ");
	scanf("%d", &n);
	
	a = n/365;
	n = n%365;
	m = n/30;
	d = n%30;

	printf("%d ano (s)\n%d mes (es)\n%d dia (s)\n", a, m, d);


	return 0;
}
