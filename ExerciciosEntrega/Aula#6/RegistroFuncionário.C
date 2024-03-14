/* 
Nome do Propgrama: Ponteiros.C
Descrição: Crie um registro para os funcionários de uma empresa com as
seguintes informações: número do funcionário, nome, idade, telefone,
cargo e salário. O programa deve manter o cadastro de até 100
funcionários. Crie funções que realizem as seguintes tarefas:
a. Inserir funcionário.
b. Listar todos os funcionários cadastrados.
c. Procurar funcionário pelo nome ou pelo número, e imprimir seus
dados.
d. Eliminar o cadastro de um funcionário
e. Editar as informações de um funcionário, dado o seu número de
registro. 
Autor(es): Vinicius Fontes
Matrícula: 25388
Data:14/03/2024 
*/
#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100

struct Funcionario {
    int numero;
    char nome[50];
    int idade;
    char telefone[15];
    char cargo[50];
    float salario;
};

struct Funcionario funcionarios[MAX_FUNCIONARIOS];
int num_funcionarios = 0;

void inserirFuncionario() {
    if (num_funcionarios >= MAX_FUNCIONARIOS) {
        printf("Limite de funcionarios atingido.\n");
        return;
    }

    struct Funcionario novoFuncionario;

    printf("Numero do funcionario: ");
    scanf("%d", &novoFuncionario.numero);

    printf("Nome: ");
    scanf("%s", novoFuncionario.nome);

    printf("Idade: ");
    scanf("%d", &novoFuncionario.idade);

    printf("Telefone: ");
    scanf("%s", novoFuncionario.telefone);

    printf("Cargo: ");
    scanf("%s", novoFuncionario.cargo);

    printf("Salario: ");
    scanf("%f", &novoFuncionario.salario);

    funcionarios[num_funcionarios++] = novoFuncionario;
}

void listarFuncionarios() {
    printf("Funcionarios cadastrados:\n");
    for (int i = 0; i < num_funcionarios; ++i) {
        printf("Numero: %d, Nome: %s, Idade: %d, Telefone: %s, Cargo: %s, Salario: %.2f\n",
               funcionarios[i].numero, funcionarios[i].nome, funcionarios[i].idade,
               funcionarios[i].telefone, funcionarios[i].cargo, funcionarios[i].salario);
    }
}

void procurarFuncionario() {
    int opcao;
    printf("1. Procurar pelo nome\n");
    printf("2. Procurar pelo numero\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        char nome[50];
        printf("Digite o nome do funcionario: ");
        scanf("%s", nome);
        for (int i = 0; i < num_funcionarios; ++i) {
            if (strcmp(funcionarios[i].nome, nome) == 0) {
                printf("Numero: %d, Nome: %s, Idade: %d, Telefone: %s, Cargo: %s, Salario: %.2f\n",
                       funcionarios[i].numero, funcionarios[i].nome, funcionarios[i].idade,
                       funcionarios[i].telefone, funcionarios[i].cargo, funcionarios[i].salario);
                return;
            }
        }
        printf("Funcionario nao encontrado.\n");
    } else if (opcao == 2) {
        int numero;
        printf("Digite o numero do funcionario: ");
        scanf("%d", &numero);
        for (int i = 0; i < num_funcionarios; ++i) {
            if (funcionarios[i].numero == numero) {
                printf("Numero: %d, Nome: %s, Idade: %d, Telefone: %s, Cargo: %s, Salario: %.2f\n",
                       funcionarios[i].numero, funcionarios[i].nome, funcionarios[i].idade,
                       funcionarios[i].telefone, funcionarios[i].cargo, funcionarios[i].salario);
                return;
            }
        }
        printf("Funcionario nao encontrado.\n");
    } else {
        printf("Opcao invalida.\n");
    }
}

void eliminarFuncionario() {
    int numero;
    printf("Digite o numero do funcionario a ser eliminado: ");
    scanf("%d", &numero);
    for (int i = 0; i < num_funcionarios; ++i) {
        if (funcionarios[i].numero == numero) {
            for (int j = i; j < num_funcionarios - 1; ++j) {
                funcionarios[j] = funcionarios[j + 1];
            }
            num_funcionarios--;
            printf("Funcionario eliminado com sucesso.\n");
            return;
        }
    }
    printf("Funcionario nao encontrado.\n");
}

void editarFuncionario() {
    int numero;
    printf("Digite o numero do funcionario a ser editado: ");
    scanf("%d", &numero);
    for (int i = 0; i < num_funcionarios; ++i) {
        if (funcionarios[i].numero == numero) {
            printf("Nome: ");
            scanf("%s", funcionarios[i].nome);

            printf("Idade: ");
            scanf("%d", &funcionarios[i].idade);

            printf("Telefone: ");
            sc
