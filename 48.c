#include <stdio.h>

int main() 
{
    float n1, n2, n_opcional, media;
    int resposta;

    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &n1);

    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &n2);

    printf("Fez a prova optativa? (1 para sim/2 para nao): ");
    scanf("%d", &resposta);

    if (resposta == 1)
    {  
        printf("Digite a nota da prova optativa: ");
        scanf("%f", &n_opcional);

        // substitui a menor nota
        if (n_opcional > n1 && n1 < n2)
            n1 = n_opcional;
        else if (n_opcional > n2)
            n2 = n_opcional;

           media = (n1 + n2) / 2;

        if (media >= 6)
            printf("Voce foi aprovado e a sua nota foi %2.f", media);
        else if (media < 3)
            printf("Voce foi reprovado e a sua nota foi de %2.f", media);
        else
            printf("Voce ficou de exame a sua nota foi de %2.f", media);
    }
    
    else if (resposta == 2)
    {
        media = (n1 + n2 - 1) / 2;

        if (media >= 6)
            printf("Voce foi aprovado e a sua nota foi %2.f", media);
        else if (media < 3)
            printf("Voce foi reprovado e a sua nota foi de %2.f", media);
        else
            printf("Voce ficou de exame a sua nota foi de %2.f", media);
    }
}