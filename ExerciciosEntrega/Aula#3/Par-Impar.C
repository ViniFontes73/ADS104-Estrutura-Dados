/* 
Nome do Propgrama: Par-Impar.C
Descrição: Pede 12 números ao user por um for e depois separa esses 12 números por par ou impar em vetores diferentes.
Autor(es): Vinicius Fontes
Data:29/02/2024 
*/
#include <stdio.h>

int main() {
    int numeros[12];
    int vetpar[12], vetimpar[12];
    int i, cont_par = 0, cont_impar = 0;

    // Solicitando os números ao usuário usando um loop for
    for (i = 0; i < 12; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Separando os números em pares e ímpares
    for (i = 0; i < 12; i++) {
        if (numeros[i] % 2 == 0) {
            vetpar[cont_par] = numeros[i];
            cont_par++;
        } else {
            vetimpar[cont_impar] = numeros[i];
            cont_impar++;
        }
    }

    // Apresentando os resultados na tela
    printf("\nNumeros pares:\n");
    for (i = 0; i < cont_par; i++) {
        printf("%d ", vetpar[i]);
    }
    printf("\n");

    printf("Numeros impares:\n");
    for (i = 0; i < cont_impar; i++) {
        printf("%d ", vetimpar[i]);
    }
    printf("\n");

    return 0;
}
