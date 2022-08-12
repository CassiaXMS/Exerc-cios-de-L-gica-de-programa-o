#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    double C, F;
    char resp;

    printf(" Conversao de Celsius para Fahrenheit: \n\n");

    do{
        printf(" Informe a temperatura em Celsius:");
        scanf("%lf", &C);
        F = (9.0 * C) / 5.0 + 32.0;
        printf(" A temperatura em Fahrenheit: %.1lf", F);
        printf(" Deseja continuar (S/N) ");
        limpar_entrada();
        scanf("%c", &resp);
    }while(resp == 'S');
    return 0;
}
