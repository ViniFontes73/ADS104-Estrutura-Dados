/******************************************************************************
Nome do Propgrama: Depreciacao.C
Descrição do Programa: Programa que calcula o IMC e imprime sua classificação, te da uma opçção de imprimir os valores individuais e 
utiliza de funcão void para imprimir a classificação .
Nome: Vinicius Fontes
Data:5/04/2024
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define N 100
//Esse programa registra as pessoas.

typedef struct {
    char nome[50];
    float altura;
    float peso;
}pessoas;

void classficiacao_imc (float imc); // ela é void pq executa uma ação por si só

int main()
{
    pessoas pessoa[N];
    int i;
    char sim[1];
    float imc;
    
    for (i =0; i < N; i++){
        printf ("Digite o nome da pessoa %d: ", i+1);
        scanf (" %[^\n]", pessoa[i].nome);
        printf ("Digite a altura da pessoa %d: ", i+1);
        scanf ("%f", &pessoa[i].altura);
        printf ("Digite o peso da pessoa %d: ", i+1);
        scanf ("%f", &pessoa[i].peso);
        printf("\n");
    }
    printf ("Deseja imprimir todos os registros? S/N: ");
    scanf (" %[^\n]", sim);
    //printf("%s\n", sim);
    if (strcmp(sim, "S") == 0) {
        for (i =0; i < N; i++){
        printf ("O nome da pessoa %d é %s\n ", (i+1), pessoa[i].nome);
        printf ("A altura da pessoa %d é %.2f\n ", (i+1), pessoa[i].altura);
        printf ("O peso da pessoa %d é %.2f\n ", (i+1), pessoa[i].peso);
        }
    }
    
    //Calcular IMC  > peso/ (altura*altura)
    for (i =0; i < N; i++){
        imc = (pessoa[i].peso)/(pessoa[i].altura*pessoa[i].altura);
        printf ("O IMC de %s é: %.2f \n", pessoa[i].nome, imc);
        //inserir a classficiação por meio de uma função
        classficiacao_imc(imc); // Mostrar a Classificação
    }
    return 0;
} // end MAIN
float classficiacao_imc (float imc){
    if (imc < 18.5){
        printf ("Classificação MAGREZA!");
    }
    else if (imc >= 18.5 && imc <= 24.9){
        printf ("Classificação NORMAL!");
    }
    else if (imc >= 25 && imc <= 29.9){
        printf ("Classificação SOBREPESO!");
    }
    else if (imc >= 30 && imc <= 39.9){
        printf ("Classificação OBESIDADE!");
    }
    else
        printf ("Classificação OBESIDADE GRAVE!");
    
}

