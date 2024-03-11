/* 
Nome do Propgrama: Ponteiros.C
Descrição: leia seis números e armazene-os em um vetor. 
Esse programa deve conter ponteiros para manusear o vetor e imprimir os seus valores. 
O programa deve apresentar também o endereço de memória desses números.
Autor(es): Vinicius Fontes
Matrícula: 25388
Data:11/03/2024 
*/
#include <stdio.h>
int main(){
    int quantidadeNumero = 6;
    double numeros[quantidadeNumero]; // esse é o array/ vetor e está com quantidadeNumero para poder trocar facilmente os valores.
    int i; // para percorrer a lista
    double *ptr = numeros; // Ponteiro 
    printf("Por favor, insira %d números:\n", quantidadeNumero);
    //Vamos solicitar o user para inserir os números usando for e mostrando qual valor inserir
    for  (i=0; i < quantidadeNumero; i++){
        printf("Número %d: ", i + 1);
        scanf("%lf", &numeros[i]); // %lf serve para ler os números flutuanntes &numeros[i] atribui o valor lido ao vetor na posição i
    }
    // Valores inseridos e seu endereço de mem[oria]
    printf("A seguir os seguintes números inseridos e seus endereços de memória:\n");
        for (i =0; i < quantidadeNumero; i++) {// ATENÇÃO EM USAR PONTO E VIRGULA PARA SEPARAR O FOR
        printf("Número: %.2f    Endereço: %p\n", *ptr, (void *)ptr); //Valor e indereço de memória
        ptr++; //Avançar para o próximo elemento do array
    }
return 0;
}

/*
"(void *)": é a parte da conversão de tipo. Estamos convertendo o tipo de ptr para um ponteiro genérico (void *). 
Um ponteiro genérico em C pode apontar para qualquer tipo de dado, porque void * representa um endereço de memória sem tipo específico.

A razão pela qual estamos fazendo essa conversão é que %p, o especificador de formato usado no printf para imprimir endereços de memória,
espera um argumento do tipo "void *"". Portanto, precisamos converter ptr para o tipo void * para satisfazer os requisitos do %p.

O (void *) é usado para evitar warnings ou erros de compilação que podem ocorrer se tentarmos imprimir diretamente um ponteiro de outro tipo
sem uma conversão explícita para void *. Isso porque em C há restrições de tipo rígidas e o compilador pode emitir um aviso ou erro se você
tentar usar um tipo de ponteiro incorreto em uma função printf que espera um tipo específico de argumento. Ao converter para void *, 
estamos dizendo ao compilador que não estamos preocupados com o tipo exato do ponteiro neste contexto, apenas queremos imprimir o endereço de memória.
*/