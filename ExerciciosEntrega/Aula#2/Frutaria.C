/* Nome do Propgrama: Frutaria.C
Descrição do Programa: Programa que pede o peso das frutas que o user estará comprando e aplicada descontos caso entre nos requisitos..
Nome: Vinicius Fontes
Data:25/02/2024 */
#include <stdio.h>

int main() {
    float peso_morango, peso_maca, valor_morango, valor_maca, valor_total;

    // Pedir o peso dos morangos
    printf("Digite o peso em kg dos morangos comprados: ");
    scanf("%f", &peso_morango);

    // Pedir o peso das maçãs
    printf("Digite o peso em kg das maçãs compradas: ");
    scanf("%f", &peso_maca);

    // Calcular o valor dos morangos
    if (peso_morango <= 5) {
        valor_morango = peso_morango * 7.5;
    } else {
        valor_morango = peso_morango * 5.3;
    }

    // Calcular o valor das maçãs
    if (peso_maca <= 5) {
        valor_maca = peso_maca * 3.5;
    } else {
        valor_maca = peso_maca * 2.8;
    }

    // Calcular o valor total
    valor_total = valor_morango + valor_maca;

    // Verificar se a soma do peso é inferior a 5kg e o valor total é superior a 19
    if ((peso_morango + peso_maca) < 5 && valor_total > 19) {
        // Aplicar desconto de 8%
        valor_total *= 0.92; // 92% do valor total original
        printf("O desconto de 8%% foi aplicado. O valor total a ser pago é: R$ %.2f\n", valor_total);
    } else {
        // Exibir o valor total a ser pago
        printf("O valor total a ser pago é: R$ %.2f\n", valor_total);
    }

    return 0;
}

