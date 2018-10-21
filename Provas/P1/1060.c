#include <stdio.h>
#include "flush_in.h"

int main (){

	int i, v;
	float n;

	v = 0;

	i = 0;

	printf("valores: \n");
	while (i < 6){
   		scanf ("%f", &n);
		flush_in();

   		if (n > 0.0){
   			v++;
		}

		i++;
	}

	printf("%d valores positivos\n", v);

	return 0;

}
