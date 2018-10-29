#include <stdio.h>

int main(){

	int  i, f, t;

	printf("inicio e fim: ");
	scanf("%d %d", &i, &f);

	if(i == f){
		t = 24;
	}
	else if(i > f){
		t = (24-i)+f;
	}
	else
		t = f-i;

	printf("o jogo durou %d hora (s)\n", t);

	return 0;
}
