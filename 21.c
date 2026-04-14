#include <stdio.h>

int main()
{
    float cp, nt, nr, cc, numero_minimo, voltas_trecho, distancia_primeiro;

    printf("Digite o comprimento da pista: ");
    scanf("%f", &cp);
    printf("Digite o numero total de voltas: ");
    scanf("%f", &nt);
    printf("Digite o numero de reabastecimentos: ");
    scanf("%f", &nr);
    printf("Digite o consumo de combustivel do carro: ");
    scanf("%f", &cc);

    cp = cp / 1000.0;

    voltas_trecho = nt / (nr + 1.0);

    distancia_primeiro = voltas_trecho * cp;

    numero_minimo = distancia_primeiro / cc;


    printf("O numero minimo de voltas vai ser %.2f", numero_minimo);

    return 0;

}