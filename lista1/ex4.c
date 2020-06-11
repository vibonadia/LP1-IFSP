/*
4) Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/

#include<stdio.h> 

int main(){
	
	// criação das variáveis
	float salario, novo_salario;

	// leitura da variável
	printf("Informe o salário:\n");
	scanf("%f", &salario); 
	
	// cálculo do novo salário
	novo_salario = salario + ( salario * 0.25 );
	
	// impressão do novo salario
	printf("O novo salário é: %.2f\n", novo_salario); 

	return 0;
}
