/*
15) Degustação de chá às escuras é a habilidade de identificar um chá usando apenas seus sentidos do olfato e paladar. Isto faz parte da Competição Ideal de Consumidores de Chá Puro. Durante o show, um bule de chá completo é preparado e são entregues uma xícara de chá para cada um dos cinco competidores. Os participantes devem cheirar, saborear e avaliar a amostra, de modo a identificar o tipo de chá, que pode ser: (1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá de ervas. No final, as respostas são verificadas para determinar o número de suposições corretas.
Faça um algoritmo que receba um inteiro T representando o tipo de chá (1 <= T <= 4), e cinco números inteiros A, B, C, D e E, que indicam as respostas dadas por cada competidor (1 <= A, B, C, D, E <= 4). O algoritmo deve exibir um inteiro representando o número de concorrentes que obtiveram a resposta correta. Por exemplo, dada a entrada: T = 1, A = 1, B = 2, C = 3, D = 2 e E = 1, a saída deve ser 2.
*/

#include<stdio.h>

int main(){

	int t, a, b, c, d, e, cont = 0;


	// leitura das variáveis
	scanf("%d", &t);
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	// verifica se as respostas estão corretas
	if(a == t) 
		cont++;
	
	if(b == t) 
		cont++;

	if(c == t) 
		cont++;
	
	if(d == t) 
		cont++;
	
	if(e == t) 
		cont++;

	// imprime quantas pessoas acertaram a resposta
	printf("%d\n", cont);

	return 0;
}
