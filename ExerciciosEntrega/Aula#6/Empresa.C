/* 
Nome do Propgrama: Empresa.C
Descrição: Faça um programa para gerenciamento de compras em um
supermercado, com as seguintes características:
a. O programa deve mostrar um menu de opções ao usuário: adicionar
item, remover item, obter valor total da compra, mostrar relatório (lista
de itens) e sair.
b. O programa deve definir o tipo de registro Item, que pretende
representar um item sendo comprado no supermercado. Observação:
Campos: nome do item, valor unitário e quantidade.
c. O programa deve definir um array (vetor) para permitir criar uma lista
de compras no supermercado. O tamanho do array deve ser igual à N,
sendo o valor de N definido pelo usuário.
Autor(es): Vinicius Fontes
Matrícula: 25388
Data:14/03/2024 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item {
    char nome[50];
    float valorUnitario;
    int quantidade;
};

void adicionarItem(struct Item *lista, int *numItens) {
    if (*numItens >= 100) {
        printf("Limite de itens atingido.\n");
        return;
    }

    struct Item novoItem;

    printf("Nome do item: ");
    scanf("%s", novoItem.nome);

    printf("Valor unitario: ");
    scanf("%f", &novoItem.valorUnitario);

    printf("Quantidade: ");
    scanf("%d", &novoItem.quantidade);

    lista[*numItens] = novoItem;
    (*numItens)++;
}

void removerItem(struct Item *lista, int *numItens) {
    int indice;
    printf("Digite o indice do item a ser removido: ");
    scanf("%d", &indice);

    if (indice < 0 || indice >= *numItens) {
        printf("Indice invalido.\n");
        return;
    }

    for (int i = indice; i < *numItens - 1; ++i) {
        lista[i] = lista[i + 1];
    }

    (*numItens)--;
}

float calcularTotal(struct Item *lista, int numItens) {
    float total = 0;
    for (int i = 0; i < numItens; ++i) {
        total += lista[i].valorUnitario * lista[i].quantidade;
    }
    return total;
}

void mostrarRelatorio(struct Item *lista, int numItens) {
    printf("Relatorio de itens:\n");
    for (int i = 0; i < numItens; ++i) {
        printf("Item %d: Nome: %s, Valor Unitario: %.2f, Quantidade: %d\n",
               i, lista[i].nome, lista[i].valorUnitario, lista[i].quantidade);
    }
}

int main() {
    int tamanhoLista;
    printf("Digite o tamanho da lista de compras: ");
    scanf("%d", &tamanhoLista);

    struct Item *listaCompras = (struct Item *)malloc(tamanhoLista * sizeof(struct Item));
    if (listaCompras == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    int numItens = 0;
    char opcao;

    do {
        printf("\nMenu:\n");
        printf("a. Adicionar item\n");
        printf("r. Remover item\n");
        printf("t. Obter valor total da compra\n");
        printf("m. Mostrar relatorio\n");
        printf("s. Sair\n");

        printf("Opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                adicionarItem(listaCompras, &numItens);
                break;
            case 'r':
                removerItem(listaCompras, &numItens);
                break;
            case 't':
                printf("Valor total da compra: %.2f\n", calcularTotal(listaCompras, numItens));
                break;
            case 'm':
                mostrarRelatorio(listaCompras, numItens);
                break;
            case 's':
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 's');

    free(listaCompras);
    return 0;
}
