#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void contar();

int main()
{

    char nome[10] = {'a', 'n', 'a', ' ', '\0'};
    char sobrenome[10] = {'m', 'a', 'r', 'i', 'a', '\0'};

    strcat(nome, sobrenome);

    printf("String: %s \n", nome);

    return 0;
}

/*
void contarString(char string)
{
    int num;

    return num;
}
*/