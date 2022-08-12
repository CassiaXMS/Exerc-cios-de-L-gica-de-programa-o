#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,N, i,j;
    float matriz[10][10], vetor[10];

    printf("Qual a qtd. de linha da matriz? ");
    scanf("%d", &M);
    printf("Qual a qtd. de coluna da matriz? ");
    scanf("%d", &N);


    for(i=0; i<M; i++){
        printf("\n Digite os elementos da %da. linha: \n", i+1);
        for(j=0; j<N; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<M; i++){
            vetor[i] = 0;
        for(j=0;j<N;j++){
            vetor[i] = vetor[i]+matriz[i][j];
        }
    }
    printf("\n Vetor gerado: \n");
    for(i=0; i<M; i++){
        printf(" %.2f \n", vetor[i]);
    }
    return 0;
}
