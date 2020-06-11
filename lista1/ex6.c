/*
6) Faça um algoritmo que receba um número maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.

gcc ex6.c -lm -o ex6
*/

#include<stdio.h>
#include<math.h> 

int main(){
	
	float numero;

	// leitura da variável
	printf("Informe um número maior que zero:\n");
	scanf("%f", &numero); 
	
	// impressão do número digitado ao quadrado
	printf("O número ao quadrado é: %.2f\n", numero * numero); // também é possível usar a função pow

	// impressão do número digitado ao cubo
	printf("O número ao cubo é: %.2f\n", numero * numero * numero); // também é possível usar a função pow

	// impressão da raiz quadrada do número digitado
	printf("A raiz quadrada do número é: %.2f\n", sqrt(numero)); 

	// impressão da raiz cúbica do número digitado
	printf("A cúbica do número é: %.2f\n", pow(numero, 1.0/3.0)); 

	return 0;
}
