/* 
Nome do Propgrama: CalculosFuncoes.C
Descrição: Pede 2 números ao user e calcula por funções o dobro de cada um e triplica a soma dos dois.
Autor(es): Vinicius Fontes
Matrícula: 25388
Data:05/03/2024 
*/
#include <stdio.h>

// Função para dobrar um número
int dobrar(int num) {
    return num * 2;
}

// Função para somar dois números
int somar(int num1, int num2) {
    return num1 + num2;
}

// Função para triplicar um número
int triplicar(int num) {
    return num * 3;
}

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    // Dobrando os números
    int dobrado1 = dobrar(num1);
    int dobrado2 = dobrar(num2);
    
    // Somando os números
    int soma = somar(dobrado1, dobrado2);
    
    // Triplicando a soma
    int resultado = triplicar(soma);
    
    printf("O dobro dos números : %d e %d\n", dobrado1, dobrado2);
    printf("O resultado da soma triplicada é: %d\n", resultado);
    
    return 0;
}