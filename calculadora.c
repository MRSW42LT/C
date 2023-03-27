/*
escreva (“Digite um número”);
 leia (NUM1);
  escreva (“Digite um número”);
   leia (NUM2); SOMA  NUM1 + NUM2;
    PRODUTO  NUM1 * NUM2; DIVISAO  NUM1 / NUM2;
     SUBTRACAO  NUM1 – NUM2;
      escreva (“A soma foi”, SOMA, “o produto foi”, PRODUTO,
       “a divisão foi”, DIVISAO, “e a subtração foi”, SUBTRACAO); 

*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    float num1, num2, soma, produto, subtracao, divisao;

    printf("Num1: ");
    scanf("%f", &num1);

    printf("Num2: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    produto = num1 + num2;
    subtracao = num1 - num2;
    divisao = num1 / num2;

    printf("Soma : %f\nProduto : %f\n Subtracao : %f\n Divisao : %f\n", soma, produto, subtracao, divisao);

    system("pause");
    return 0;
}
