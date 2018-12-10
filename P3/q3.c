#include <stdio.h>
#include "delay.h"

int main () {
	int senha = 1111;
	int senha_;
	int login = 9999;
	int login_;
	int ok = 0;

	while(ok == 0){
		printf("Digite o login: ");
		scanf("%d", &login_);

		printf("Digite a senha: ");
		scanf("%d", &senha_);

		if(login_ == login && senha_ == senha){
			ok = 1;
			printf("Acesso Autorizado!\n");
			break;
		} else {
			printf("Senha Incorreta, procure o adminiistrador do sistema!\n");
			delay(5);
		}
	}

	return 0;
}
