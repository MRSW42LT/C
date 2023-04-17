#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // habilita acentuação


// declaração de funções
void executar_menu(); 
void exemploBreak();
void exemploContinue(); 
void exemploReturn();
void exemploGoto();
void sair();
void voltar();
void clrscr(); // limpa a tela

int main() {
    setlocale(LC_ALL, "Portuguese");
    clrscr(); 
    executar_menu();
    return 0;
}

void executar_menu (){ // menu principal
    printf("1 - Exemplo comando break \n");
    printf("2 - Exemplo comando continue \n");
    printf("3 - Exemplo comando return \n");
    printf("4 - Exemplo comando goto \n");
    printf("5 - Exemplo função Exit() \n");
    printf("6 - Sair \n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            exemploBreak();
            break;
        case 2:
            exemploContinue();
            break;
        case 3:
            exemploReturn();
            break;
        case 4:
            exemploGoto();
            break;
        case 5:
            sair();
            break;
        case 6:
            sair();
            break;
        default:
            //printf("Opção inválida");
            voltar();
            break;
    }
}

void exemploBreak() {
    clrscr();
    printf("Exemplo comando break \n\n");
    printf("Insira um número entre 0 e 100 onde o break será ativado: \n");
    int break_index;
    scanf("%d", &break_index);
 
    int i;
    for (i = 0; i < 100; i++) {
        if (i == break_index) {
            break;
        }
        printf("%d ", i);
    }

    printf("\n\n");
    printf("Pressione [1] para voltar ao menu\n");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        voltar();
    }
    else {
        printf("\nOpção inválida\n");
    }

}

void exemploContinue() {
    clrscr();
    printf("Exemplo comando continue \n\n");

    // Programa para calcular a soma dos números (3 números no máximo)
    // Se o usuário digitar um número negativo, continua, não é adicionado ao resultado

    printf("Neste programa, quando o usuário insere um número positivo, a soma é calculada usando soma += número. \n");
    printf("Quando o usuário insere um número negativo, a instrução continue é executada e ignora o número negativo do cálculo. \n\n");

    /* exemplo de saída
    Digite um número 1: 1
    Digite um número 2: -5
    Digite um número 3: 1
    Soma = 2.00
    */

    int i;
    double num, soma = 0.0;

    for (i = 1; i <= 3; ++i) {
        printf("Digite um número %d: ", i);
        scanf("%lf", &num);

        if (num < 0.0) {
            continue;
        }

        soma += num; // soma = soma + num;
    }

    printf("Soma = %.2lf", soma);

    printf("\n\n");
    printf("Pressione [1] para voltar ao menu\n");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        voltar();
    }
    else {
        printf("Opção inválida");
    }
}

int sum(int n1, int n2) {
    return n1 + n2;
}

void exemploReturn() {
    clrscr();
    printf("Exemplo comando return \n\n");

    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    clrscr();

    int retorno = sum(num1, num2);

    printf("Função exemplo: \n \n");
    printf("    int sum(int n1, int n2) {\n    return n1 + n2;\n    }\n\n");
    printf("A função foi executada e retornou o resultado.\n");
    printf("A soma de %d e %d é %d\n\n", num1, num2, retorno);

    printf("Pressione [1] para voltar ao menu\n");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        voltar();
    }
    else {
        printf("Opção inválida");
    }
}

void exemploGoto() {
    // goto Desvia o fluxo de execução do programa para um ponto específico
    clrscr();
    printf("Exemplo comando goto \n\n");
    printf("Neste exemplo, se o número inserido for par o 'goto' leva até a linha de resposta para um número par, e vice-versa \n\n");

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    clrscr();

    // if num é divisível por 2 sem resto, então é par
    // fiz um teste de operador ternário, mas não funcionou, então fiz com if/else
    // (num % 2 == 0) ? goto par : goto impar;

    printf("Exemplo de goto: \n \n");

    if(num % 2 == 0)
    {
        goto par;
        printf("O goto pula essa linha e vai direto para seu destino \n");
        par:
        printf("O número %d é par\n\n", num);
    }
    else {
        goto impar;
        printf("O goto pula essa linha e vai direto para seu destino \n");
        impar:
        printf("O número %d é ímpar\n\n", num);
    }

    printf("Para entender o código, veja o código fonte \n\n");
    printf("Pressione [1] para voltar ao menu\n");
    printf("Pressione [2] para ver o código fonte\n");

    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        voltar();
    }
    else if (opcao == 2)
    {
        clrscr();
        printf("--------------------------------------------\n");
        printf("Exemplo de código: \n");
        printf("--------------------------------------------\n\n");
        char resto = '%';
        printf("if (num %c 2 == 0)\n    goto par; \n", resto);
        printf("else \n    goto impar; \n\n");

        printf("    par:\n");
        printf("    printf(\"O número X é par\\n\\n\", num);\n");
        printf("    goto fim;\n\n");

        printf("    impar:\n");
        printf("    printf(\"O número X é ímpar\\n\\n\", num);\n");
        printf("    goto fim;\n\n");
        printf("--------------------------------------------\n\n");

        printf("Pressione [1] para voltar ao menu\n");
        int opcao;
        scanf("%d", &opcao);
        if (opcao == 1) {
            voltar();
        }
        else {
            printf("Opção inválida");
        }
    }
    
    else {
        clrscr();
        printf("Opção inválida");
    }
}

void sair() {
    clrscr();
    printf("Saindo do programa\n");
    exit(0); // sai do programa
}

void clrscr() // limpa a tela, função retirada da internet
{
    system("clear||@cls");
}

void voltar() {
    clrscr();
    return executar_menu();
}
