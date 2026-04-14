#include <stdio.h>

int main()
{
    int n1, n2;
    float resposta, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Escolha uma das operacoes 1 = Adicao, 2 = Subtracao, 3 = Divisao, 4 = Multiplicacao: ");
    scanf("%f", &resposta);

    if (resposta == 1)
    {
        resultado = n1 + n2;
        printf("O resultado da operacao foi: %1.f", resultado);
    }
    else if (resposta == 2)
    {
        resultado = n1 - n2;
        printf("O resultado da operacao foi: %1.f", resultado);
    }
    else if (resposta == 3)
    {
        resultado = n1 * n2;
        printf("O resultado da operacao foi: %1.f", resultado);
    }
    else if (resposta == 4)
    {
        resultado = n1 / n2;
        printf("O resultado da operacao foi: %1.f", resultado);
    }

}