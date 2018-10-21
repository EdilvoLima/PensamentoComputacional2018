#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;	

	printf("valores: ");
	scanf ("%d %d %d", &a, &b, &c);

 	int maiorAB = ((a+b) + fabs(a-b))/2;
	int maiorABC = ((maiorAB + c)+fabs(maiorAB-c))/2;
		
	printf("%d e o maior\n", maiorABC); 

	return 0;
}
