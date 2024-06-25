#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarPilha(Pilha* pilha) {
    pilha->topo = NULL;
}

int pilhaVazia(Pilha pilha) {
    return pilha.topo == NULL;
}

void empilhar(Pilha* pilha, int dado) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->dado = dado;
    novoNo->proximo = pilha->topo;
    pilha->topo = novoNo;
}

void desempilhar(Pilha* pilha) {
    if (!pilhaVazia(*pilha)) {
        struct No* temp = pilha->topo;
        pilha->topo = pilha->topo->proximo;
        free(temp);
    }
}

void imprimirPilha(Pilha pilha) {
    struct No* atual = pilha.topo;
    while (atual != NULL) {
        printf("%d", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}
