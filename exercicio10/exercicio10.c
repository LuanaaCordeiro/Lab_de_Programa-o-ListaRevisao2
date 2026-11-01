#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nome[50];
    float salario;
} Funcionario;

void reajustar_salario(Funcionario *f, float percentual){
    float aumento =  (f->salario * percentual) / 100;
    f->salario = f->salario + aumento;

}

int main()
{
    float percentual;
    Funcionario novo;
    novo.id = 1;
    strcpy(novo.nome, "Luana");
    novo.salario = 10000;

    printf("Digite a porcentagem que deseja aumentar o salario: ");
    scanf("%f", &percentual);

    reajustar_salario(&novo, percentual);
    printf("O novo salario eh: %.2f", novo.salario);

    return 0;
}