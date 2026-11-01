#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    void atualizar(int *a, int b, int *c)
    {
        *a = *a + b;
        b = b * 2;
        *c = *a + b;
    }
    int main()
    {
        int x = 5, y = 3, z = 2;
        atualizar(&x, y, &z);
        printf("x = %d, y = %d, z = %d\n", x, y, z);
        return 0;
    }

//x = 8, y = 3, z = 14
