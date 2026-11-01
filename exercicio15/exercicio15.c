#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alocar_matriz(int linhas, int colunas)
{

    int **matriz = (int **)malloc(linhas * sizeof(int));

    if (matriz == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)calloc(colunas, sizeof(int));

        if (matriz[i] == NULL)
        {
            for (int j = 0; j < i; j++)
            {
                free(matriz[j]);
            }
            free(matriz);
            return NULL;
        }
    }

    return matriz;
}

void liberar_matriz(int **matriz, int linhas)
{
    if (matriz == NULL)
    {
        return;
    }
    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}
int main()
{
    int linhas = 3;
    int colunas = 4;

    int **m = alocar_matriz(linhas, colunas);

    if (m == NULL)
    {
        printf("Erro ao alocar a matriz!\n");
        return 1;
    }

    printf("Matriz alocada e inicializada com zeros:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    liberar_matriz(m, linhas);
    m = NULL;

    return 0;
}