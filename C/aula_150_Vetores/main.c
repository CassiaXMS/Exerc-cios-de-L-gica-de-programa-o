#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd, i;


    printf(" Quantos numeros ira digitar: ");
    scanf("%d", &qtd);

    double vet[qtd];

    for(i=0; i<qtd; i++){
        printf(" Numeros: ");
        scanf("%lf", &vet[i]);
    }

    for(i=0; i<qtd; i++){
        printf(" Numeros digitados: %.1lf \n", vet[i]);
    }
    return 0;
}
