/******************************************************************************
Nome do Propgrama: media_3.C
Descrição do Programa: Programa que Lê 3 inteiros e retorna a média entre eles.
Nome: Vinicius Fontes
Data:21/02/2024



*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    printf("Digite três números inteiros separados por espaço: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calcular a média 
    media = (num1 + num2 + num3) / 3.0;

    printf("A média dos números é: %.2f\n", media);

    return 0;
}
