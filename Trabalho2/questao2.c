#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura de um nó da lista encadeada
struct Lista {
    int dado;
    struct Lista* proximo;
};

// Função para criar um novo nó
struct Lista* novoNo(int dado) {
    struct Lista* no = (struct Lista*)malloc(sizeof(struct Lista));
    no->dado = dado;
    no->proximo = NULL;
    return no;
}

// Função para adicionar um elemento à lista
void adicionarNo(struct Lista** cabeca, int dado) {
    struct Lista* novo = (struct Lista*)malloc(sizeof(struct Lista));
    novo->dado = dado;
    novo->proximo = *cabeca;
    *cabeca = novo;
}

// Função para remover elementos repetidos da lista
void removerRepetidos(struct Lista* cabeca) {
    struct Lista* atual = cabeca;
    struct Lista* proximoNo;

    if (atual == NULL) return;

    while (atual->proximo != NULL) {
        if (atual->dado == atual->proximo->dado) {
            proximoNo = atual->proximo->proximo;
            free(atual->proximo);
            atual->proximo = proximoNo;
        } else {
            atual = atual->proximo;
        }
    }
}

// Função para imprimir a lista
void imprimirLista(struct Lista* no) {
    while (no != NULL) {
        printf("%d ", no->dado);
        no = no->proximo;
    }
    printf("\n");
}

// Função principal
int main() {
    struct Lista* lista = NULL;
    char entrada[10];

    // Adicionar elementos à lista até o usuário digitar "pare"
    printf("Digite os numeros para adicionar na lista (digite 'pare' para parar):\n");
    while (1) {
        printf("Digite um numero: ");
        scanf("%s", entrada);
        if (strcmp(entrada, "pare") == 0) {
            break;
        }
        int numero = atoi(entrada);
        adicionarNo(&lista, numero);
    }

    // Remover elementos repetidos
    removerRepetidos(lista);

    // Imprimir a lista resultante
    printf("Lista sem repeticoes: ");
    imprimirLista(lista);

    return 0;
}
