/* programa que recebe n notas */
#include <stdio.h>

// Constante que define o tamanho maximo do vetor
#define MAX_SIZE 10


// funcao que recebe um vetor e retorna o valor do maior elemento
int maiorElemento(int vet[], int tamanho){
  int i, maior = vet[0];

	for (i = 0; i < tamanho; i++) {
	    if (maior < vet[i]) {
    		maior = vet[i];
		}
	}

  return(maior);
}


// funcao principal
int main()
{
  int vetor[MAX_SIZE];
  int n, i;

  // recebe a quantidade (n) de valores
  printf("Informe a quantidade de valores: ");
  scanf("%d", &n);


  // recebe os n valores
  for (i = 0; i < n; i++) {
		printf("Informe o valor %d: ", i+1);
		scanf("%d", &vetor[i]);
  }

  // imprime o valor do maior elemento
  printf("Maior elemento: %d\n\n", maiorElemento(vetor, n)); 


  return 0;
}
