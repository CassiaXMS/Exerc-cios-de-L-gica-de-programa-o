#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,qtd;
    float media, soma=0.0;

    printf(" Quantos numeros voce vai digitar? ");
    scanf("%d", &qtd);

    float vetor[qtd];

    for(i=0; i<qtd; i++){
        printf(" Digite um numero:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
        media = soma/qtd;
    }

    printf("\n VALORES=", vetor[i]);
    for(i=0; i<qtd; i++){
        printf("%.1f\t", vetor[i]);
    }
    printf("\n SOMA = %.2f", soma);
    printf("\n MEDIA = %.2f", media);

    return 0;
}
