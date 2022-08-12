#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i, acum=0;

    i=1;

    printf("Numero: ");
    scanf("%d", &num);

    while(num != 0){
        acum = acum + num;
        printf(" Numero: ");
        scanf("%d", &num);
    }
    printf(" Soma: %d", acum);
    return 0;
}
