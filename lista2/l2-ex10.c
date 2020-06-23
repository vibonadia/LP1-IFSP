/*
10) Faça um algoritmo que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para aprovação, considerando que a média no exame é 6.
*/

#include<stdio.h>

int main(){

	float n1, n2, n3, media, nota_exame;

	printf("Informe as três notas do aluno:\n");
	scanf("%f%f%f", &n1, &n2, &n3);

	media = (n1 + n2 + n3)/3;
	
	if(media < 3){
		printf("Reprovado. \n");
	}
	else if(media < 7){
		printf("Exame.\n");
		nota_exame = 12 - media;
		printf("O aluno deve tirar %.2f para ser aprovado.\n", nota_exame);
	}else{
		printf("Aprovado.\n");
	}

	return 0;
}
