#include "pilha.h"
#include <stdio.h>

void decimalParaBinario(int numero) {
    Pilha pilha;
    inicializarPilha(&pilha);

    while (numero > 0) {
        int resto = numero % 2;
        empilhar(&pilha, resto);
        numero /= 2;
    }

    imprimirPilha(pilha);
}

int main() {
    int numero;

    do {
        printf("Digite um numero inteiro positivo (digite um numero negativo para parar): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            printf("Numero em binario: ");
            decimalParaBinario(numero);
        }
    } while (numero >= 0);

    return 0;
}
