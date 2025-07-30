#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    int n1, n2, soma;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("\nA soma é %d ✅", soma);

    return 0;
}
