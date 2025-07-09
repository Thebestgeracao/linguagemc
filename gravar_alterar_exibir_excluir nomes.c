#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO "exemplo.txt"
#define MAX_NOMES 1000
#define MAX_TAM 100

//protótipos
void gravar();
void exibir();
void alterar();
void excluir();

int main() {
    int opcao;
    do {
        printf("\n=== MENU ===\n");
        printf("1. Gravar nome\n");
        printf("2. Exibir nomes\n");
        printf("3. Alterar nome\n");
        printf("4. Excluir nome\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // limpar \n do teclado

        switch(opcao) {
            case 1: gravar(); break;
            case 2: exibir(); break;
            case 3: alterar(); break;
            case 4: excluir(); break;
            case 5: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }

    } while(opcao != 5);

    return 0;
}

void gravar() {
    FILE *arquivo = fopen(ARQUIVO, "a");
    char nome[MAX_TAM];

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o nome a gravar: ");
    fgets(nome, MAX_TAM, stdin);
    nome[strcspn(nome, "\n")] = 0; // remover \n

    fprintf(arquivo, "%s\n", nome);
    fclose(arquivo);

    printf("Nome gravado com sucesso!\n");
}

void exibir() {
    FILE *arquivo = fopen(ARQUIVO, "r");
    char linha[MAX_TAM];
    int i = 1;

    if (arquivo == NULL) {
        printf("Arquivo não encontrado.\n");
        return;
    }

    printf("\n--- Lista de Nomes ---\n");
    while (fgets(linha, MAX_TAM, arquivo)) {
        linha[strcspn(linha, "\n")] = 0; // remover \n
        printf("%d. %s\n", i++, linha);
    }

    fclose(arquivo);
}

void alterar() {
    FILE *arquivo = fopen(ARQUIVO, "r");
    char nomes[MAX_NOMES][MAX_TAM];
    int total = 0, i, pos;
    char novo_nome[MAX_TAM];

    if (arquivo == NULL) {
        printf("Arquivo não encontrado.\n");
        return;
    }

    while (fgets(nomes[total], MAX_TAM, arquivo)) {
        nomes[total][strcspn(nomes[total], "\n")] = 0; // remover \n
        total++;
    }
    fclose(arquivo);

    if (total == 0) {
        printf("Nenhum nome cadastrado.\n");
        return;
    }

    exibir();
    printf("Digite o número do nome a alterar: ");
    scanf("%d", &pos);
    getchar();

    if (pos < 1 || pos > total) {
        printf("Número inválido.\n");
        return;
    }

    printf("Digite o novo nome: ");
    fgets(novo_nome, MAX_TAM, stdin);
    novo_nome[strcspn(novo_nome, "\n")] = 0;

    strcpy(nomes[pos - 1], novo_nome);

    arquivo = fopen(ARQUIVO, "w");
    for (i = 0; i < total; i++) {
        fprintf(arquivo, "%s\n", nomes[i]);
    }
    fclose(arquivo);

    printf("Nome alterado com sucesso.\n");
}

void excluir() {
    FILE *arquivo = fopen(ARQUIVO, "r");
    char nomes[MAX_NOMES][MAX_TAM];
    int total = 0, i, pos;

    if (arquivo == NULL) {
        printf("Arquivo não encontrado.\n");
        return;
    }

    while (fgets(nomes[total], MAX_TAM, arquivo)) {
        nomes[total][strcspn(nomes[total], "\n")] = 0;
        total++;
    }
    fclose(arquivo);

    if (total == 0) {
        printf("Nenhum nome cadastrado.\n");
        return;
    }

    exibir();
    printf("Digite o número do nome a excluir: ");
    scanf("%d", &pos);
    getchar();

    if (pos < 1 || pos > total) {
        printf("Número inválido.\n");
        return;
    }

    arquivo = fopen(ARQUIVO, "w");
    for (i = 0; i < total; i++) {
        if (i != pos - 1) {
            fprintf(arquivo, "%s\n", nomes[i]);
        }
    }
    fclose(arquivo);

    printf("Nome excluído com sucesso.\n");
}