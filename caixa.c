#include <stdlib.h>

int main() {
    int comprimento, largura, altura, volume;

    printf("Comprimento da caixa: ");
    scanf("%i", &comprimento);
    printf("Altura da caixa: ");
    scanf("%i", &altura);
    printf("largura da caixa: ");
    scanf("%i", &largura);

    volume = comprimento * altura * largura;

    printf("Volume da caixa : %i", volume);

    return 0;
}