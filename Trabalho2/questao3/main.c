#include "tad_lista.h"
#include <stdio.h>

int main() {
    Lista lista;
    inicializarLista(&lista);

    int opcao = 0;
    int valor;

    while (opcao != 9) {
        printf("\nOperacoes disponiveis:\n");
        printf("1. Inserir elemento na lista\n");
        printf("2. Verificar se um numero pertence a lista\n");
        printf("3. Remover elemento da lista\n");
        printf("4. Imprimir lista\n");
        printf("5. Copiar lista\n");
        printf("6. Concatenar listas\n");
        printf("7. Intercalar listas\n");
        printf("9. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserirOrdenado(&lista, valor);
                break;
            case 2:
                printf("Digite o valor a ser verificado: ");
                scanf("%d", &valor);
                if (pertenceLista(lista, valor)) {
                    printf("%d pertence a lista.\n", valor);
                } else {
                    printf("%d nao pertence a lista.\n", valor);
                }
                break;
            case 3:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                removerElemento(&lista, valor);
                break;
            case 4:
                printf("Lista: ");
                imprimirLista(lista);
                break;
            case 5:
                printf("Copiando lista...\n");
                Lista listaCopia;
                copiarLista(lista, &listaCopia);
                printf("Copia da lista: ");
                imprimirLista(listaCopia);
                break;
            case 6:
                printf("Concatenando listas...\n");
                Lista listaConcatenada;
                inicializarLista(&listaConcatenada);
                inserirOrdenado(&listaConcatenada, 8);
                inserirOrdenado(&listaConcatenada, 9);
                printf("Lista concatenada: ");
                concatenarListas(&lista, &listaConcatenada);
                imprimirLista(lista);
                break;
            case 7:
                printf("Intercalando listas...\n");
                Lista lista2;
                inicializarLista(&lista2);
                inserirOrdenado(&lista2, 6);
                inserirOrdenado(&lista2, 7);
                printf("Lista 2: ");
                imprimirLista(lista2);
                Lista listaIntercalada = intercalarListas(lista, lista2);
                printf("Lista intercalada: ");
                imprimirLista(listaIntercalada);
                break;
            case 9:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }

    return 0;
}
