/*
14) Faça um programa que leia três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes.

*/

#include<stdio.h>

int main(){

	int n1, n2, n3;

	printf("Informe três números diferentes:\n");
	scanf("%d%d%d", &n1, &n2, &n3);


	if(n1 < n2 && n1 < n3){

		if(n2 < n3){
			printf("Ordem crescente é: %d, %d, %d\n", n1, n2, n3);		
		}else{
			printf("Ordem crescente é: %d, %d, %d\n", n1, n3, n2);
		}
		
	}else if( n2 < n1 && n2 < n3 ) {
		
		if(n1 < n3){
			printf("Ordem crescente é: %d, %d, %d\n", n2, n1, n3);		
		}else{
			printf("Ordem crescente é: %d, %d, %d\n", n2, n3, n1);
		}
		
	} else if ( n3 < n1 && n3 < n2 ){
		if(n1 < n2){
			printf("Ordem crescente é: %d, %d, %d\n", n3, n1, n2);		
		}else{
			printf("Ordem crescente é: %d, %d, %d\n", n3, n2, n1);
		}	
	}

	return 0;
}
