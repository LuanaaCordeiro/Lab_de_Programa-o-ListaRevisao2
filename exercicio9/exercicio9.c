#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int meu_strcmp(const char *s1, const char *s2)
{

    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] == s2[i])
        {
            i++;
            continue;
        }

        if (s1[i] > s2[i])
        {
            return 1;
        }

        if (s1[i] < s2[i])
        {
            return -1;
        }
    }

    return 0;
}

int main()
{
    char palavra1[50];
    char palavra2[50];

    printf("Digite uma palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);

    printf("Digite outa palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);

    if (meu_strcmp(palavra1, palavra2) == 0)
    {
        printf("As palavras sao iguais");
    }
    else if (meu_strcmp(palavra1, palavra2) == 1)
    {
        printf("s1 eh maior que s2");
    }
    else
    {
        printf("s2 eh maior que s1;");
    }

    return 0;
}