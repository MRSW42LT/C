#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
1. Faça um algoritmo para ler, calcular e escrever a média entre três números conforme as opções
abaixo:
    a) A média aritmética dada pela fórmula: a + b + c
    3

    b) A média harmônica dada pela fórmula: 3____
    1 + 1 + 1
    a b c

    c) A média geométrica dada pela fórmula: a.b.c 3
    Para cada opção crie um procedimento.

*/


void mediaAritmetica(float a, float b, float c){
    float valor = (a+b+c)/3;
    return printf("mediaAritmetica: %f\n", valor);
}
void mediaGeometrica(float a, float b, float c){
    float valor = pow(a *b*c, (float) 1/3);
    return printf("mediaGeometrica: %f\n", valor);
}
void mediaHarmonica(float a, float b, float c){
    float valor = 3/(1/a + 1/b + 1/c);
    return printf("mediaHarmonica: %f\n", valor);
}

int main(){
    float a, b, c;

    printf ("Digite o numero A: ");
    scanf("%f", &a);
    printf ("Digite o numero B: ");
    scanf("%f", &b);
    printf ("Digite o numero C: ");
    scanf("%f", &c);

    mediaAritmetica(a,b,c);
    mediaGeometrica(a,b,c);
    mediaHarmonica(a,b,c);

    return 0;
}
