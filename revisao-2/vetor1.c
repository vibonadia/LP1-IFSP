//Faça um programa em C que preenche dois vetores com cinco elementos informados pelo usuário. Em seguida seu programa deve imprimir na tela quantos elementos aparecem em ambos os vetores. 


#include<stdio.h>

int main(){

	int vetor_1[5], vetor_2[5]; 
	int cont, i, j;

	printf("Elementos do vetor 1:\n");	
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor_1[i]);
	}

	printf("Elementos do vetor 2:\n");	
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor_2[i]);
	}
	
	cont = 0;
	// percorre o primeiro vetor
	for(i = 0; i < 5; i++){
	
		//para cada elemento do primeiro vetor 
		//compara com todos os elementos do segundo
		for(j = 0; j < 5; j++){
			if(vetor_1[i] == vetor_2[j]){
				cont++;			
			}
		}
	}
	
	printf("Existem %d elementos que aparecem em ambos os vetores.\n", cont);
	
	return 0;
}
