/*
Faça um programa que preenche um vetor com 10 elementos informados pelo usuário. Em seguida seu programa deve imprimir na tela os elementos que aparecem apenas uma vez no vetor. 
*/
#include <stdio.h>

int main(){
    int i, j, vetor[10], cont;

	// faz a leitura dos elementos do vetor    
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    
    // verifica se o elemento é único no vetor
    // para cada elemento do vetor...
    for(i = 0; i < 10; i++){
    	cont = 0;
		// procura no próprio vetor um elemento igual
		for(j=0; j<10; j++){
			// se os elementos forem iguais vetor[i] == vetor[j]
			// e eu não estou comparando o mesmo elemento i != j 
			if( (vetor[i] == vetor[j]) && (j != i)){
				cont++;
			}
		}
		// se não foi encontrado outro número igual no vetor,
		// então imprime o número
		if(cont == 0){
			printf("%d ", vetor[i]);
		}
	}
	printf("\n");
    return 0;
}
