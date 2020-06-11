/*
11) Joãozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.
*/

#include<stdio.h>

int main(){

	// declaração das variáveis
	int tempo, velocidadeMedia, distancia;
	float qtdListros;

	// leitura das variáveis
	printf("Informe o tempo gasto na viagem:\n");
	scanf("%d", &tempo);

	printf("Informe a velocidade média da viagem:\n");
	scanf("%d", &velocidadeMedia);

	distancia = tempo * velocidadeMedia;
	
	qtdListros = distancia / 12.0;

	printf("A quantidade de combustível gasto foi: %.3f\n", qtdListros);

	return 0;
}
