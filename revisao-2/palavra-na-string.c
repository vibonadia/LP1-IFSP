/*
Faça um programa que recebe uma frase e uma palavra, calcula e mostra a quantidade de vezes que a palavra aparece na frase. Exemplo:
Frase: DIA 25 DE DEZEMBRO É DIA DE NATAL.
Palavra: DIA
*/

#include<stdio.h>
#include<string.h>

int encontra_palavra(char frase[], char palavra_procurada[]){
	char palavra[31];
	int i, cont = 0, j = 0;
	int tam_frase = strlen(frase);
	for(i = 0; i <= tam_frase; i++){
		if(frase[i] != ' ' && frase[i] != '\0'){
			palavra[j] = frase[i];
			j++;
		}else{
			palavra[j] = '\0';
			printf("Palavra da frase: %s\n", palavra);
			if(strcmp(palavra, palavra_procurada) == 0){
				cont++;
			}
			j = 0;
		} // fim do else
	}
	return cont;
}

int main(){

	char frase[101], qtd;
	char palavra_procurada[31];
	
	printf("Informe uma frase: ");
	scanf("%[^\n]s", frase);
	
	printf("Informe uma palavra: ");
	scanf("%s", palavra_procurada);

	qtd = encontra_palavra(frase, palavra_procurada);
	printf("A palavra %s apareceu %d vezes na frase.\n", palavra_procurada, qtd);
	
	return 0;
}
