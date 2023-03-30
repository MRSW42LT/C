#include <stdlib.h>

int main() {
    float nota1, nota2, media;
    float peso1, peso2;

    printf("Insira a nota 1 e 2: \n");
    scanf("%f %f", &nota1, &nota2);

    peso1 = 0.7;
    peso2 = 0.2;

    media = ((nota1*peso1) + (nota2 * peso2)) / (peso1+peso2);

    printf("Media do aluno :\n %f \n", media);
    
    return 0;
}