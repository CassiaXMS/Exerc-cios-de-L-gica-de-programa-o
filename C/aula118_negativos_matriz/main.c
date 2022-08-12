#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M,N, i,j, matriz[10][10];

    printf(" Qual a qtd. de linhas? ");
    scanf("%d", &M);
    printf(" Qual a qtd. de colunas? ");
    scanf("%d", &N);

    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            printf("\n Elemento [%d,%d]: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n NUMEROS NEGATIVOS: \n");
    for(i=0; i<M;i++){
        for(j=0; j<N;j++){
            if(matriz[i][j] < 0)
                printf(" %d \n", matriz[i][j]);
        }
    }
    return 0;
}
