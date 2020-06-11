/*
5) Faça um algoritmo que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
*/

#include<stdio.h> 

int main(){
	
	// criação das variáveis
	float salario, salario_final;

	// leitura da variável
	printf("Informe o salário:\n");
	scanf("%f", &salario); 
	
	// cálculo do salário
	salario_final = salario + (salario * 0.05) - (salario * 0.07);
	
	// impressão do novo salario
	printf("O salário a receber é: %.2f\n", salario_final); 

	return 0;
}
