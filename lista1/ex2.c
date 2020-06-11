/*
2) Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.
*/

#include<stdio.h> 

int main(){
	
	// criação das variáveis
	float nota1, nota2, nota3, media; 

	printf("Informe três notas:\n");
	
	// leitura das variáveis
	scanf("%f%f%f", &nota1, &nota2, &nota3); 
	
	// cálculo da média
	media = (nota1 + nota2 + nota3)/3;
	
	// impressão do conteúdo da variável "media"
	printf("A média aritmética entre os valores digitados é: %.2f\n", media); 

	return 0;
}
