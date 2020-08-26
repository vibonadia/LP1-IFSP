#include<stdio.h>
#include<string.h> // biblioteca necessária para usar o comando strcat

int main(){

	char string1[100] = "Algoritmos";
	char string2[] = " e Programação";
	char string3[] = "exemplo";

	strcat(string1, string2);
	strcat(string1, string3);

	printf("%s\n", string1);

	return 0;	
}
