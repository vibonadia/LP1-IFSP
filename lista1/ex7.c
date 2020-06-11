/*
7) Faça um algoritmo que receba o número de horas trabalhadas e o valor do salário mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:
- a hora trabalhada vale metade do salário mínimo;
- o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
- o imposto equivale a 5% do salário bruto;
- o salário a receber equivale ao salário bruto menos o imposto.
*/

#include<stdio.h>

int main(){
	
	// declaração das variáveis
	int horas;
	float salario_minimo, salario_receber, valor_hora, salario_bruto;

	// leitura das variáveis
	printf("Informe quantidade de horas trabalhadas:\n");
	scanf("%d", &horas); 
	
	printf("Informe o valor do salário mínimo:\n");
	scanf("%f", &salario_minimo);
	
	// cálculo da hora trabalhada (que vale metade do salário mínimo)
	valor_hora = salario_minimo/2;
	
	// cálculo do salário bruto
	salario_bruto = horas * valor_hora;
	
	// cálculo do salário a receber
	salario_receber	= salario_bruto - (salario_bruto * 0.05);

	// impressão do salário a receber
	printf("o salário a receber é R$: %.2f\n", salario_receber); 

	return 0;
}
