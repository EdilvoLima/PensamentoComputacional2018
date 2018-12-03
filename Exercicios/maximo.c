#include <stdio.h>

//MAXIMO
int maximo(int a, int b){
	if (a >= b) return a;
	else return b;
}
//MINIMO
int minimo(int a, int b){
	if (a <= b) return a;
	else return b;
}

int maximo_3(int a, int b, int c){
	if (a >= maximo(b, c)) return a;
	else return maximo(b, c);
}

int minimo_3(int a, int b, int c){
	if (a <= minimo(b, c)) return a;
	else return minimo(b, c);
}


int main(){
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);


	//MAXIMO
	printf("maximo: %d\n", maximo(a, b));

	//MINIMO
	printf("minimo: %d\n", minimo(a, b));

	//MAXIMO_3
	printf("maximo_3: %d\n", maximo_3(a, b, c));

	///MINIMO_3
	printf("minimo_3: %d\n", minimo_3(a, b, c));

	return 0;
}
