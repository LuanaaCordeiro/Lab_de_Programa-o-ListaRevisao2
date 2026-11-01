#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void decompor_tempo(int total_segundos, int *horas, int *minutos, int *segundos){
    *horas = total_segundos / 3600;

    *minutos = (total_segundos % 3600) / 60;

    *segundos = total_segundos % 60;
}

int main(){

    int total;
    int h = 0;
    int s = 0;
    int m = 0;

    printf("Digite a quantidade total de segundos: ");
    scanf("%d", &total);
    
    decompor_tempo(total, &h, &m, &s);

    printf("O tempo decomposto eh %d | %d | %d", h, m, s);

    return 0;
}