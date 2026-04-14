#include <stdio.h>

int main()
{
    float altura, comprimento, largura, qc;

    printf("Digite a altura do comodo: ");
    scanf("%f", &altura);
    printf("Digite a comprimento do comodo: ");
    scanf("%f", &comprimento);
    printf("Digite a largura do comodo: ");
    scanf("%f", &largura);

    qc = (altura * largura * 2 + altura * comprimento * 2) / 1.5;
    
    printf("A quantidade de caixas de azulejo sera de: %.2f", qc);

    return 0;

}