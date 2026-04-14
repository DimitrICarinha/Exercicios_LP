#include <stdio.h>

int main()
{
    int salario_mensal;
    float porcentagem_reajuste, novo_salario;

    printf("Qual o seu salario mensal atual: ");
    scanf("%d", &salario_mensal);
    printf("Qual vai ser o percentual de reajuste: ");
    scanf("%f", &porcentagem_reajuste);

    novo_salario = salario_mensal* porcentagem_reajuste/ 100 + salario_mensal;

    printf("Novo salario: %2.f\n", novo_salario);

    return 0;
    
}