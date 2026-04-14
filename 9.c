#include <stdio.h>

int main()

{
    float lado, dobro_area;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    dobro_area = lado * lado * 2;

    printf("O dobro da area do quadrado vale: %.2f", dobro_area);

    return 0;
    
}