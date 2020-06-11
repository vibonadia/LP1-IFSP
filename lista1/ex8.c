/*
8) Faça um algoritmo que recebe um número real que representa o raio de um círculo. Calcule e mostre a área do círculo. A fórmula para calcular a área de uma circunferência é: area = π * raio2. Considerando para este problema que π = 3.14159.

gcc ex8.c -lm -o ex8
*/

#include<stdio.h>
#include<math.h> 

// Definição de uma constante
#define PI 3.14159

int main(){
	
	// declaração das variáveis
	float raio, area;

	// leitura das variáveis
	printf("Informe o valor do raio:\n");
	scanf("%f", &raio); 
	
	// cálculo da area da circunferência
	area = PI * pow(raio, 2);

	// impressão da area da circunferencia
	printf("O valor da área é: %.2f\n", area); 

	return 0;
}
