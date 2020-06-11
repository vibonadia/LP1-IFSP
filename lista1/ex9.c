/*
9) Escreva um algoritmo que recebe o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

#include<stdio.h>

int main(){
	
	// declaração das variáveis
	int id_funcionario, qtd_horas;
	float valor_hora;

	// leitura das variáveis
	printf("Informe o número do funcionário:\n");
	scanf("%d", &id_funcionario); 

	printf("Informe a quantidade de horas trabalhadas:\n");
	scanf("%d", &qtd_horas);

	printf("Informe o valor da hora:\n");
	scanf("%f", &valor_hora); 

	// impressão do número funcionário e seu salário
	printf("Funcionário: %d\n", id_funcionario);
	printf("Salário: %.2f\n", qtd_horas * valor_hora); 

	return 0;
}
