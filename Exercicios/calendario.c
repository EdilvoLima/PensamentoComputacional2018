#include <stdio.h>

int main(){

	int ano[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int i, cont=0;

	for(i=0; i<12; i++){
		printf("Mes %d\n", i+1);
		int s=0, d=1;
		while(d <= ano[i]){
			while(cont >0){
				printf(" \t");
			}
			for(s=cont; s<7; s++){
				if(d <= ano[i]){
					printf("%d\t", d);
					d++;
				}else{
					cont = s;
					break;
				}
			}
			printf("\n");
		}
		printf("\n\n");
	}


	return 0;
}
