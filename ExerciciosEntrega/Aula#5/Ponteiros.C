/* 
Nome do Propgrama: CalculosFuncoes.C
Descrição: leia seis números e
armazene-os em um vetor. Esse programa deve conter ponteiros para
manusear o vetor e imprimir os seus valores. O programa deve
apresentar também o endereço de memória desses números.
Autor(es): Vinicius Fontes
Matrícula: 25388
Data:11/03/2024 
*/
#include <stdio.h>

int main() {
    int quantidadeNumero = 2;
    double numeros[quantidadeNumero]; // Array para armazenar os números com uma variável para trocar facilmente
    int i;

    printf("Por favor, insira %d números:\n", quantidadeNumero);

    // Solicitar ao usuário para inserir os números
    for (i = 0; i < quantidadeNumero; i++) {
        printf("Número %d: ", i + 1);
        scanf("%lf", &numeros[i]); // %lf para ler números de ponto flutuante
    }

    // Mostrar os números inseridos usando ponteiros
    printf("Você inseriu os seguintes números:\n");
    double *ptr = numeros; // Ponteiro para o primeiro elemento do array
    for (i = 0; i < quantidadeNumero; i++) {
        printf("%.2f ", *ptr); // Imprimir o valor apontado pelo ponteiro
        ptr++; // Avançar para o próximo elemento do array
    }
    printf("\n");

    return 0;
}
