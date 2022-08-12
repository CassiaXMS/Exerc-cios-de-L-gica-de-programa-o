#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd, i, numero;

    printf(" Quantos numeros voce vai digitar? ");
    scanf("%d", &qtd);

    int vetor[qtd];

    for(i=0; i<qtd; i++){
        printf(" Digite um numero: ");
        scanf("%d", &vetor[i]);

    }
    printf(" \n NUMEROS NEGATIVOS \n");

    for(i=0; i<qtd; i++){
        if(vetor[i] < 0){
            printf(" %d\n", vetor[i]);
        }
    }
    return 0;
}
