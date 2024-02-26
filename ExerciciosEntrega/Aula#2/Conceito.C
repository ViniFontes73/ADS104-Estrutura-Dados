/* 
Nome do Propgrama: Conceito.C
Descrição: um algoritmo que calcule a nota final de um estudante. Composto por trabalho de lab com peso 2, avaliação semestral com peso 3 e exame final com peso 5.
Autor(es): Vinicius Fontes
Data:26/02/2024 
*/

#include <stdio.h>

    // Função para calcular a nota final e o conceito
    void calcularNotaFinal(float trabalho_lab, float avaliacao_semestral, float exame_final) {
    // Calculando a média ponderada
    float media_ponderada = (trabalho_lab * 2 + avaliacao_semestral * 3 + exame_final * 5) / 10;

    // Determinando o conceito
    char conceito;
    if (media_ponderada >= 8) {
        conceito = 'A';
    } else if (media_ponderada >= 7) {
        conceito = 'B';
    } else if (media_ponderada >= 6) {
        conceito = 'C';
    } else if (media_ponderada >= 5) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // Exibindo os resultados
    printf("Média ponderada: %.2f\n", media_ponderada);
    printf("Conceito: %c\n", conceito);
}

int main() {
    float trabalho_lab, avaliacao_semestral, exame_final;

    // Solicitando as notas ao usuário
    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &trabalho_lab);
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &avaliacao_semestral);
    printf("Digite a nota do exame final: ");
    scanf("%f", &exame_final);

    // Chamando a função para calcular a nota final e o conceito
    calcularNotaFinal(trabalho_lab, avaliacao_semestral, exame_final);

    return 0;
}
