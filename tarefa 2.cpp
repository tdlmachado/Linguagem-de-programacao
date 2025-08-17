#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "portuguese");
    float saldo, saque;
    int i;

	printf("Digite seu saldo inicial:");
	scanf("%f",&saldo);

	for(i=1;i<=3;i++){
		printf("\nDigite o valor que você deseja sacar:");
		scanf("%f",&saque);
		
		if(saque>saldo){
			printf("\nSaldo insuficiente para realizar o saque");
		}else{
			saldo -= saque;
			
			printf("\nSaque realizado com sucesso");
			printf("\nSaldo atual: %.2f\n", saldo);	
		}
	}
	printf("O saldo da sua conta está com %.2f", saldo);
}
