/*
1) Faça um algoritmo que receba quatro números inteiros, calcule e mostre a soma desses números.
*/

// biblioteca de entrada e saída
#include<stdio.h> 

int main(){
	
	// criação das variáveis
	int n1, n2, n3, n4, soma; 

	printf("Informe quatro números inteiros:\n");
	
	// leitura dos valores digitados e armazenamento nas variáveis n1, n2, n3 e n4
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4); 
	
	soma = n1 + n2 + n3 + n4;
	
	// impressão do conteúdo da variável "soma"
	printf("A soma dos números digitados é: %d\n", soma); 

	return 0;
}
