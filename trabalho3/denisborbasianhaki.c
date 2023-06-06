#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // habilita acentuação
#include <string.h>

/*
       ----------------
       | Código:      |
       ------------------------------------
       | Nome:               | Ano:       |
       ------------------------------------
       | Cargo:             | ValorHora:  |
       ------------------------------------
*/
struct Funcionarios
{
    int codigo;
    char nome[50];
    char cargo[50];
    char ano[4];
    double valorHora;
} Funcionario[50];

int main()
{

    strcpy(Funcionario[1].nome, "Pedro");
    strcpy(Funcionario[1].cargo, "Pedreiro");
    strcpy(Funcionario[1].ano, "1940");
    Funcionario[1].valorHora, 15.5;

    return 0;
}