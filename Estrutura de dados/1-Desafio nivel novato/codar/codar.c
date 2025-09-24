#include <stdio.h>
#include <stdlib.h> //
#include <string.h> //inclui dados do tipo string (texto)

//Constantes Globais
#define MAX_LIVROS 50
#define TAM_STRING 100

//Definição de estrutura (struct)
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

// Função para limpar o buffer de entrada
void LimparBufferEntrada(){
    int c;
    while ((c = getchar ()) != '\n' && c != EOF);
}

// Função Principal (main)
int main(){
    struct Livro biblioteca [MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

// Laço Principal do Menu
    do {
       //Exibe o Menu de Opções
       printf ("==========================\n");
       printf ("BIBLIOTECA - PARTE 1\n");
       printf ("==========================\n");
       printf ("1- Cadastrar nnovo livro \n");
       printf ("2- Listar todos os livros\n");
       printf ("----------------------------\n");
       printf ("Escolha uma opção: ");

       //Lê a opção do usuário;
       scanf("%d", &opcao);
       LimparBufferEntrada(); //Limpa o '\n' deixado pelo scanf

       // Processamento da opção
       switch (opcao) {
            case 1: //CADASTRO DE LIVROS
            printf ("---Cadastro de Livros---");

            if (totalLivros < MAX_LIVROS) {
                printf("Digite o nome do livro: ");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                printf("Digite o autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                printf("Digite a editora");
                fgets (biblioteca[totalLivros].editora, TAM_STRING, stdin);

                biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
            }
        break;
       
       default:
        break;
       }
    };
    
}