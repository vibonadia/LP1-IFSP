/*
Faça um programa que recebe o nome e três notas de 10 alunos. Seu programa deve imprimir o nome dos alunos e a média de cada um deles. 
*/

#include<stdio.h>
#define TAM 3

struct boletim{
	char nome[21];
	float nota1;
	float nota2;
	float nota3;
};

int main(){
	int i;
	struct boletim alunos[TAM];
	float media;

	for(i = 0; i < TAM; i++){
		printf("Informe o nome do aluno: ");
		scanf("%s", alunos[i].nome);
		printf("Informe três notas: ");
		scanf("%f%f%f", &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3);
	}

	printf("Nome e média do aluno\n");
	for(i = 0; i < TAM; i++){
		media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3; 
		printf("%s - %.2f\n", alunos[i].nome, media);
	}
	return 0;
}





