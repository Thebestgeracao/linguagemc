#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
        double celsius, fahrenheit;
        printf("Digite a temperatura em graus Celsius:");
        scanf("%lf", &celsius);
        fahrenheit = ((celsius*9)/5) + 32;
        printf("%.2lfº Celsius equivalem à: %.2lfº Fahrenheit\n", celsius, fahrenheit);
        
    return 0;
}