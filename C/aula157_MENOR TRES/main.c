#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf(" Informe tres numeros: \n");
    scanf("%d%d%d", &a,&b,&c);

    if(a<=b && a<=c)
        printf(" MENOR: %d", a);
    else if(b<c)
        printf(" MENOR: %d", b);
    else
        printf(" MENOR: %d", c);

    return 0;
}
