#include <stdio.h>

int main (){

    int metros, centimetros;

    printf("Informe o tamanho em metros: ");
    scanf("%d", &metros);

    centimetros = metros * 100;

    printf("O valor de %d metros em centímetros é: %d", metros, centimetros);

}