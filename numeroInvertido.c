#include <stdlib.h>

int main(){
    int num, numinvertudo;

    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &num);
    
    printf("%d", num % 10 );
    printf("%d", (num / 10) % 10 );
    printf("%d", (num / 10) / 10  );

    return 0;
}