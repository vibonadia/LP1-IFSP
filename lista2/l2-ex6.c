/*
6) Escreva um programa que recebe os comprimentos dos três lados de um triângulo e diga se o triângulo é equilátero, isósceles ou escaleno.
*/

#include<stdio.h>

int main(){

	float l1, l2, l3;

	printf("Informe os três lados do triângulo:\n");
	scanf("%f%f%f", &l1, &l2, &l3);

	// verfica se os valores informados formam um triângulo
	if( (l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)){

		// verifica o tipo de triângulo
		if(l1 == l2 && l2 == l3){
			printf("Triângulo equilátero.\n");		
		}else if(l1 != l2 && l1 != l3 && l2 != l3){
			printf("Triânglo escaleno.\n");
		}else if( (l1 == l2 && l1 != l3) || (l2 == l3 && l2 != l1) || (l3 == l1 && l3 != l2) ){
			printf("Triânglo isósceles.\n");
		}
	}
	
	
	return 0;
}
