#include <stdio.h>
#include<time.h>
#include<stdlib.h> // biblioteca que fornece o comando rand

int gera_aleatorio () {
	int aleatorio;
	srand( (unsigned)time(NULL) ); // Alimenta a função rand com o tempo atual
	aleatorio = rand() % 10; // gera um número aleatório entre 0 e 9
  	return aleatorio;
}

int main ()  {
  	int aleatorio = gera_aleatorio();
  	
  	printf("%d\n", aleatorio);
	
  	return 0;
}







