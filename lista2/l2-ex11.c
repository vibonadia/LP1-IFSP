/*
11) Escreva um algoritmo que leia a idade de uma pessoa e informe a sua classe eleitoral conforme as regras da tabela abaixo:
*/

#include<stdio.h>

int main(){

	int idade;

	printf("Informe a idade de uma pessoa:\n");
	scanf("%d", &idade);

	if(idade < 16){
		printf("Não eleitor.\n");		
	}else if(idade >= 18 && idade < 65){
		printf("Eleitor obrigatório. \n");
	} else {
		printf("Eleitor facultativo. \n");
	}

	return 0;
}
