/******************************************************************************
Nome do Propgrama: Depreciacao.C
Descrição do Programa: Programa que calcula a depreciação de um item com base em seus valores .
Nome: Vinicius Fontes
Data:5/04/2024
*******************************************************************************/
#include <stdio.h>


int main()
{
    float resultado = 0.0;
    float vinicial;
    float vfinal;
    
    //o calculo será valor inicial-valor atual dividido por valor inicial ( multiplicado por 100%) 
    
    printf("Informe o valor inicial do produto: ");
    scanf ("%f", &vinicial);

    printf("Informe o valor atual do produto: ");
    scanf ("%f", &vfinal);
    
    resultado = (( vinicial - vfinal)/(vinicial))*100;

    printf("\nO valor caiu cerca de %.2f%% ", resultado);

    return 0;
}
