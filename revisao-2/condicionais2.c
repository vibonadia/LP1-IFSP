// Faça um programa em C que recebe a nota final e a frequência de um aluno em uma disciplina e imprima a situação do aluno conforme a tabela abaixo:

#include<stdio.h>

int main(){

	int freq;
	float nota;
	
	printf("Frequencia: ");
	scanf("%d", &freq);
	
	printf("Nota: ");
	scanf("%f", &nota);
	
	if(freq >= 75){
		if(nota >= 6){
			printf("Aprovado\n");
		} else if (nota >= 4){
			printf("Exame\n");
		} else {
			printf("Reprovado\n");
		}
	}else{
		printf("Reprovado.\n");
	}
	
	
	return 0;
}
