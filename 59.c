#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Digite o primeiro angulo: ");
    scanf("%d", &n1);
    printf("Digite o segundo angulo: ");
    scanf("%d", &n2);
    printf("Digite o terceiro angulo: ");
    scanf("%d", &n3);

    if (n1 == 90 || n2 == 90 || n3 == 90)
        printf("Triangulo reto");
    else if (n1 > 90 || n2 > 90 || n3 > 90)
        printf("Triangulo obtusangulo");
    else if (n1 < 90 || n2 < 90 || n3 < 90)
        printf("Triangulo acutangulo");
    else if (n1 + n2 + n3 != 180)
    printf("Nao forma um triangulo\n");
}