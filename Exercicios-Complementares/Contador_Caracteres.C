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
//escopo
int contador_caracteres(char frase[600]);
int main()
{
    char frase[600];

    // 
    printf("Digite a frase que deseja contar a quantidade de caracteres: ");
    scanf(" %[^\n]", frase);
    // chamar a função para a frase 
    contador_caracteres(frase);

    return 0;
}


//função para contar caracteres
int contador_caracteres (char frase[600]){
    int caracteres = strlen(frase); // conta acento e espaço
    printf("\nA quantidade de caracteres é de: %d", caracteres); 
}