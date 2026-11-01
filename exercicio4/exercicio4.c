#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int somar_elementos_ponteiro(int *inicio, int tam)
{

    int *aux = inicio;
    int i = 0;
    int soma = 0;

    while (i < tam)
    {
        soma = soma + *(aux + i);
        i++;
    }

    return soma;
}

int main()
{

    int vetor[3];
    int tam = 3;

    for (int i = 0; i < tam; i++)
    {
        printf("Digite os numeros do vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("A soma dos numeros eh: %d ", somar_elementos_ponteiro(vetor, tam));

    return 0;
}