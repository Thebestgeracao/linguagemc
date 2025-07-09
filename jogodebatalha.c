#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SAUDE 100

//Protótipos
void MostrarStatus(int saudeHeroi, int saudeMonstro);
int AtaqueHeroi();
int CuraHeroi(int saudeHeroi);
int AtaqueMonstro();
int verificaGanhador(int *saudeHeroi, int *saudeMonstro);

int main()
{
    int saudeHeroi = MAX_SAUDE;
    int saudeMonstro = MAX_SAUDE;
    char jogada;
    srand(time(NULL));
    do{
        system("clear");
        MostrarStatus(saudeHeroi, saudeMonstro);
        printf("  → 1 - Ataque 🗡️\n");
        printf("  → 2 - Cura 🩹 \n");
        printf("  → 3 - Defesa 🛡️️ \n");
        printf("  → 4 - Sair 🚪🔚️ \n");
        scanf(" %c", &jogada);
        if(jogada == '1'){
            int dano = AtaqueHeroi();
            saudeMonstro = saudeMonstro - dano;
            printf("Seu ataque causou %d de dano no Monstro 🗡 \n", dano);
        }
        else if(jogada == '2'){
            saudeHeroi = CuraHeroi(saudeHeroi);
        }
        else if(jogada == '3'){
            printf("Você defendeu o ataque do monstro 🛡\n");
            printf("Pressione Enter para continuar\n");
            getchar();
            getchar();
            continue;
        }
        else if(jogada == '4'){
            printf("Você desistiu do jogo 🚪🔚️\n");
            break;
        }
        else{
            printf("️Jogada inválida \n");
            printf("Pressione Enter para continuar\n");
            getchar();
            getchar();
            continue;
        }
       
        //Ataque do Monstro
        if(saudeMonstro > 0){
            int danoMonstro = AtaqueMonstro();
            saudeHeroi -= danoMonstro;
            printf("O ataque do Monstro causou %d de dano. 💀👹 \n", danoMonstro);
        }
       
        if(verificaGanhador(&saudeHeroi, &saudeMonstro)){
            break;
        }
       
        printf("Pressione Enter para continuar\n");
        getchar();
        getchar();
    }while(jogada != '4');
   
    if(saudeMonstro <= 0){
        printf("🏆 Parabéns, você derrotou o Monstro! 🏆 \n ");
    }
    else if(saudeHeroi <= 0){
        printf("☠️ O Monstro venceu! Tente jogar novamente! ☠️\n");
    }
    else{
        printf("O jogo foi encerrado antes do final... 🚪 \n");
    }

    return 0;
}

void MostrarStatus(int saudeHeroi, int saudeMonstro){
        printf("###### Jogo de Batalha ⚔️  ######\n");
        printf("##### Herói🦸  x 👹  Monstro #####\n");
        printf("--------------------------------\n");
        printf(" Herói: %d\n", saudeHeroi);
        printf(" Monstro: %d\n", saudeMonstro);
        printf("--------------------------------\n");
}


int CuraHeroi(int saudeHeroi){
    int cura;
    cura = rand() % 11 + 20;
    saudeHeroi = saudeHeroi + cura;
    if(saudeHeroi > MAX_SAUDE){
        saudeHeroi = MAX_SAUDE;
        printf("A vida do herói foi limitada a 100 HP.\n");
    }
    printf("A cura foi de %d HP. 🧪 \n", cura);
    return saudeHeroi;
}


int AtaqueHeroi(){
    return rand() % 11 + 20;
}


int AtaqueMonstro(){
    return rand() % 11 + 20;
}

//Retorna 1 se tiver ganhador
int verificaGanhador(int *saudeHeroi, int *saudeMonstro){
    if(*saudeHeroi <= 0 || *saudeMonstro <= 0){
        return 1;
    }
    return 0;
}
