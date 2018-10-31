#include <stdio.h>

int main(){

	int n;

	do{
		printf("Digite o numero: ");
		scanf("%d", &n);
	}while(n<0 || n>46);

	int p=0, s=1, prox=0;
	printf("%d %d ", p, s);

	for(int i=0; i<n; i++){
		printf("%d ", p+s);
		prox = p+s;
		p = s;
		s = prox;
	}

	return 0;
}
