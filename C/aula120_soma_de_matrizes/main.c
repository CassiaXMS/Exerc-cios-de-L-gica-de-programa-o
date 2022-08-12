#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,N,i,j, matA[10][10], matB[10][10], matC[10][10];

    printf(" Quantas linhas vai ter a matriz? ");
    scanf("%d", &M);
    printf(" Quantas colunas vai ter a matriz? ");
    scanf("%d", &N);

    printf("\n Digite os valores da matriz A: \n" );
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf(" Elemento [%d %d]: ", i,j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("\n Digite os valores da matriz B: \n" );
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf(" Elemento [%d %d]: ", i,j);
            scanf("%d", &matB[i][j]);
        }
    }

    printf("\n Matriz Soma: \n");
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
            printf(" %d", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
