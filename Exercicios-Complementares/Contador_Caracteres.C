/******************************************************************************
Nome do Propgrama: Depreciacao.C
Descrição do Programa: Programa que calcula o IMC e imprime sua classificação, te da uma opçção de imprimir os valores individuais e 
utiliza de funcão void para imprimir a classificação .
Nome: Vinicius Fontes
Data:9/04/2024
*******************************************************************************/
#include <stdio.h>
#include <string.h>
// contar caracteres
int main()
{
    char frase[600];

    printf("Digite a frase que deseja contar a quantidade de caracteres: ");
    scanf(" %[^\n]", frase);
    // converter a frase para int
    int caracteres = strlen(frase); // conta acento e espaço
    printf("\nA quantidade de caracteres é de: %d", caracteres); 

    return 0;
}
