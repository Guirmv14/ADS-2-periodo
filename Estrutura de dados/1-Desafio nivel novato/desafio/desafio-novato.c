#include <stdio.h>
#include <stdlib.h> //
#include <string.h> //inclui dados do tipo string (texto)

#define MAX_NOME 30
#define MAX_COR 30
#define MAX_TERRITORIOS 5

struct Territorio {
    char nome [MAX_NOME];
    char cor [MAX_COR];
    int tropas;
};

int main (){
    printf("===============================================================\n");
    printf("Vamos cadastrar os 5 territórios iniciais do nosso mundo.\n");

    struct Territorio territorios[MAX_TERRITORIOS];
    int i;

    printf("--- Cadastrando o territorio --- \n\n");

    for (i = 0; i < MAX_TERRITORIOS; i++){
        printf("Digite o nome do território %d:", i +1);
        fgets(territorios[i].nome, MAX_NOME, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Digite a cor do exercito do territorio %d: ", i + 1);
        fgets(territorios[i].cor, MAX_COR, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        printf("Digite a quantidade de tropas do território %d: ", i+1);
        char buffer[20];
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &territorios[i].tropas);

        printf("\n");
    }
    
        printf("\nCadastro inicial conncluido com sucesso!\n");

    printf("=======================================\n");
    printf("             MAPA DO MUNDO             \n");
    printf("=======================================\n");

    for (i = 0; i < MAX_TERRITORIOS; i++){
    printf("Território %d: \n", i+1);
    printf("Nome: %s \n", territorios[i].nome);
    printf("Cor do exército: %s \n", territorios[i].cor);
    printf("Quantidade de tropas: %d \n", territorios[i].tropas);
    printf("\n");
    }

    return 0;
}