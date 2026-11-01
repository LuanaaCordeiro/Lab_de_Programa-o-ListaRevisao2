#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    float x;
    float y;
} Ponto2d ;


int main(){

    Ponto2d p1;
    Ponto2d p2;

    p2 = p1;

    p2.x = 99.0f;

    
    return 0;
}

/*A variavel p1.x não será modificada, pois quando fazemos p2=p1,
estamos fazendo um copia do bloco de memoria p1 para o p2, onde eles são independentes
entre si. Logo, fazendo a mudança p2.x = 99.0f, estou modificando somente no bloco p2*/