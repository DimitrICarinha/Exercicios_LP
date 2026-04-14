#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Digite o valor em fahrenheit que deseja passar para celsius: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * (fahrenheit - 32) / 9;

    printf("O valor em celsius vale: %.2f\n", celsius);
    
}