#include <stdio.h>

double fatorial (int n){
	int i;
	double fat = 1;

	for (i = 1; i <= n; i++){
		fat = fat * i;
	}
	return fat;

}

float _ln (int k){

	float ln = 0;
	int i;

	for (i = 1; i < k; i++){
		ln = ln + (1 / fatorial(i));
	}

	return ln;

}

int main(){
	
	int a;

	printf("digite o k: ");
	scanf("%d", &a);

	printf("fatorial: %.2lf\n", fatorial(a));	

	printf("ln: %.2lf\n", _ln(a));

	return 0;
}

