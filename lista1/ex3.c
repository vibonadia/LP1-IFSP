/*
3) Faça um algoritmo que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
*/

#include<stdio.h> 

int main(){
	
	// criação das variáveis
	float nota1, nota2, nota3, media;
	int peso1, peso2, peso3; 

	// leitura das variáveis
	printf("Informe a primeira nota e seu peso:\n");
	scanf("%f%d", &nota1, &peso1); 
	
	printf("Informe a segunda nota e seu peso:\n");
	scanf("%f%d", &nota2, &peso2);
	
	printf("Informe a terceira nota e seu peso:\n");
	scanf("%f%d", &nota3, &peso3);
	
	// cálculo da média
	media = ( peso1*nota1 + peso2*nota2 + peso3*nota3 )/(peso1 + peso2 + peso3);
	
	// impressão do conteúdo da variável "media"
	printf("A média ponderada é: %.2f\n", media); 

	return 0;
}
