#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{  
    int sorteio, palpite, contador=0;
    srand(time(NULL));
    sorteio = rand()%100;
    do{
        contador++;
        printf("Digite: ");
        scanf("%d", &palpite);
        if(sorteio != palpite){
            printf("Xiiii, errou!!!\n");
            if(sorteio > palpite)
                printf("O nº sorteado é maior!\n");
            else
                printf("O nº sorteado é menor!\n");
        }
    }while(sorteio != palpite);
    printf("Acertou!!! \nSorteio: %d\n", sorteio );
    printf("Tentativas: %d", contador);
    return 0;
}