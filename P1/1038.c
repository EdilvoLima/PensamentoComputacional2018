#include <stdio.h>

int main(){

	float prod[] = {0.00,4.00,4.50,5.00,2.00,1.50};
	int p, q;

	printf("produto e quantidade: ");
	scanf("%d %d", &p, &q);
	
	printf("Total: %.2f\n", prod[p]*q);

	return 0;
}
