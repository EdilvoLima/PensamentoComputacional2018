#include <stdio.h>
#include "delay.h"

int main () {
	int senha = 2018;
	int senha_;
	int ok = 0;

	int tentativas = 0;
	while(ok == 0){
		if(senha_ == senha){
			ok = 1;
			printf("Parabéns! Acesso Permitido.\n");
			break;
		} else {
			printf("Digite a senha para acesso: ");
			scanf("%d", &senha_);
		}

		tentativas++;

		if (tentativas == 3) {
			printf("Senha Incorreta, procure o adminiistrador do sistema!\n");
			delay(10);
			break;
		}
	}

	return 0;
}
