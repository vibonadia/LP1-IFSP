#include<stdio.h>

/*
Este programa calcula e imprime a quantidade de caracteres na tela sem usar a função strlen
*/

int main(){

	char string[] = "Boa noite!" ;
	int i;

	// percorre a string e calcula quantos caracteres ela possui
	for(i = 0; string[i] != '\0' ; i++);
	
	// imprime a quantidade de caracteres na tela.
	printf("Tamanho da string: %d\n", i);

	return 0;
}
