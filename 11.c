#include <stdio.h>

int main()
{
    int total, brancos, nulos, validos;
    float pb, pn, pv;

    printf("Digite o numero total de eleitores do municipio: ");
    scanf("%d", &total);
     printf("Digite o numero total de votos brancos: ");
    scanf("%d", &brancos);
     printf("Digite o numero total de votos nulos: ");
    scanf("%d", &nulos);
     printf("Digite o numero total de votos validos: ");
    scanf("%d", &validos);

    pb = 100 * brancos/ total;
    pn = 100 * nulos/ total;
    pv = 100 * validos/ total;

    printf("a porcentagem de votos brancos foi de: %.2f%%\n", pb);
    printf("a porcentagem de votos nulos foi de: %.2f%%\n", pn);
    printf("a porcentagem de votos validos foi de: %.2f%%\n", pv);

    return 0;

}