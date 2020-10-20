/*
Faça um programa para criptografar uma frase dada pelo usuário. A criptografia consiste em inverter a frase. Exemplo:
Entrada: ESTOU NA AULA
Saída: ALUA AN UOTSE
*/

#include<stdio.h>
#include<string.h>

int main(){

	char frase[101];
	char frase_criptografada[101];
	int i, j, tam_frase;
	
	printf("Informe uma frase: ");
	scanf("%[^\n]s", frase);

	tam_frase = strlen(frase);
	printf("Tamanho da string: %d\n", tam_frase);
	frase_criptografada[tam_frase] = '\0';
	j = tam_frase - 1;
	for(i = 0; i < tam_frase; i++){
		frase_criptografada[j] = frase[i];
		j--;
	}

	printf("Frase criptografada:\n");
	printf("%s\n", frase_criptografada);
	return 0;
}
