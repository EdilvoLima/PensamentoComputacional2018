#include <stdio.h>

int main(){
	
	int a, b, c, a1, b1, c1, aux;

	printf("valores: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b){
		a1 = a;
		b1 = b;
	}
	else {
		a1 = b;
		b1 = a;
	}
	
	if(b1 < c){
		c1 = b1;
		b1 = c;
	}
	else
		c1 = c;

	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c1, b1, a1, a, b, c);


	return 0;
}
