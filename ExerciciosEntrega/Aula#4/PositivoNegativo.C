/* 
Nome do Propgrama: PositivoNegativo.C
Descrição: Pede um número ao usuario, precisa ser inteiro e retorna se é positivo ou negativo.
Autor(es): Vinicius Fontes
Matrícula: 25388
Data:05/03/2024 
*/
#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é positivo ou negativo
bool verificar_positivo_negativo(int numero) {
    if (numero >= 0) {
        return true; // Retorna true se o número for positivo
    } else {
        return false; // Retorna false se o número for negativo
    }
}

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    if (verificar_positivo_negativo(numero)) {
        printf("O número %d é positivo.\n", numero);
    } else {
    printf("O número %d é negativo.\n", numero);
}
    return 0;
}
