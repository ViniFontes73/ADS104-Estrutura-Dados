/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#define N 2
//registro
typedef struct{
    char nome_funcionario[120];
    int idade_funcionario;
    char telefone_funcionario[11];
    char cargo_funcionario[60];
    float salario_funcionario;
  }funcionario;
int main()
{
    funcionario funcionarios[N];
    int menu,i;
    while(1){
        printf("MENU\n");
        printf("1 - Inserir Funcionário\n");
        printf("2 - Listar Funcionário\n");
        printf("3 - Atualizar Funcionário\n");
        printf("4 - Deletar Funcionário\n");
        printf("5 - Procurar Funcionário\n");
        printf("0 - SAIR\n");
        scanf("%d", &menu);
        if (menu == 0){
            printf("Saindo do programa!");
            break;
        }
        else if (menu == 1){
            //chama a funcao Create
            for (i =0; i <N;i++){
                printf("\nDigite o nome do Funcionário %d: ", i);
                scanf(" %[^\n]", funcionarios[i].nome_funcionario);
                printf("\nDigite a idade do Funcionário %d: ", i);
                scanf(" %d", &funcionarios[i].idade_funcionario);
                printf("\nDigite o telefone do Funcionário %d: ", i);
                scanf(" %[^\n]", funcionarios[i].telefone_funcionario);
                printf("\nDigite o cargo do Funcionário %d: ", i);
                scanf(" %[^\n]", funcionarios[i].cargo_funcionario);
                printf("\nDigite o salário do Funcionário %d: ", i);
                scanf(" %f", &funcionarios[i].salario_funcionario);
                printf("\n");
                
            }
        }
        else if (menu == 2){
            //chama a funcao READ (LISTAR TODOS)
            for (i =0; i <N;i++){
                printf("\nFuncionário %d", i);
                printf("\nNome: %s\n", funcionarios[i].nome_funcionario);
                printf("\n");
            }
        }
        else if (menu == 3){
            //chama a funcao UPDATE
            // Dar opção de escolha de busca - nome, id, cargo
            char nome_buscar[150];
            printf("Digite o nome do funcionario que deseja alterar: ");
            scanf(" %[^\n]", nome_buscar);
            int indice = -1;
            
            for (i =0; i <N;i++){
                if (strcmp(funcionarios[i].nome_funcionario, nome_buscar) ==0){
                    indice = 1;
                    break;
                }
            }
            if (indice != -1){
                printf("Dados atuais do Funcionário:\n");
                printf("Nome: %s\n", funcionarios[i].nome_funcionario);
                printf("Idade: %d\n", funcionarios[i].idade_funcionario);
                printf("Telefone: %s\n", funcionarios[i].telefone_funcionario);
                printf("Cargo: %s\n", funcionarios[i].cargo_funcionario);
                printf("Salário: %.2lf\n", funcionarios[i].salario_funcionario);
                
                // alterar os dados preencehndo novamente
             
                printf("\nDigite o novo nome do Funcionário: ");
                scanf(" %[^\n]", funcionarios[i].nome_funcionario);
                printf("\nDigite a nova idade do Funcionário: ");
                scanf(" %d", &funcionarios[i].idade_funcionario);
                printf("\nDigite o novo telefone do Funcionário: ");
                scanf(" %[^\n]", funcionarios[i].telefone_funcionario);
                printf("\nDigite o novo cargo do Funcionário: ");
                scanf(" %[^\n]", funcionarios[i].cargo_funcionario);
                printf("\nDigite o novo salário do Funcionário: ");
                scanf(" %f", &funcionarios[i].salario_funcionario);
                printf("\n");
                
            } else {
                printf("Funcionário não encontrado!");
            }
        }
        else if (menu == 4){
            //chama a funcao DELETE
        }
        else if (menu == 5){
            //chama a funcao PROCURAR
        }
        else{
            // volta o looping
            printf("Insira u valor válido!\n");
        }
}
    return 0;
}
