// Escreva uma função que decide se uma string é ou não um palíndromo (ou seja, se o inverso da string é igual a ela).

#include<stdio.h>
#include<string.h>

int main(){

	int tam, tam_metade, i, j;
	char palavra[20];
	int palindromo = 1;
	
	printf("Palavra: ");
	scanf("%[^\n]s", palavra);
	
	tam = strlen(palavra);
	tam_metade = tam / 2;
	
	j = tam - 1; // indice da última letra
	for(i = 0; i < tam_metade; i++){
		if(palavra[i] != palavra[j]){
			palindromo = 0;
		}
		j--;
	}
	
	if(palindromo){
		printf("A palavra %s é um palindromo!\n", palavra);
	} else {
		printf("A palavra %s não é um palindromo!\n", palavra);
	}
	return 0;
}
