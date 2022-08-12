#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idades, i=1, idade;
    float soma=0.0;

    printf("Digite as idades: \n");
    scanf("%d", &idades);

    soma=idades;

    if(idades<0){
        printf(" IMPOSSIVEL CALCULAR \n");
    }else{
        do{
            scanf("%d", &idade);
            if(idade<0)
                break;
            soma = soma + idade;
            i++;

        }while(idade>=0);

        printf(" MEDIA = %.2f", soma/i);
    }



    return 0;
}
