#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int matricula;
    char nome[50];
    float nota;
}Aluno;

int buscar_melhor_aluno(Aluno turma[], int n){
    int maior_nota = 0;
    int aluno =0;
    for(int i = 0; i < n; i++){

        if(turma[i].nota > maior_nota){
            maior_nota = turma[i].nota;
            aluno = i;
        }
    }

    return aluno;
}

int main(){
    int n = 3;
    Aluno novo[3] = {
        {1,"Caio",10},
        {2,"Dani", 9},
        {3,"Matheus", 8}
    };

    int melhor = buscar_melhor_aluno(novo,n);

    printf("O melhor aluno eh o %s com a nota %f", novo[melhor].nome, novo[melhor].nota);
    return 0;
}