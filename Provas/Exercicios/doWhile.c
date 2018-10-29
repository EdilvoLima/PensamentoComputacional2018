#include <stdio.h>

int main(){
	
	float nota1, nota2, media;
	int n, i = 1;

	printf("Quantos alunos: \n");
	scanf("%d", &n);

	while(i <= n){
		printf("Entre nota 1 e nota 2 do aluno %d\n", i);
		scanf("%f %f", &nota1, &nota2);
		media = (nota1 + nota2)/2;
		printf("A media das notas eh %.1f\n", media);
		i++;
	}

	return 0;
}
