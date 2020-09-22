#include <stdio.h>

void bom_dia();
void boa_tarde();
void boa_noite();

int main ()  {
	int hora;
	
	printf("Que horas são?\n");
	scanf("%d", &hora);
	
	if(hora < 12) {
		bom_dia();
	} else if (hora < 18) {
		boa_tarde();
	} else {
		boa_noite();		
	}
  	return 0;
}

void bom_dia() {
	printf("Minha primeira função\n");
	printf("Olá, bom dia!\n");
}

void boa_noite(){
	printf("Boa noite! Bom descanso.\n");
}

void boa_tarde(){
	boa_noite();
	printf("Tenha uma ótima tarde!\n");
}

