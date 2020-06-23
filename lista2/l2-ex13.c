/*
13) Faça um algoritmo que leia três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha que o usuário digitará quatro números diferentes.

*/

#include<stdio.h>

int main(){

	int n1, n2, n3, n4;

	printf("Informe três números em ordem crescente:\n");
	scanf("%d%d%d", &n1, &n2, &n3);

	printf("Informe um número (fora de ordem):\n");
	scanf("%d", &n4);

	if(n4 >= n3){
		printf("Ordem decrescente é: %d, %d, %d, %d\n", n4, n3, n2, n1);
	} else if(n4 >= n2 && n4 < n3) {
		printf("Ordem decrescente é: %d, %d, %d, %d\n", n3, n4, n2, n1);
	} else if(n4 >= n1 && n4 < n2) {
		printf("Ordem decrescente é: %d, %d, %d, %d\n", n3, n2, n4, n1);
	} else {
		printf("Ordem decrescente é: %d, %d, %d, %d\n", n3, n2, n1, n4);
	}

	return 0;
}
