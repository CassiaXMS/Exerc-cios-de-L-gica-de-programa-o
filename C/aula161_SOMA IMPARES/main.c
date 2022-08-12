#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, troca, i, soma=0;

    printf(" Informe dois numeros: \n");
    scanf("%d%d", &X, &Y);

    if(X>Y) {
        troca=X;
        X=Y;
        Y=troca;
    }

    for(i= X+1; i<Y; i++){
        if(i % 2 != 0){
            soma = soma+i;
        }
    }
    printf("\n SOMA IMPARES: %d", soma);
    return 0;
}
