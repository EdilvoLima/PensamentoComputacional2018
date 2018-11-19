#include <stdio.h>

int main () {

	int i=1;
	int j=65;
	int x=3;
	
	while(j>0){
		if(x==3){
			printf("I=%d J=%d\n", i, j-5);
			x=0;
			j=j-5;
		}
		x++;
		i++;
	}

	return 0;
}
