#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
        double salario, aumento, salarioFinal;
        int taxa;
        printf("\nAumento Salarial 🤑 💰");
        printf("\n\nDigite o salário: R$ ");
        scanf("%lf", &salario);
        printf("Digite o percentual do aumento(%%): ");
        scanf("%d", &taxa);
        aumento = salario * taxa/100;
        salarioFinal = salario + aumento;
        printf("Salário: R$ %.2lf", salario);
        printf("\nPercentual: %d%%", taxa);
        printf("\nAumento: R$ %.2lf", aumento);
        printf("\nSalário ajustado: R$ %.2lf", salarioFinal);
        
    return 0;
}