#include <stdio.h>

int main()
{
    float moi, mof, nl, vt, mc, lucro;

    printf("Digite a marcaçao do odometro no inicio do dia: ");
    scanf("%f", &moi);
    printf("Digite a marcaçao do odometro no final do dia: ");
    scanf("%f", &mof);
    printf("Digite o numero de litros gatos: ");
    scanf("%f", &nl);
    printf("Digite o valor total recebido dos passageiros: ");
    scanf("%f", &vt);

    mc =(mof - moi) / nl;
    lucro = vt/mc * 2.90;

    printf("A média de consumo em Km/L foi de %.2f\n", mc );
    printf("O lucro liquido foi de %.2f\n", lucro);

    return 0;

}
