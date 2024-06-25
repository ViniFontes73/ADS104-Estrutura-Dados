#include <stdio.h>
#include <stdlib.h>

// Declaração das funções
typedef struct No No;
No* criarNo(int chave);
void adicionarNo(No** cabeca, int chave);
void removerPares(No** cabeca);
void imprimirLista(No* cabeca);

int main() {
    No* lista = NULL;
    int chave;

    // Adicionar elementos à lista até o usuário decidir parar
    printf("Digite os numeros para adicionar na lista (digite -1 para parar):\n");
    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &chave);
        if (chave == -1) {
            break;
        }
        adicionarNo(&lista, chave);
    }

    printf("Lista original: ");
    imprimirLista(lista);

    // Remover elementos com chaves pares
    removerPares(&lista);

    printf("Lista após remover elementos pares: ");
    imprimirLista(lista);

    return 0;
}

// Definição da estrutura do nó
struct No {
    int chave;
    struct No* proximo;
};

// Implementação das funções
No* criarNo(int chave) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->chave = chave;
    novoNo->proximo = NULL;
    return novoNo;
}

void adicionarNo(No** cabeca, int chave) {
    No* novoNo = criarNo(chave);
    if (*cabeca == NULL) {
        *cabeca = novoNo;
    } else {
        No* temp = *cabeca;
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novoNo;
    }
}

void removerPares(No** cabeca) {
    No* atual = *cabeca;
    No* anterior = NULL;

    while (atual != NULL) {
        if (atual->chave % 2 == 0) {
            if (anterior == NULL) { // Remover cabeça
                *cabeca = atual->proximo;
            } else { // Remover nó do meio ou fim
                anterior->proximo = atual->proximo;
            }
            No* temp = atual;
            atual = atual->proximo;
            free(temp);
        } else {
            anterior = atual;
            atual = atual->proximo;
        }
    }
}

void imprimirLista(No* cabeca) {
    No* temp = cabeca;
    while (temp != NULL) {
        printf("%d -> ", temp->chave);
        temp = temp->proximo;
    }
    printf("NULL\n");
}
