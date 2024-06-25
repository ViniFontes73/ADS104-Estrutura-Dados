#ifndef PILHA_H
#define PILHA_H

struct No {
    int dado;
    struct No* proximo;
};

typedef struct {
    struct No* topo;
} Pilha;

void inicializarPilha(Pilha* pilha);
int pilhaVazia(Pilha pilha);
void empilhar(Pilha* pilha, int dado);
void desempilhar(Pilha* pilha);
void imprimirPilha(Pilha pilha);

#endif
