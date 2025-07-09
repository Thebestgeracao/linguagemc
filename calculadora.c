#include <stdio.h>

double a, b;

double Somar(double n1, double n2){
    return n1 + n2;
}

double Subtrair(double n1, double n2){
    return n1 - n2;
}

double Multiplicar(double n1, double n2){
    return n1 * n2;
}

double Dividir(double n1, double n2){
    return n1 / n2;
}

int LerOperacao(){
    int opcao;
    system("clear");
    printf("###### Calculadora ######\n");
    printf("Escolha a operação: \n");
    printf("  1 - Soma \n");
    printf("  2 - Subtração \n");
    printf("  3 - Multiplicação  \n");
    printf("  4 - Divisão \n");
    printf("Digite a opção: ");
    scanf("%d",&opcao);
    return opcao;
}

void Entrada(){
    printf("Digite o primeiro número: ");
    scanf("%lf",&a);
    printf("Digite o segundo número: ");
    scanf("%lf",&b);
   
}

int main()
{
    char continua;
    do{
       
        switch(LerOperacao()){
            case 1:
                Entrada();
                printf("Soma: %.2lf", Somar(a,b));
                break;
            case 2:
                Entrada();
                printf("Subtração: %.2lf", Subtrair(a,b));
                break;            
            case 3:
                Entrada();
                printf("Multiplicação: %.2lf", Multiplicar(a,b));
                break;  
            case 4:
                Entrada();
                printf("Divisão: %.2lf", Dividir(a,b));
                break;
            default:
                printf("Digite uma operação válida (1 à 4)");
        }
       
        printf("\nDeseja continuar(s/n)? ");
        scanf(" %c", &continua);
    }while(continua == 's');

    return 0;
}