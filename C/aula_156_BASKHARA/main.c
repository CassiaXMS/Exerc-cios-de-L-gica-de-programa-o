#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf(" Coeficiente a: ");
    scanf("%f", &a);
    printf(" Coeficiente b: ");
    scanf("%f", &b);
    printf(" Coeficiente c: ");
    scanf("%f", &c);

    delta  = pow(b,2.0)-4 * a * c;

    if(delta > 0 || delta == 0){
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("\n X1: %.4f",x1);
        printf("\n X2: %.4f",x2);

    }else
        printf("\n Nao admite solucao real.");
    return 0;
}
