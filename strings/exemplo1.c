#include<stdio.h>

int main(){
	int i;
	char string[100];
	
	printf("Digite uma string: ");
	
	// Lê uma string até o usuário digitar enter
	scanf("%[^\n]s", string);

	// Imprime string na tela
	printf("String digitada: %s\n", string);
	
	// Percorre uma string e imprime caractere por caractere
	for(i = 0; string[i] != '\0' ; i++){
		printf("%c", string[i]);
	}
	
	printf("\n");
	
	return 0;
}
