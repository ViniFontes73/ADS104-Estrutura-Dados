#ifndef TAD_LISTA_H
#define TAD_LISTA_H

// Definição da estrutura de um nó da lista encadeada
struct No {
    int dado;
    struct No* proximo;
};

// Definição do tipo Lista
typedef struct {
    struct No* inicio;
} Lista;

// Protótipos das funções da TAD
void inicializarLista(Lista* lista);
int pertenceLista(Lista lista, int valor);
void inserirOrdenado(Lista* lista, int valor);
void removerElemento(Lista* lista, int valor);
void imprimirLista(Lista lista);
void copiarLista(Lista lista1, Lista* lista2);
void concatenarListas(Lista* lista1, Lista* lista2);
Lista intercalarListas(Lista lista1, Lista lista2);

#endif
