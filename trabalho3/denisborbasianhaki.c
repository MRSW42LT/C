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
    int DiaHoras[2][31];
    // Matriz de dias com horas trabalhadas de cada dia
};

int main()
{

    struct Funcionarios Funcionario1;

    strcpy(Funcionario1.nome, "Nometeste");
    strcpy(Funcionario1.cargo, "Pedreiro");
    strcpy(Funcionario1.ano, "1940");
    Funcionario1.valorHora, 15.5;

    return 0;
}