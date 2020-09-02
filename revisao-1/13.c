/*
(Strings - Lista 3 ex. 10) Faça um programa que recebe um nome e gere como saída o nome digitado e seu login. Lembre-se de respeitar maiúsculas e minúsculas já que o login será sempre com letras minúsculas. A regra para geração do login é a seguinte: a primeira letra do nome e, caso exista apenas um sobrenome, deve-se acrescentá-lo; caso existam dois sobrenomes, deve-se gerar a primeira letra do nome, mas a primeira letra do primeiro sobrenome, seguido do último sobrenome. Caso existem três ou mais sobrenomes, deve-se proceder como na situação anterior, considerando o nome, o primeiro sobrenome e o último sobrenome. Exemplos:
-Entrada: Pedro Silva
-Saída: psilva
-Entrada: Ana Soares Silva
-Saída: assilva
-Entrada: Jaqueline Oliveira Fernandes Espanhola
-Saída: joespanhola
*/

#include<stdio.h>	// biblioteca que permite usar comandos de entrada e saída 
#include<string.h>	// biblioteca que permite usar a função strcat
#include<ctype.h>	// biblioteca que permite usar a função tolower

int main(){
	char nome[101], sobrenome[101], login[101];
	int i, j, k;
	
	printf("Nome completo: ");
	scanf("%[^\n]s", nome);

	j = 0;
	k = 0;
	for(i = 0; nome[i] != '\0'; i++){

		// se eu econtrei um espaçamento, então encotrei uma palavra completa
		if(nome[i] == ' '){
			j = 0; 
			// copia para o vetor "login" a primeira letra do primeiro nome 
			// e do primeiro sobrenome
			if(k <= 1){
				login[k] = sobrenome[0];
				k++;
			}
		} else {
			sobrenome[j] = nome[i];
			j++;
		}
	}

	// finaliza a strings sobrenome e login
	sobrenome[j] = '\0';
	login[k] = '\0';
	
	// concatena o último sobrenome no login
	strcat(login, sobrenome);
	
	// converter caracteres para minúsculo
	for(i = 0; login[i] != '\0'; i++){
		login[i] = tolower(login[i]);
	}	
	
	// imprime o nome e o login
	printf("Nome: %s\n", nome);
	printf("Login: %s\n", login);

	return 0;
}










