#include <stdio.h>

/*struct aluno
// Definindo estrutura para o aluno
{
    char nome[50];
    int idade;
    float media;
};*/

// Exemplo dois: usando typedef para criar p tipo Aluno
typedef struct
{
    char nome[50];
    int idade;
    float media;

} aluno;

int main()
{
    // Criando e inicializando uma variavel do tipo Aluno
    aluno aluno1 = {"João", 20, 8.5};

    // Acessando os dados com o operador
    printf("aluno: %s \n", aluno1.nome);
    printf("idade: %d \n", aluno1.idade);
    printf("media: %.2f \n", aluno1.media);

    return 0;
}