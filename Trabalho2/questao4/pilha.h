#ifndef PILHA_H
#define PILHA_H

struct No {
    int chave;
    struct No* proximo;
};

typedef struct {
    struct No* topo;
} Pilha;

void inicializarPilha(Pilha* pilha);
int pilhaVazia(Pilha pilha);
void empilhar(Pilha* pilha, int chave);
void desempilhar(Pilha* pilha);
void imprimirPilha(Pilha pilha);
void removerItem(Pilha* pilha, int chaveRemover);

#endif
