/*
10) Faça um algoritmo que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * π * R3. Considere π = 3.14159.

gcc ex10.c -lm -o ex10
*/

#include<stdio.h>
#include<math.h> 

// Definição da constante PI
#define PI 3.14159

int main(){
	
	// declaração das variáveis
	float raio, volume;

	// leitura das variáveis
	printf("Informe o valor do raio:\n");
	scanf("%f", &raio); 
	
	// cálculo do volume da esfera
	volume = ( 4 * PI * pow(raio, 3) ) / 3;

	// impressão do volume da esfera
	printf("Volume da esfera: %.2f\n", volume); 

	return 0;
}
