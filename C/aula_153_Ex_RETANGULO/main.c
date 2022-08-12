#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura, base;

    printf(" Digite a base do retangulo: ");
    scanf("%f", &base);
    printf(" Digite a altura do retangulo: ");
    scanf("%f", &altura);

    printf("\n AREA: %.4f", base*altura);
    printf("\n PERIMENTRO: %.4f", 2*(base+altura));
    printf("\n DIAGONAL: %.4f", sqrt(pow(base, 2.0) + pow(altura, 2.0)));
    return 0;
}
