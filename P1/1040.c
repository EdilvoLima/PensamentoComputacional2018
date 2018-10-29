#include <stdio.h>

int main(){

	float  n1, n2, n3, n4, media, rec;

	printf("notas: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

	media = (n1+n2+n3+n4)/4;
	
	if(media > 7.0){
		printf("Aluno aprovado.\n");
		return 0;
	}
	else if (media < 5.0){
		printf("Aluno reprovado.\n");
		return 0;
	}else
		printf("Aluno em exame.\n");
		printf("Nota do exame: ");
		scanf("%f", &rec);

	if((media+rec)/2 >= 5.0){
		printf("Aluno aprovado.\n");
	} 
	else if((media+rec)/2 < 5.0){
		printf("Aluno reprovado.\n");
	}
	
	printf("Media final: %.1f\n", (media+rec)/2)
;

	return 0;
}
