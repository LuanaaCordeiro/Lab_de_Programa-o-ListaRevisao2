#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int meu_strlen(const char *str){
    
    int i = 0;
    while (*str != '\0')
    {
        str++;
        i++;
    }
    
    return i;
}

int main(){

    char nome[50];

    printf("Digite uma palavra: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("A quantidade de caracteres eh: %d", meu_strlen(nome));
    return 0;
}