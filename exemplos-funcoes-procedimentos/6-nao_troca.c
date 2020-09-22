#include <stdio.h>

void nao_troca(int x, int y) 
{
  	int aux;
  	aux = x;
  	x = y;
  	y = aux;
	printf("Na nao_troca... x = %d, y = %d\n", x, y);
}

int main() 
{
  	int x = 100, y = 200;
  	
    nao_troca(x, y);
    
  	printf("Na main... x = %d, y = %d\n", x, y);
	
  	return 0;
}
