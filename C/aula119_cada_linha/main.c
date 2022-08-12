#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, i, j, matriz[10][10], maior;

    printf(" Qual a ordem da matriz? ");
    scanf("%d", &M);

    for(i=0; i<M; i++){
        for(j=0; j<M; j++){
            printf(" Elemento [%d , %d] : ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf(" Maior numero de cada linha: \n");


    for(i=0; i<M;i++){
        maior = matriz[i][0];
        for(j=0; j<M; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
         printf("%d \n", maior);
    }

    return 0;
}
