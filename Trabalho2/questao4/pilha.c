#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarPilha(Pilha* pilha) {
    pilha->topo = NULL;
}

int pilhaVazia(Pilha pilha) {
    return pilha.topo == NULL;
}

void empilhar(Pilha* pilha, int chave) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->chave = chave;
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
    printf("Pilha: ");
    struct No* atual = pilha.topo;
    while (atual != NULL) {
        printf("%d ", atual->chave);
        atual = atual->proximo;
    }
    printf("\n");
}

void removerItem(Pilha* pilha, int chaveRemover) {
    Pilha pilhaAuxiliar;
    inicializarPilha(&pilhaAuxiliar);

    while (!pilhaVazia(*pilha)) {
        if (pilha->topo->chave == chaveRemover) {
            desempilhar(pilha);
        } else {
            empilhar(&pilhaAuxiliar, pilha->topo->chave);
            desempilhar(pilha);
        }
    }

    while (!pilhaVazia(pilhaAuxiliar)) {
        empilhar(pilha, pilhaAuxiliar.topo->chave);
        desempilhar(&pilhaAuxiliar);
    }
}
