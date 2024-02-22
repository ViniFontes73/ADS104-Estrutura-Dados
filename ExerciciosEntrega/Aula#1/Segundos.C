/******************************************************************************
Nome do Propgrama: Segundos.C
Descrição do Programa: Programa que Lê um valor em segundos e retorna o valor em horas. minutos e segundos.
Nome: Vinicius Fontes
Data:21/02/2024



*******************************************************************************/
#include <stdio.h>

int main() {
    int segundos, minutos_total;
    float horas;

    // Solicitação dos segundos ao usuário
    printf("Digite o número de segundos que gostaria de converter: ");
    scanf("%d", &segundos);

    // Calcula as horas
    horas = segundos / 3600.0;
    // Calcula o total de minutos
    minutos_total = segundos / 60;

    // Exibe o resultado em formato numérico
    printf("Tempo equivalente em:\n");
    printf("Hora(s): %.2f\n", horas);
    printf("Minuto(s): %d\n", minutos_total % 60); // Extrai os minutos restantes
    printf("Segundo(s): %d\n", segundos); // Exibe os segundos exatamente como inseridos

    return 0;
}
