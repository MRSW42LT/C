#include <stdio.h>
#include <stdlib.h>

int main() {
    float NUM1, NUM2, MEDIA;
    printf ("Digite um numero: ");
    scanf("%f", &NUM1);
    
    printf ("Digite outro numero: ");
    scanf("%f", &NUM2);

    MEDIA = (NUM1 + NUM2) / 2 ;

    printf("A media foi %f\n", MEDIA);
    system("pause");

    return 0;
}
