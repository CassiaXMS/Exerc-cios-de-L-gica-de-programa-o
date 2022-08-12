#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largura, comprimento, metro;

    printf(" Largura do terreno: \n");
    scanf("%f", &largura);
    printf(" Comprimento do terreno: \n");
    scanf("%f", &comprimento);
    printf(" Valor do metro quadrado: \n");
    scanf("%f", &metro);

    printf(" Area do terreno: %.2f", largura*comprimento);
    printf("\n Valor do terreno: %.2f", (largura*comprimento)* metro);
    return 0;
}
