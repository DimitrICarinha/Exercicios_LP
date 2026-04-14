#include <stdio.h>

int main()
{
    float custo_fabrica, custo_final; 

    printf("Escreva o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    custo_final = custo_fabrica + custo_fabrica/100 * 28 + custo_fabrica/100 * 45;

    printf("O custo vai ser: %.2f", custo_final);

    return 0;

}