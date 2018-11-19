#include <stdio.h>

int main () {
	int x, z;
	int aux = 0;
	int x_;

	scanf("%d", &x);

	while(z <= x){
		scanf("%d", &z);
	}
	
	if(z > x){
		x_ = x;
		while (x_ < z) {
			aux++;
			x_ += x + aux;
		}
	}

	printf("\n%d\n", aux+1);

	return 0;
}
