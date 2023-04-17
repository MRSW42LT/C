// char, int, float, double
// modificadores: long, short, signed, unsigned

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // habilita acentuação

int tamanhos_int(void) {
    printf("short int: %d bytes \n", sizeof(short int)); // 2 bytes
    printf("long int: %d bytes \n", sizeof(long int)); // 4 bytes
    printf("unsigned int: %d bytes \n", sizeof(unsigned int)); // 4 bytes
    printf("unsigned short int: %d bytes \n", sizeof(unsigned short int)); // 2 bytes
    printf("unsigned long int: %d bytes \n", sizeof(unsigned long int)); // 4 bytes
    printf("signed int: %d bytes \n", sizeof(signed int)); // 4 bytes
    printf("signed short int: %d bytes \n", sizeof(signed short int)); // 2 bytes
    printf("signed long int: %d bytes \n", sizeof(signed long int)); // 4 bytes
}

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // habilita acentuação

    printf("Exercício 1 - Tamanho de tipos de dados em C\n--------------------------------------------\n");
    printf("Tamanho em memória que cada tipo de dado ocupa sem modificadores: \n");

    printf("char: %d bytes \n", sizeof(char)); // 1 byte
    printf("int: %d bytes \n", sizeof(int)); // 4 bytes
    printf("float: %d bytes \n", sizeof(float)); // 4 bytes
    printf("double: %d bytes \n", sizeof(double)); // 8 bytes

    printf("\nTamanho em memória que cada tipo de dado ocupa com modificadores: \n");
    printf("unsigned char: %d bytes \n", sizeof(unsigned char)); // 1 byte
    printf("signed char: %d bytes \n", sizeof(signed char)); // 1 byte
    tamanhos_int();
    printf("float: %d bytes \n", sizeof(float)); // 4 bytes
    printf("long double: %d bytes \n", sizeof(long double)); // 8 bytes

    return 0;
}

/*
char unsigned char signed char
int, short int, long int, unsigned int, unsigned short int, unsigned long int, signed int, signed short int, signed long int
float
double, long double
*/