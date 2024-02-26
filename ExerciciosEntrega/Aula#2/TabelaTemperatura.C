/* 
Nome do Propgrama: TabelaTemperatura.C
Descrição: Exibe uma tabela com valores de 1 em 1 começando do 50 Fahrenheit até 65 Fahrenheit e mostrando sua equivalência em Celsius.
Autor(es): Vinicius Fontes
Data:26/02/2024 
*/
#include <stdio.h>

int main() {
    int Tf; //Fahrenheit
    float Tc; //Celsius

    printf("Tabela de temperatura\n");
    printf("Fahrenheit\tGraus Celsius\n"); // "\t" é um tab na horizontal
    for (Tf = 50; Tf <= 65; Tf++) {
        Tc = (Tf - 32) * 5.0 / 9.0;
        printf("%d\t\t%.2f\n", Tf, Tc);  // duas tabs para ficar visualmente mais bonito
    }

    return 0;
}
