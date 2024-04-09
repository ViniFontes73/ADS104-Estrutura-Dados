/******************************************************************************
Nome do Propgrama: Contador_Caracteres.C
Descrição do Programa: Programa que conta quantos caracteres foram digitados, em sua contagem também é contado o espaço e acentos.
Nome: Vinicius Fontes
Data:9/04/2024
*******************************************************************************/

#include <stdio.h>
#include <string.h>

//escopo
int contador_caracteres(char frase[600]);
int main()
{
    char frase[600];
    int desligar;
    // looping para ficar contando caracteres de várias frases
    while (1) {   // 1 é mesma coisa que While True
        printf("Digite a frase que deseja contar a quantidade de caracteres: ");
        scanf(" %[^\n]", frase);
        // chamar a função para a frase 
        contador_caracteres(frase);
        printf("\nPara desligar o programa digite 0 (zero): \n");
        scanf (" %d", &desligar );
        if (desligar == 0){
            printf("\nPrograma Finalizado!");
            break;
        }
    }
    return 0;
}
//função para contar caracteres
int contador_caracteres (char frase[600]){
    int caracteres = strlen(frase); // conta acento e espaço
    printf("A quantidade de caracteres é igual a: %d \n", caracteres); 
}