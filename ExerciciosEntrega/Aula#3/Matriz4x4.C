/* 
Nome do Propgrama: Matriz4x4.C
Descrição: Desenvolva um algoritmo que leia uma matriz numérica 4x4 e calcule:
a. A soma dos elementos da diagonal secundária;
b. A soma das linhas pares da matriz;
c. A soma das linhas ı́mpares da matriz;
d. A média das linhas pares;
e. A média das linhas diagonais (primária e secundária).
Autor(es): Vinicius Fontes
Data:29/02/2024 
*/
#include <stdio.h>
// função para achar a diagonal secundaria e somar
int somaDiagonalSecundaria(int matriz[][4]) {
    int i, soma = 0;
    for (i = 0; i < 4; i++) {
        soma += matriz[i][3 - i];
    }
    return soma;
}
//função para achar a diagonal primaria e somar
float somaDiagonalPrincipal(int matriz[][4]) {
    int i, soma = 0;
    for (i = 0; i < 4; i++) {
        soma += matriz[i][i];
    }
    return soma; 
}
// função para somar as linhas pares, no caso primeira e segunda linha
int somaLinhasPares(int matriz[][4]) {
    int i, j, soma = 0;
    for (i = 0; i < 4; i += 2) {
        for (j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
//soma as linhas impares no caso a 2 e 4 
int somaLinhasImpares(int matriz[][4]) {
    int i, j, soma = 0;
    for (i = 1; i < 4; i += 2) {
        for (j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
// faz a media da primeira linha separada e da terceira linha
float mediaLinha(int linha[], int tamanho) {
    int i;
    float soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += linha[i];
    }
    return soma / tamanho;
}

int main() {
    int matriz[4][4];
    int i, j;

    // Solicitando os elementos da matriz ao usuário
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Mostrando a matriz na tela
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Calculando e mostrando a soma dos elementos da diagonal secundária
    int soma_diagonal = somaDiagonalSecundaria(matriz);
    printf("\na:A soma dos elementos da diagonal secundaria e: %d\n", soma_diagonal);

    // Calculando e mostrando a soma dos elementos das linhas pares
    int soma_linhas_pares = somaLinhasPares(matriz);
    printf("\nb: A soma dos elementos das linhas pares e: %d\n", soma_linhas_pares);
    // Calculando e mostrando a soma das linhas ímpares da matriz
    int soma_linhas_impares = somaLinhasImpares(matriz);
    printf("\nc: A soma das linhas ímpares da matriz e: %d\n", soma_linhas_impares);
    // Calculando e mostrando a média da linha 1 da matriz
    float media_linha1 = mediaLinha(matriz[0], 4);
    printf("\nd.1: A média da linha 1 da matriz e: %.2f\n", media_linha1);

    // Calculando e mostrando a média da linha 3 da matriz
    float media_linha3 = mediaLinha(matriz[2], 4);
    printf("\nd.2: A média da linha 3 da matriz e: %.2f\n", media_linha3);
    // Calculando e mostrando a média da diagonal secundária
    float media_ds = somaDiagonalSecundaria(matriz) / 4.0; // Dividindo por 4.0 para garantir que a divisão seja de ponto flutuante
    printf("\ne.1: A media dos elementos da diagonal secundaria é: %.2f\n", media_ds); // Usando %f para imprimir um float
    // Calculando e mostrando a média da diagonal secundária
    float media_dp = somaDiagonalPrincipal(matriz) / 4.0; // Dividindo por 4.0 para garantir que a divisão seja de ponto flutuante
    printf("\ne.2: A media dos elementos da diagonal primaria é: %.2f\n", media_dp); // Usando %f para imprimir um float


    return 0;
}
