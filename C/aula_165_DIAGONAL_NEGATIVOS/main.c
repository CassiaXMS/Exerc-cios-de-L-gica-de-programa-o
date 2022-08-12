#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, N,cont;

    printf(" Qual a ordem da matriz: ");
    scanf("%d", &N);

    int mat[N][N];

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("\n Elemento [%d,%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n DIAGONAL PRINCIPAL: \n");
    for(i=0; i<N; i++){
        printf("%d ", mat[i][i]);
    }

    cont=0;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if (mat[i][j] < 0){
                cont = cont+1;
            }
        }
    }
    printf("\n QUANTIDADE DE NEGATIVOS: %d \n", cont);
    return 0;
}
