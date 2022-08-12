#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int qtd, idade[qtd], i,cont, contId;
    char nome[qtd][50];
    float altura[qtd],media, menores;


    printf( "Quantas pessoas serao digitadas? ");
    scanf("%d", &qtd);
    printf("\n");

    for(i=0; i<qtd; i++){
        printf("\n Dados da %da pessoa:",i+1);
        printf("\n Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("\n Idade: ");
        scanf("%d", &idade[i]);
        printf("\n Altura: ");
        scanf("%f", &altura[i]);
    }

    cont=0;

    for(i=0; i<qtd; i++){
        cont = cont + idade[i];
    }
    media = cont/qtd;
    printf("\n Altura media: %.2f", media);

    contId=0;
    for(i=0; i<qtd; i++){
        if(idade[i] < 16)
            contId = contId+1;
    }
    menores = contId * 100.0/qtd;

    printf(" Pessoas com menos de 16 anos: %.1f%%", menores);

    for(i=0; i<qtd; i++){
        if(idade[i] < 16)
            printf("%s \n", nome[i]);
    }
    return 0;
}
