#include <stdio.h>

int main(){

	int  hi, mi, hf, mf, h, m;

	printf("inicio e fim: ");
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

	if(hi == hf){
		h = 24;
	}
	else if(hi > hf){
		h = (24-hi)+hf;
	}
	else
		h = hf-hi;

	if(mi == mf){
		m = 0;
	}
	else if(mi > mf){
		m = 60 - (mi-mf);
	}
	else
		m = mf-mi;


	printf("o jogo durou %d hora (s) e %d minuto (s)\n", h, m);

	return 0;
}
