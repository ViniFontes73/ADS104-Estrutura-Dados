#include "pilha.h"
#include <stdio.h>

int main() {
    Pilha pilha;
    inicializarPilha(&pilha);

    int chave;
    char continuar;

    do {
        printf("Digite um numero para empilhar na pilha: ");
        scanf("%d", &chave);
        empilhar(&pilha, chave);

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    imprimirPilha(pilha);

    int chaveRemover;
    printf("Digite a chave do item a ser removido: ");
    scanf("%d", &chaveRemover);
    removerItem(&pilha, chaveRemover);

    imprimirPilha(pilha);

    return 0;
}
