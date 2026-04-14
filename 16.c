#include <stdio.h>

int main()
{
    float n1, n2, n3, media_final;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a sua terceiro nota: ");
    scanf("%f", &n3);
    
    media_final = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("A sua media final %2.f\n", media_final);

}