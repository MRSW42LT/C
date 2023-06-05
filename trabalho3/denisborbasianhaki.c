#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // habilita acentuação

int main()
{
    /*
        |   ----------------
        |   | Código:      |
        |   ------------------------------------
        |   | Nome:               | Ano:       |
        |   ------------------------------------
        |   | Cargo:             | ValorHora:  |
        |   ------------------------------------
    */
    struct funcionarios
    {
        int codigo;
        char nome[50];
        char cargo[50];
        char ano[4];
        double valorHora;
    };

    return 0;
}