#include<stdio.h>
#include<string.h> // biblioteca necessária para usar o comando strcmp

int main(){


	int num;
	char string1[] = "algoritmos";
	char string2[] = "Algoritmos";

	num = strcmp(string1, string2);
	
	if(num == 0)
		printf("As strings são iguais!\n");
	else if(num < 0)	
		printf("%s é alfabeticamente menor que %s \n", string1, string2);
	else
		printf("%s é alfabeticamente maior que %s \n", string1, string2);
	
	return 0;

}
