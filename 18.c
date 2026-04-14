#include <stdio.h>

int main()
{
    int pl, l, c, nl, area, potencia_necessaria;
    
    printf("Digite a potencia da lampada: ");
    scanf("%d", &pl);
    printf("Digite a largura do comodo: ");
    scanf("%d", &l);
    printf("Digite o comprimeto do comodo: ");
    scanf("%d", &c);
    
    area = l * c;
    potencia_necessaria = area * 18;

    nl = potencia_necessaria / pl;

    printf("Numero de lampadas necessarias é de: %d", nl);

    return 0;
    
}