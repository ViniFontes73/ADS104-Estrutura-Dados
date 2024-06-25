#include "tad_lista.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarLista(Lista* lista) {
    lista->inicio = NULL;
}

int pertenceLista(Lista lista, int valor) {
    struct No* atual = lista.inicio;
    while (atual != NULL) {
        if (atual->dado == valor) {
            return 1; // Valor pertence à lista
        }
        atual = atual->proximo;
    }
    return 0; // Valor não pertence à lista
}

void inserirOrdenado(Lista* lista, int valor) {
    struct No* novoNo = (struct No*)malloc(sizeof(struct No));
    novoNo->dado = valor;
    novoNo->proximo = NULL;

    struct No *atual = lista->inicio, *anterior = NULL;
    while (atual != NULL && atual->dado < valor) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (anterior == NULL) {
        novoNo->proximo = lista->inicio;
        lista->inicio = novoNo;
    } else {
        novoNo->proximo = anterior->proximo;
        anterior->proximo = novoNo;
    }
}

void removerElemento(Lista* lista, int valor) {
    struct No *atual = lista->inicio, *anterior = NULL;

    while (atual != NULL && atual->dado != valor) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        return; // Elemento não encontrado na lista
    }

    if (anterior == NULL) {
        lista->inicio = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
}

void imprimirLista(Lista lista) {
    struct No* atual = lista.inicio;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

void copiarLista(Lista lista1, Lista* lista2) {
    inicializarLista(lista2);
    struct No* atual = lista1.inicio;
    while (atual != NULL) {
        inserirOrdenado(lista2, atual->dado);
        atual = atual->proximo;
    }
}

void concatenarListas(Lista* lista1, Lista* lista2) {
    if (lista1->inicio == NULL) {
        lista1->inicio = lista2->inicio;
    } else {
        struct No* atual = lista1->inicio;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = lista2->inicio;
    }
    lista2->inicio = NULL; // Esvaziar lista2 após concatenar
}

Lista intercalarListas(Lista lista1, Lista lista2) {
    Lista listaIntercalada;
    inicializarLista(&listaIntercalada);

    struct No* atual1 = lista1.inicio;
    struct No* atual2 = lista2.inicio;

    while (atual1 != NULL && atual2 != NULL) {
        if (atual1->dado < atual2->dado) {
            inserirOrdenado(&listaIntercalada, atual1->dado);
            atual1 = atual1->proximo;
        } else {
            inserirOrdenado(&listaIntercalada, atual2->dado);
            atual2 = atual2->proximo;
        }
    }

    while (atual1 != NULL) {
        inserirOrdenado(&listaIntercalada, atual1->dado);
        atual1 = atual1->proximo;
    }

    while (atual2 != NULL) {
        inserirOrdenado(&listaIntercalada, atual2->dado);
        atual2 = atual2->proximo;
    }

    return listaIntercalada;
}
