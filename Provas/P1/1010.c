#include <stdio.h>
#include "flush_in.h"

int main(){
	float p1, q1, v1;
	float p2, q2, v2; 

	printf("produtos: \n");
	scanf("%f %f %f", &p1, &q1, &v1);
	flush_in();
	scanf("%f %f %f", &p2, &q2, &v2);

	printf("valor a pagar: R$ %.2f\n", (q1*v1) + (q2*v2));

	return 0;
}
