/**
Faça um programa para criptografar uma frase informada pelo usuário. A criptografia troca as vogais por *. Exemplo:
ESTOU NA AULA
*ST** N* **L*
Considere que cada frase tem no máximo 100 caracteres.
toupper
**/

#include<stdio.h>
#include<ctype.h> // biblioteca necessária apra usar a função toupper

int main(){

    char frase[101];
    int i;
    
    printf("Informe uma frase: ");
    scanf("%[^\n]s", frase);
	
	// Percorre a string
	for(i = 0; frase[i] != '\0' ; i++){
		
		// Transforma o caracater da posição i para maiúsculo
		frase[i] = toupper(frase[i]);
		
		// verificar se o caractere é uma vogal. 
		// Caso seja, substitui por *
		if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
			frase[i] = '*';
		}
	}
	
	printf("%s\n", frase);    

    return 0;
}






