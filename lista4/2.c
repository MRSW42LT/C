#include <stdio.h>
#include <stdlib.h>

/*
Criar um programa para ler o preço e a categoria de um produto. Calcular o reajuste de acordo
com a categoria: se a mesma for A=50%, B=25%, C=15% e outras 5%. Depois mostre o valor
antigo, o percentual de reajuste e o valor reajustado.
*/

int main()
{
    float preco;
    char categoria;

    printf("Insira o preco do produto\n", preco);
    scanf("%f", &preco);
    fflush(stdin);

    printf("Insira a categoria do produto\n", categoria);
    scanf("%c", &categoria);
    categoria = tolower(categoria);

    float preco_reajuste;
    switch (categoria)
    {
    case 'a':
        preco_reajuste = preco + (preco * 0.50);
        printf("O preco antigo era %f", preco);
        printf("O produto sofreu um reajuste de 50%% e custa agora %f ", preco_reajuste);
        break;
    case 'b':
        preco_reajuste = preco + (preco * 0.25);
        printf("O preco antigo era %f", preco);
        printf("O produto sofreu um reajuste de 25%% e custa agora %f ", preco_reajuste);
        break;
    case 'c':
        preco_reajuste = preco + (preco * 0.15);
        printf("O preco antigo era %f", preco);
        printf("O produto sofreu um reajuste de 25%% e custa agora %f ", preco_reajuste);
        break;

    default:
        preco_reajuste = preco + (preco * 0.05);
        printf("O preco antigo era %f", preco);
        printf("O produto sofreu um reajuste de 25%% e custa agora %f ", preco_reajuste);
        break;
    }
}