/* 
Nome do Propgrama: MaiorMenor.C
Descrição: Desenvolva um programa em C que leia quatro números e armazene-os em um vetor. 
Esse programa deve conter ponteiros para manusear o vetor e imprimir os seus valores. 
Esse programa deve conter ponteiros também para apresentar o maior e o menor número do vetor
Autor(es): Vinicius Fontes
Matrícula: 25388
Data:12/03/2024 
*/
#include <stdio.h>
int main(){
    int quantidadeNumero = 4;
    double numeros[quantidadeNumero]; // esse é o array/ vetor e está com quantidadeNumero para poder trocar facilmente os valores.
    int i; // para percorrer a lista
    double *ptr = numeros; // Ponteiro 
    printf("Por favor, insira %d números:\n", quantidadeNumero);
    //Vamos solicitar o user para inserir os números usando for e mostrando qual valor inserir
    for  (i=0; i < quantidadeNumero; i++){
        printf("Número %d: ", i + 1);
        scanf("%lf", &numeros[i]); // %lf serve para ler os números flutuanntes &numeros[i] atribui o valor lido ao vetor na posição i
    }
    printf("A seguir os números desse vetor: \n");
    for (i=0; i<quantidadeNumero; i++){
        printf("%.2f, ", *ptr); // valor do vetor separado por virgula
        *ptr++; //Avamça pro próximo elemento do array
    }
    //Maior e menor número:
    //Declarar os vetores ou onde serão armazenados:
    double maior= numeros[0];
    double menor = numeros[0];

    for (i=1; i <quantidadeNumero; i++){

        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
   }
   printf("\nO maior número do vetor é igual a: %.2f\n ", maior );
   printf("O menor número do vetor é igual a: %.2f\n ", menor );
   return 0;
}