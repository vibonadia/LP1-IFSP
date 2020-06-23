/*
12) O Índice de Massa Corporal (IMC) é uma medida universal de classificação de obesidade. Além de detectar casos de obesidade, esta medida serve também para detectar casos de desnutrição. Para calcular o IMC de uma pessoa é necessário saber seu peso (P), sua altura (A) e aplicar a seguinte fórmula:
	P/A2. 
Faça um algoritmo que receba o peso e a altura de uma pessoa, calcule seu IMC e exiba uma mensagem com o resultado do seu IMC conforme a tabela abaixo:

*/

#include<stdio.h>

int main(){

	float peso, altura, imc;

	printf("Informe o peso:\n");
	scanf("%f", &peso);

	printf("Informe a altura:\n");
	scanf("%f", &altura);

	imc = peso / (altura * altura);
	
	if(imc < 18.5){
		printf("Abaixo do peso.\n");		
	}else if(imc <= 24.9){
		printf("Peso normal.\n");
	}else if(imc <= 29.9){
		printf("Sobrepeso.\n");
	}else if(imc <= 34.9){
		printf("Obesidade grau 1.\n");
	}else if(imc <= 39.9){
		printf("Obesidade grau 2.\n");
	}else{
		printf("Obesidade grau 3.\n");
	}

	return 0;
}
