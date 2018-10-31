#include <stdio.h>

int main(){

	int i, vidro=0, plastico=0, papel=0, metal=0, organico=0, eletronico=0;
	char obj;

	printf("Escolha a opcao: ");

	for(i=1; i<=10; i++){
		scanf("%c", &obj);

		switch(obj){
			case 'V': vidro++;
				break;
			case 'L': plastico++;
				break;
			case 'P': papel++;
				break;
			case 'M': metal++;
				break;
			case 'O': organico++;
				break;
			case 'E': eletronico++;
				break;
			default: printf("opção errada!");
			
		}
	}

	printf("Totais:\n vidro: %d\nplastico: %d\npapel:  %d\nmetal: %d\norganico: %d\neletronico: %d", 
		vidro, plastico, papel, metal, organico, eletronico);

	return 0;
}
