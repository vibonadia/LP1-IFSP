/*
9) Escreva um programa que recebe um operando, um operador aritmético e outro operando e calcula a operação indicada. As operações possı́veis são soma (+), subtração (-), multiplicação (*) e divisão (/).
Exemplo de entrada: 10 + 2
Imprime 12 na tela.
*/

#include<stdio.h>

int main(){

	float n1, n2, resultado;
	char op;

	scanf("%f %c %f", &n1, &op, &n2);
	switch (op) {
		case '+':
			resultado = n1 + n2;
			printf("%.2f\n", resultado);
			break;
		case '-':
			resultado = n1 - n2;
			printf("%.2f\n", resultado);
			break;
		case '*':
			resultado = n1 * n2;
			printf("%.2f\n", resultado);
			break;
		case '/':
			resultado = n1 / n2;
			printf("%.2f\n", resultado);
			break;
	}

	return 0;
}
