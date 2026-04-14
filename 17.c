#include <stdio.h> 

int main()
{
   float raio, pi, area;
   
    printf("Digite o raio do ciculo: ");
    scanf ("%f", &raio);
    printf("Digite o valor que deseja de pi: ");
    scanf ("%f", &pi);

    area = pi * raio * raio;

    printf("O valor da area do circulo sera de: %2.f\n", area);

}