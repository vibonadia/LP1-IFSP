/*
7) Faça um programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se o usuário digitar um valor inválido o programa deve exibir na tela a mensagem "valor inválido".
*/

#include<stdio.h>

int main(){

	int numero;

	printf("Informe um número:\n");
	scanf("%d", &numero);

	switch(numero){
		case 1:
			printf("Domingo!\n");
			break;
		case 2:
			printf("Segunda!\n");
			break;
		case 3:
			printf("Terça!\n");
			break;
		case 4:
			printf("Quarta!\n");
			break;
		case 5:
			printf("Quinta!\n");
			break;
		case 6:
			printf("Sexta!\n");
			break;
		case 7:
			printf("Sábado!\n");
			break;
		default:
			printf("Valor Inválido.\n");
	}

	return 0;
}
