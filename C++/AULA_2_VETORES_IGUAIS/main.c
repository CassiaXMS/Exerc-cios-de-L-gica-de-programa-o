#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet1[5], vet2[5], comum;

    printf(" PRIMEIRO VETOR: \n");
    for(int i=0; i<5; i++){
            printf("[%d, %d]: ", i,i);
            scanf("%d", &vet1[i]);
    }

    printf("\n ");

    printf(" SEGUNDO VETOR: \n");
    for(int i=0; i<5; i++){
            printf("[%d, %d]:", i,i);
            scanf("%d", &vet2[i]);
    }

    printf("\n ");

    comum = 0;

    for(int j=0; j<5; j++){
        for(int i=0; j<5; j++){
            if(vet1[i] == vet2[j]){
                comum=1;
                printf(" Posicao %d do vetor 1 e igual a posicao %d do vetor 2", i,j);
            }
        }
    }
    if(!comum)
            printf(" Nenhum numero em comum");

    return 0;
}
