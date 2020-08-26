#include<stdio.h>
#include<string.h> // Bibilioteca para usar o comando strcpy


// Exemplo de atribuição para uma string

int main(){
	char string[50];
	
	// Forma incorreta
	// string = "Atribuicao incorreta!";
	
	// Forma correta
	// Esta função copia a palavra à direita para a variável a esquerda
	strcpy(string, "Atribuicao correta!");

	// imprime a string
	printf("%s\n", string);
	
   return 0;
}

