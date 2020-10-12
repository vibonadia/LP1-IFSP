#include<stdio.h>

struct dma{
    int dia;
    int mes;
    int ano;
};

int main(){
    struct dma data1; 
    struct dma data2; 

    int vetor[3] = {1, 2, 3};
    int vetor2[3];

    vetor2[1] = vetor[1];

    data1.dia = 10;
    data1.mes = 12;
    data1.ano = 1990;

    data2 = data1;

    printf("%d/%d/%d\n", data1.dia, data1.mes, data1.ano);
    printf("%d/%d/%d\n", data2.dia, data2.mes, data2.ano);
    return 0;
}
