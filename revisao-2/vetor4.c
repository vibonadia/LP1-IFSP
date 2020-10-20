//Faça um programa em C que preenche um vetor com 10 números aleatórios de 0 a 19 e recebe um número informado pelo usuário. Em seguida seu programa deve imprimir na tela os números do vetor que são múltiplos do valor informado pelo usuário e sua posição. 


#include<stdio.h>
#include<stdlib.h>

int main(){
	int vetor[10], i;
	int num;
	
	for(i = 0; i < 10; i++){
		vetor[i] = rand() % 20;
	}
	
	printf("Entre com um número: ");
	scanf("%d", &num);
	
	for(i = 0; i < 10; i++){
		if(vetor[i] % num == 0){
			printf("%d é múltiplo de %d e está na posição %d.\n", vetor[i], num, i);
		}
	}
	
	for(i = 0; i < 10; i++){
		printf("%d ",vetor[i]);
	}
	printf("\n");
}
