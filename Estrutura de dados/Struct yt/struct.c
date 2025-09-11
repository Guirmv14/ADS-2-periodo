#include <stdio.h> 
#include <string.h> //inclui dados do tipo string (texto)
#include <locale.h> // Biblioteca que permite o uso de acentos e regras gramaticais do português

#define TAM 50  //Definindo uma constante que vale 50

struct tipo_pessoa{ //Criando uma struct
    int idade;  //Campo do tipo int
    float peso; //Campo do tippo Float
    char nome [TAM];  //Vetor de char com tamanho definido em 50
};

typedef struct tipo_pessoa tipo_pessoa; //Redefine a struct tipo_pessoa, para apenas tipo_pessoa

int main(){
    setlocale(LC_ALL, "Portugeuese");

    //criando e inicializando
    tipo_pessoa pes = {0, 0.0, "teste"}; //Criando a variavel pes

    printf("Inicio:\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Atribuindo valores aos campos
    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "texto"); //strcpy é a função q permite fazer atribuição ao vetor char

    printf("\nAlterando os campos via código: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    //Solicitando inserções via teclado

    printf("\nInsira um número inteiro: \n");
    scanf("%d", &pes.idade);
    printf("Insira um número real: \n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira uma palavra: \n");
    scanf("%s", &pes.nome);

    printf("\nAlterando com dados do usuário\n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);
};