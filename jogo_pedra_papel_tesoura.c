#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int jogador, bot;
    printf("\n----------------------");
    printf("\n 1 - Pedra ");
    printf("\n 2 - Papel ");
    printf("\n 3 - Tesoura ");
    printf("\nDigite a sua jogada: ");
    scanf("%d", &jogador);
    srand(time(NULL));
    bot = (rand() % 3) + 1;
   
    if(jogador == 1)
        printf("\nSua jogada: %d - Pedra\n", jogador);
    else if(jogador == 2)
        printf("\nSua jogada: %d - Papel\n", jogador);
    else
        printf("\nSua jogada: %d - Tesoura\n", jogador);
   
    if(bot == 1)
        printf("Bot: %d - Pedra\n", bot);
    else if(bot == 2)
        printf("Bot: %d - Papel\n", bot);
    else
        printf("Bot: %d - Tesoura\n", bot);
 
    printf("\nResultado da jogada: \n");
   
    if(jogador == bot)
        printf(" --> Empate!!!\n");
    else if( (jogador == 1 && bot == 3) || (jogador == 2 && bot == 1) || (jogador == 3 && bot == 2))
        printf(" --> Parabéns você venceu!!!\n");
    else
        printf(" --> Xiiiii, o bot venceu! \n");
    printf("\n----------------------");
    return 0;
}