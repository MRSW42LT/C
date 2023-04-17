#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Criar um programa para ler o preço e a categoria de um produto. Calcular o reajuste de acordo
com a categoria: se a mesma for A=50%, B=25%, C=15% e outras 5%. Depois mostre o valor
antigo, o percentual de reajuste e o valor reajustado.
*/

void executar_menu();
void clrscr();

int main()
{
    executar_menu();
    return 0;
}

void executar_menu()
{ // menu principal
    printf("a - Triangulo \n");
    printf("b - Circulo \n");
    printf("c - Cubo \n");
    printf("d - Cilindro \n");
    float area, base, altura, lado;
    float pi = 3.14;
    float raio;
    char opcao;
    scanf("%c", &opcao);

    switch (opcao)
    {
    case 'a': // A = base*altura /2
        printf("Insira o valor da base: \n");
        scanf("%f", &base);
        fflush(stdin);
        printf("Insira o valor da altura: \n");
        scanf("%f", &altura);
        fflush(stdin);
        area = base * altura / 2;
        printf("A area do triangulo e %f\n", area);
        system("pause");
        break;
    case 'b': // A = pi * raio²
        printf("Insira o valor do raio: \n");
        scanf("%f", &raio);
        fflush(stdin);
        area = pi * (raio * raio);
        printf("A area do circulo e %f\n", area);
        system("pause");
        break;
    case 'c':
        // 6*lado²
        printf("Insira o valor do lado: \n");
        scanf("%f", &lado);
        fflush(stdin);
        area = 6 * (lado * lado);
        printf("A area do cubo e %f\n", area);
        system("pause");
        break;
    case 'd':
        //(2 * PI * radius * height) + (2 * PI * radius * radius);

        printf("Insira o valor do raio: \n");
        scanf("%f", &raio);
        fflush(stdin);
        printf("Insira o valor da altura: \n");
        scanf("%f", &altura);
        fflush(stdin);
        area = (2 * pi * raio * altura) + (2 * pi * (raio * raio));
        printf("A area do c cilindro e %f\n", area);
        system("pause");
        break;
    default:
        printf("Opção inválida");
        break;
    }
}

void clrscr() // limpa a tela, função retirada da internet
{
    system("clear||@cls");
}