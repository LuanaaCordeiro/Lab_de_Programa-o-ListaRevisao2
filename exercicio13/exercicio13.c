#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;
    int *vetor = NULL;
    int soma = 0;
    float media =0;

        printf("Digite o tamanho da amostra: "); 
        scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL)
    {
        printf("Falha na alocação");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    media = (float)soma / n;

    printf("Soma total: %d\n", soma);
    printf("Media aritmetica: %.2f\n", media);

    free(vetor);
    vetor = NULL;

    return 0;
}