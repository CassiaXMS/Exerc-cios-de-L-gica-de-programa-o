#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, i, j, mat[10][10];

    printf(" Qual a ordem da matriz? ");
    scanf("%d", &M);

    for(i=0; i<M; i++){
        for(j=0; j<M; j++){
            printf(" Elemento [%d %d]: ", i, j);
            scanf("%d", &mat[i][j]);

        }
    }
    printf("\n Soma dos elementos acima da diagonal principal: \n");
    for(i=0; i<M; i++){

    }
    return 0;
}
