#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float media;
    int idade1, idade2;
    char nome1[50], nome2[50];

    printf(" Dados da primeira pessoa:\n");
    printf("\n NOME:");
    gets(nome1);
    printf(" IDADE:");
    scanf("%d", &idade2);

    printf("\n Dados da segunda pessoa:");
    printf("\n NOME:");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf(" IDADE:");
    scanf("%d", &idade1);

    media = (idade1+idade2) /2.0;
    printf("\n A media entre %s e %s e de %.1f anos", nome1, nome2, media);
    return 0;
}
