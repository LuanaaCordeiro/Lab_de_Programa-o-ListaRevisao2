#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void remover_quebra_linha (char *str){
    
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '\n'){
            str[i] = '\0';
            break;
        }

        i++;
    }
    
}

int main(){

    char nome[50];

    printf("Digite uma palavra: ");
    fgets(nome, sizeof(nome), stdin);
    remover_quebra_linha(nome);

    printf("A palavra eh: %s\n", nome);
    printf("A quantidade de caracteres eh: %d", strlen(nome));

    return 0;
}