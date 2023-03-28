#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y,resultado;
    printf ("Digite um numero: ");
    scanf("%i", &x);
    
    printf ("Digite outro numero: ");
    scanf("%i", &y);

    resultado = pow(x,y);

    printf("potencia %i\n", resultado);
    system("pause");
    return 0;
}
