#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int opcao;
    int capacidade = 4;
    int tamanho = 0;

    int *vetor = (int *)malloc(capacidade * sizeof(int));

    if (vetor == NULL)
    {
        printf("Falha na alocacao!");
    }

    printf("Digite um numero (-1 para parar): ");
    scanf("%d", &opcao);
    while (opcao != -1)
    {
        

        if (tamanho == capacidade)
        {
            capacidade = capacidade * 2;

            int *temp = (int *)realloc(vetor, capacidade * sizeof(int));

            if (temp == NULL)
            {
                printf("Erro na alocacao!");
            }

            vetor = temp;
            printf("Vetor expandido para capacidade %d\n", capacidade);
        }

        vetor[tamanho] = opcao;
        tamanho++;

        printf("Digite um numero (-1 para parar): ");
        scanf("%d", &opcao);
    }

    printf("Elementos armazenados: %d\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    vetor = NULL;


    return 0;
}