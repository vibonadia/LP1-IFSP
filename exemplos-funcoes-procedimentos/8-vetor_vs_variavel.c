#include <stdio.h>

void altera(int vet[], int x) 
{
	vet[0] = -1;
	x = -1;
}

int main() 
{
  	int vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  	int x = 0;

	printf("Antes de chamar a função altera...\n");
  	printf("vet[0] = %d\n", vet[0]);
  	printf("x      = %d\n", x);	

  	altera(vet, x);
  	
	printf("Depois de chamar a função altera...\n");
  	printf("vet[0] = %d\n", vet[0]);
  	printf("x      = %d\n", x);
  

  	return 0;
}
