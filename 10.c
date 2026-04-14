#include <stdio.h>

int main()
{
    float hora, numero_hora, salario;

    printf("Digite o valor que você ganha por hora trabalhada: ");
    scanf("%f", &hora);
    printf("Digite o valor de horas trabalhadas: ");
    scanf("%f", &numero_hora);

    salario = hora * numero_hora;

    printf("O seu salario sera: %.2f", salario);

    return 0;

}