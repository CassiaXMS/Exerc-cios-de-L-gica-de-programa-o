#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, i, j;

    printf(" Deseja a tabuada para qual valor:");
    scanf("%d", &valor);


    for(j=1; j<=10;j++)
        printf(" %d X %d = %d \n", valor,j,valor*j);


    return 0;
}
