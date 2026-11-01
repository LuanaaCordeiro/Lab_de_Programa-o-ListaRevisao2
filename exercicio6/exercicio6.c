#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int v[5] = {10, 20, 30, 40, 50};
    int *p = v;

    // Laco A:
    for (int i = 0; i < 5; i++)
        printf("%d ", v[i]);

    // Laco B:
    for (int i = 0; i < 5; i++)
        printf("%d ", *(p + i));

    return 0;
}

/*No terminal ambos os laços produzem a mesma saída. No primeiro laço a RAM converte
o v[i] para *(v+i), porem, o v não é uma variável independente, ou seja, o compilador
sabe exatamente onde o bloco começa na pilha.

O laço B usa a aritmética de ponteiros, onde, p é uma variável alocada separadamente
qhue guarda o endereço de v. Durante a execução, a CPU vai ate onde esta o p, le o
endereço que ele guarda, soma com o deslocamento i e acessa o valor.
*/