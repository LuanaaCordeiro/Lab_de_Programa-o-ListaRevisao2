#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maior_elemento(float *vetor_inicio, int tam)
{

    float *ptr_maior = vetor_inicio;

    for (int i = 0; i < tam; i++)
    {

        float *ptr_atual = vetor_inicio + i;

        if (*ptr_atual > *ptr_maior)
        {
            ptr_maior = ptr_atual;
        }
    }

    return ptr_maior - vetor_inicio;
}

int main()
{

    float vetor[3];
    int tam = 3;

    for (int i = 0; i < tam; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
    }

    printf("O maior indice eh: %d \n", maior_elemento(vetor,tam));
    printf("O valor do meior elemento eh: %f", vetor[maior_elemento(vetor,tam)]);

    return 0;
}