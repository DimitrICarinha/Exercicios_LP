#include <stdio.h>

int main()
{
    int numero_carro;
    float salario_fixo, valor_carro, valor_vendas, salario_final;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numero_carro);
    printf("Digite o valor total de suas vendas: ");
    scanf("%f", &valor_vendas);
    printf("Digite o seu salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Digite o quanto recebe por carro vendido: ");
    scanf("%f", &valor_carro);

    salario_final = salario_fixo + valor_carro * numero_carro + valor_vendas * 0.05; 

    printf("O salario final do vendedor sera de: %.2f\n", salario_final);

    return 0;
    
}