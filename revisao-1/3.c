/*
(Loops) Em um campeonato de futebol existem 5 times e cada um possui onze jogadores. Faça um programa que receba a idade, o peso e a altura de cada um dos jogadores. Calcule e mostre:
- A quantidade de jogadores com idade inferior a 18 anos;
- A média das idades dos jogadores de cada time;
- A média das alturas dos jogadores do campeonato; e
- A porcentagem de jogadores com mais de 80kg entre todos os jogadores do campeonato. 
*/

#include<stdio.h>

#define QTD_TIMES 5
#define QTD_JOGADORES 11

int main(){
	
	int idade, i, j, qtd_menores_idade = 0, soma_idades, soma_altura = 0; 
	int qtd_maiores_80kg = 0;
	float altura, peso, porcentagem, media_altura;
	
	// Lê as informações de cada time
	for(i = 0; i < QTD_TIMES; i++){
	
		soma_idades = 0;
		printf("Time: %d\n", i);
		
		// Para cada time, lê as informações de 11 jogadores
		for(j = 0; j < QTD_JOGADORES; j++){
			printf("Idade do jogador %d: ", j);
			scanf("%d", &idade);

			printf("Peso do jogador %d: ", j);
			scanf("%f", &peso);	

			printf("Altura do jogador %d: ", j);
			scanf("%f", &altura);
			
			if(idade < 18) {
				qtd_menores_idade++;
			}
			
			soma_idades += idade;
			soma_altura += altura;
			
			if(peso > 80){
				qtd_maiores_80kg++;
			}
			
		} // fim do for que lê as informações de cada jogador
		
		printf("A média da idades do time %d é: %.2f\n", i, soma_idades/(float)QTD_JOGADORES);
		
	} // fim do for que lê as informações de todos os times
	
	printf("No campenato existem %d jogadores menores de 18 anos.\n", qtd_menores_idade);
	
	media_altura = soma_altura/(float)(QTD_JOGADORES * QTD_TIMES);
	printf("A média de altura dos jogadores do campenato é %.2f.\n", media_altura);

	porcentagem = qtd_maiores_80kg * 100 / (QTD_TIMES* QTD_JOGADORES);
	printf("Porcentagem de jogadores com mais de 80kg %.2f\n", porcentagem);

	return 0;
}
