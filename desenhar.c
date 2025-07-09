#include<stdio.h>
int main(){
    int linha, coluna, qtdLinhas, qtdColunas;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &qtdLinhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &qtdColunas);
    for(linha=1; linha<=qtdLinhas; linha++){
        for(coluna=1; coluna<=qtdColunas; coluna++){
            if(linha == 1 || linha == qtdLinhas || coluna == 1 || coluna == qtdColunas)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}