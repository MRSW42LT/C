#include <stdlib.h>

int main(){
    int varA, varB;

    printf("Insira var A: ");
    scanf("%i", &varA);

    printf("Insira var B: ");
    scanf("%i", &varB);

    varA =  varA + varB;
    varB = varA - varB;
    varA = varA - varB;

    printf("VarA: %i \nVarB: %i", varA, varB);

    return 0;
}