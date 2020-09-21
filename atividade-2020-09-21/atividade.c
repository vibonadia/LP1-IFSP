// Nome:
// Prontuário:

#include <stdio.h>

/* --- prototipo das funcoes --- */
int soma(int n1, int n2);
int subtracao(int n1, int n2);
int produto(int n1, int n2);
float divisao(int n1, int n2);
double potencia(int n1, int n2);
void imprimirPares(int fim);
void imprimirImpares(int fim);


/* --- funcao principal --- */
int main()  {  
	int val1, val2, op;

	printf("Informe dois valores (N1 e N2): ");
	scanf("%d%d", &val1, &val2);

	printf("Informe uma opção:\n");
	printf("1 - Soma\n");
	printf("2 - Subtração\n");
	printf("3 - Produto\n");
	printf("4 - Divisão\n");
	printf("5 - Potência\n");
	printf("6 - Pares no intervalo de N1 até N2\n");
	printf("7 - Ímpares no intervalo de N1 até N2\n");
	printf("8 - Sair do programa\n");
	scanf("%d", &op);
	
	// TODO: Chamada para as funções de acordo com a opção desejada

	return 0;
}



/* --- implementacao das funcoes --- */

int soma(int n1, int n2){
	return (n1 + n2);
}

// TODO: Implemente as demais funções

