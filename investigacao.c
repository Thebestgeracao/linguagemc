#include <stdio.h>
#include <stdio_ext.h>
int main()
{
    char resposta;
    int contador;
    contador = 0;
    printf("Telefonou para a vítima (s/n)? ");
    scanf("%c",&resposta);
    if(resposta == 's' || resposta == 'S')
        contador++;
    printf("Esteve no local do crime (s/n)? ");
    __fpurge(stdin); //limpa buffer do teclado
    scanf("%c",&resposta);
    if(resposta == 's' || resposta == 'S')
        contador++;
    printf("Mora perto da vítima (s/n)? ");
    getchar(); //limpa buffer do teclado de outra forma
    scanf("%c",&resposta);
    if(resposta == 's' || resposta == 'S')
        contador++;
    printf("Devia para a vítima (s/n)? ");
    __fpurge(stdin);
    scanf("%c",&resposta);
    if(resposta == 's' || resposta == 'S')
        contador++;
    printf("Já trabalhou com a vítima (s/n)? ");
    __fpurge(stdin);
    scanf("%c",&resposta);
    if(resposta == 's' || resposta == 'S')
        contador++;
    printf("Contador: %d\n", contador);
    if(contador <= 1)
        printf("Inocente");
    else if(contador <= 2)
        printf("Suspeito");
    else if(contador <= 4)
        printf("Cúmplice");
    else    
        printf("Assassino");
    return 0;
}