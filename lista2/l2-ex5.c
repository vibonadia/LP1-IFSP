/*
5) Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo com a seguinte regra:
- Salários até R$1.800,00, reajuste de 25,5%.
- Salários maiores que R$1.800,00, reajuste de 12,25%.
*/

#include<stdio.h>

int main(){

	float salario, novo_salario;

	printf("Informe o salario do funcionário:\n");
	scanf("%f", &salario);
	
	if(salario <= 1800){
		novo_salario = salario + (salario * 0.255);
	}else{
		novo_salario = salario + (salario * 0.1225);	
	}

	printf("O novo salário do funcionário é: %.2f\n", novo_salario);

	return 0;
}
