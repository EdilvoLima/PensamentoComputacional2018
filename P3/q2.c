#include <stdio.h>

//MAXIMO
int maior(int a, int b){
	if (a >= b) return a;
	else return b;
}


int main(){
	int a, b;

	scanf("%d %d", &a, &b);

	//MAIOR
	printf("maior: %d\n", maior(a, b));

	return 0;
}
