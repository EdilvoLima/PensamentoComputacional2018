#include <stdio.h>
#include "flush_in.h"

int main(){

	int p = 0;
	int v[5];

	printf("valores: \n");

	scanf("%d", &v[0]);
	flush_in();

	scanf("%d", &v[1]);
	flush_in();

	scanf("%d", &v[2]);
	flush_in();

	scanf("%d", &v[3]);
	flush_in();

	scanf("%d", &v[4]);
	
	int i;
	int n = sizeof(v)/sizeof(v[0]);
	for(i=0;i<n;i++){
		if(v[i]%2 == 0){
			p++;
		}
	}
	
	printf("%d valor(es) pares\n", p);


	return 0;
}
