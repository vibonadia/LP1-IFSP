/*
8) Dada uma letra, escreva na tela se essa letra é ou não uma vogal (pode considerar apenas letras minúsculas).
*/

#include<stdio.h>

int main(){

	char letra;

	printf("Informe uma letra:\n");
	scanf("%c", &letra);

	switch(letra){
		case 'a':
			printf("Vogal!\n");
			break;
		case 'e':
			printf("Vogal!\n");
			break;
		case 'i':
			printf("Vogal!\n");
			break;
		case 'o':
			printf("Vogal!\n");
			break;
		case 'u':
			printf("Vogal!\n");
			break;
		default:
			printf("Consoante!\n");
	}

	return 0;
}
