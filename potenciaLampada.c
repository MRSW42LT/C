#include <stdlib.h>
#include <stdio.h>

int main() {
    float comprimento, largura, area, potencia;

    printf("Comprimento: ");
    scanf("%f", &comprimento);

    printf("Largura: ");
    scanf("%f", &largura);

    area = comprimento * largura;
    potencia = area * 18;

    printf("Area do local : %f\n Potencia necessaria : %f", area, potencia);

    return 0;
}
