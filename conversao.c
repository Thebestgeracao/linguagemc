#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
    double metros, centimetros;
    printf("Digite o valor em metros: ");
    scanf("%lf", &metros);
    centimetros = metros * 100;
    printf("%.2lf metros, %.2lf é igual a: %.2lf centímetros.\n", metros, metros, centimetros);

    return 0;
}
