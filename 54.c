#include <stdio.h>

int main()
{
    int n_lado, lado, perimetro_triangulo, area_quadrado;

    printf("Digite o numero de lados do poligono regular que deseja (3, 4 ou 5): ");
    scanf("%d", &n_lado);
    printf("Digite a medida do lado em cm: ");
    scanf("%d", &lado);
    
    perimetro_triangulo = lado * 3;
    area_quadrado =  lado * lado;

    if (n_lado == 3)
    {
        printf("TRIANGULO e o valor do perimetro é de: %d", perimetro_triangulo);
    }
    else if (n_lado == 4)
    {
        printf("QUADRADO e o valor da sua area é de: %d", area_quadrado);
    }
    else if (n_lado == 5)
    {
        printf("Pentagono");
    }
}