#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, n3, n4, media;
    printf("Notas Bimestrais 🧮\n\n");
    printf("Digite o primeira nota: ");
    scanf("%d", &n1);
    printf("\nDigite o segunda nota: ");
    scanf("%d", &n2);
    printf("\nDigite a terceira nota: ");
    scanf("%d", &n3);
    printf("\nDigite a quarta nota: ");
    scanf("%d", &n4);
    media = (n1 + n2 + n3 + n4)/4;
    printf("\nA média é %d 📋", media);

    return 0;
}
