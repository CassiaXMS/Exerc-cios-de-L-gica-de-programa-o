#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdlinhas, qtdcolunas,i,j;


    printf(" ----- MONTANDO MATRIZES ----- \n\n");

    printf(" Quantas linhas: ");
    scanf("%d", &qtdlinhas);
    printf(" Quantas colunas: ");
    scanf("%d", &qtdcolunas);

    int matriz[qtdlinhas][qtdcolunas];

    for(i=0; i<qtdlinhas; i++){
        for(j=0; j<qtdcolunas; j++){
            printf("\nPosicao [%d,%d] :", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n Matriz digitada: \n");

    for(i=0; i<qtdlinhas; i++){
        for(j=0; j<qtdcolunas; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
