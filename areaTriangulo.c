#include <stdlib.h>

int main() {
    int area, altura, base;

    printf("Base: ");
    scanf("%i", &base);
    printf("Altura: ");
    scanf("%i", &altura);

    area = base * altura;
    printf("Area do triangulo : %i", area);


    return 0;
}