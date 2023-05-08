#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // habilita acentuação
#include <string.h>
#include <math.h>

void executar_menu();
void sair();
void voltar();
void fim_func();
void tornar_extenso(char* num);
int contar_digitos(int x);

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear||@cls");

    executar_menu();

    return 0;
}

void executar_menu() {
    printf("1 -  \n");
    printf("2 - Transformar extenso \n");
    //printf("3 - Voltar \n");
    printf("3 - Sair \n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            break;
        case 2:
            // o valor deve ser passado como string para ser mais fácil de manipular
            printf("Digite um valor entre 1-999999.99 utilize apenas '.' para separar os centavos e use apenas 2 casas decimais:\n");
            printf("Exemplo: 100.50\n");
            char* valor;
            scanf("%s", valor);
            tornar_extenso(valor);
            break;
        case 3:
            sair();
            break;
        default:
            printf("Opção inválida");
            break;
    }
}

void tornar_extenso(char* num){
    char separadorDecimal[] = ".";
    char *unidades[10]= {"", "um", "dois", "três", "quatro", "cinco", "seis","sete", "oito", "nove"};
    char *dezVinte[10]= {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis","dezessete", "dezoito", "dezenove"};
    char *dezenas[10] = {"","","vinte", "trinta", "quarenta", "cinquenta", "sessenta","setenta", "oitenta", "noventa"};
    char *centenas[10]= {"","cento", "duzentos", "trezentos", "quatrocentos", "quinhentos","seiscentos", "setecentos", "oitocentos", "novecentos"};
    char *potenciasDez[10] = {"", "mil", "milhão", "bilhão", "trilhão", "quatrilhão","quintilhão", "sextilhão", "septilhão", "octilhão"};
    char *multiplosDeDez[10] = {"","", "vinte", "trinta", "quarenta", "cinquenta","sessenta", "setenta", "oitenta", "noventa"};

    char *inteiro = strtok(num, separadorDecimal);
    char *decimal = strtok(NULL, separadorDecimal);

    decimal = decimal == NULL ? "00" : decimal;

    int lenInteiro = strlen(inteiro);
    int lenDecimal = strlen(decimal);

    printf("inteiro: %s\n", inteiro);
    printf("decimal: %s\n", decimal);

    printf("\nlenInteiro: %d\n", lenInteiro);
    printf("lenDecimal: %d\n", lenDecimal);

    int decimalNum = atoi(decimal);

    int por1000 = atoi(inteiro) / 1000;
    int por100 = atoi(inteiro) % 1000;
    int por10 = por100 % 100;
    por100 = por100 / 100;


    printf("milhares: %d\n", por1000);
    printf("centenas: %d\n", por100);
    printf("unidades: %d\n", por10);
    printf("decimal: %d\n\n", decimalNum);

    if (por1000 > 0) {
        if (contar_digitos(por1000) == 1) { // 1 - 9 mil
            printf("%s ", unidades[por1000]);
        }

        if (contar_digitos(por1000) == 2) { // 10 - 99 mil
            if (por1000 >= 10 && por1000 <= 19) {
                printf("%s ", dezVinte[por1000 - 10]);
            }
            else {
                printf("%s ", dezenas[por1000 / 10]);
                printf("%s ", unidades[por1000 % 10]);
            }
        }

        if (contar_digitos(por1000) == 3) { // 100 - 999 mil
            printf("%s ", centenas[por1000 / 100]);
            if (por1000 % 100 >= 10 && por1000 % 100 <= 19) {
                printf("%s ", dezVinte[por1000 % 100 - 10]);
            }
            else {
                printf("%s ", dezenas[(por1000 % 100) / 10]);
                printf("%s ", unidades[por1000 % 10]);
            }
        }
                
        printf("%s ", potenciasDez[1]);
    }

    if (por100 > 0){
        if (contar_digitos(por100) == 1) { // 1 - 9 centenas
            printf("%s ", centenas[por100]);
        }
    }

    if (por10 > 0){
        if (contar_digitos(por10) == 1) { // 1 - 9 dezenas
            printf("%s ", unidades[por10]);
        }

        if (contar_digitos(por10) == 2) { // 10 - 99 dezenas
            if (por10 >= 10 && por10 <= 19) {
                printf("%s ", dezVinte[por10 - 10]);
            }
            else {
                printf("%s ", dezenas[por10 / 10]);
                printf("%s ", unidades[por10 % 10]);
            }
        }
    }

    if (lenInteiro == 1) {
        printf("%s", unidades[atoi(inteiro)]);
    }

    printf("reais ");

    if (decimalNum > 0) {
        printf("e ");
        if ((decimalNum >= 10) && (decimalNum <= 19)) {
            printf(" %s centavos", dezVinte[decimalNum - 10]);
        }
        else {
            if (!(decimalNum % 10)){
                printf("%s ", dezenas[decimalNum / 10]);
                printf("centavos");
            }
            else if (decimalNum < 10) {
                printf(" %s ", unidades[decimalNum % 10]);
                printf("centavos");
            }
            else {
                printf("%s ", dezenas[decimalNum / 10]);
                printf("e ");
                printf("%s ", unidades[decimalNum % 10]);
                printf("centavos");
            }

        }
    }
    

    fim_func();
}

void fim_func() {
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

void voltar() {
    system("clear||@cls");
    return executar_menu();
}

void sair() {
    system("clear||@cls");
    printf("Saindo do programa\n");
    exit(0); // sai do programa
}

int contar_digitos(int x) {
    if(x >= 100000) {
            if(x >= 10000000) {
                if(x >= 1000000000) return 10;
                if(x >= 100000000) return 9;
                return 8;
            }
            if(x >= 1000000) return 7;
            return 6;
        } else {
            if(x >= 1000) {
                if(x >= 10000) return 5;
                return 4;
            } else {
                if(x >= 100) return 3;
                if(x >= 10) return 2;
                return 1;
            }
        }
}