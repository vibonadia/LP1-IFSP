#include <stdio.h>

int soma (int a, int b) {
  a = a + 10; // altera o valor de a somente dentro do escopo da funcao
  b = b + 10; // altera o valor de b somente dentro do escopo da funcao
  return (a + b);
}

int main () 
{
  	int a, b;

  	printf ("Digite o valor de a: ");
  	scanf ("%d", &a);

  	printf ("Digite o valor de b: ");
  	scanf ("%d", &b);

  	printf ("Soma de a e b: %d\n", a + b);
  	printf ("Retorno da funcao soma: %d\n\n", soma(a, b));
  	printf ("a: %d\n", a);
  	printf ("b: %d\n\n", b);

  	return 0;
}
