#include <stdio.h>

int main()
{
    float n1, n2;
    
    printf("Digite um numero qualquer: ");
    scanf("%f", &n1);

    printf("Digite mais um numero qualquer: ");
    scanf("%f", &n2);

    if (n1 == n2)
        printf("Os numeros sao iguais.\n");
    else if (n1 > n2)
        printf("O primeiro numero e maior.\n");
    else
        printf("O segundo numero e maior.\n");
    
    return 0;
}