/*
4) Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética das notas e a mensagem de aprovado para média igual ou superior a 7,0 ou a mensagem de reprovado para média inferior a 7,0.
*/

#include<stdio.h>

int main(){

	float n1, n2, n3, n4, media;

	printf("Informe as quatro notas do aluno:\n");
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

	media = (n1 + n2 + n3 + n4)/4.0;
	
	if(media < 7){
		printf("Aluno reprovado!\n");		
	}else{
		printf("Aluno aprovado!\n");
	}

	return 0;
}
