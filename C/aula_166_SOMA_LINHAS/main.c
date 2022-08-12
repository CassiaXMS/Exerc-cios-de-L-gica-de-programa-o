#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,N,i,j, soma;

    printf(" Qual a quantidade de linhas da matriz: ");
    scanf("%d", &M);
    printf(" Qual a quantidade de colunas da matriz: ");
    scanf("%d", &N);

    float mat[M][N];

    for(i=0; i<M; i++){
        printf("Digite o elemento %da linha: \n",i+1);
        for(j=0; j<N; j++){
            scanf("%f", &mat[i][j]);
        }
    }

    float vet[i];

    for(i=0; i<M; i++){
        vet[i]=0;
        for(j=0; j<N; j++){
            vet[i]=vet[i]+mat[i][j];
        }
    }

    printf("\n VETOR GERADO:\n" );
    for(i=0; i<M;i++){
        printf(" %.1f \n", vet[i]);
    }

    return 0;
}
