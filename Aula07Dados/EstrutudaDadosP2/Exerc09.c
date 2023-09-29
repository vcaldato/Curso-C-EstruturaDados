#include <stdio.h>

//9. Crie um programa com uma estrutura para simular uma agenda 
//de telefone celular, com até 100 registros. Nessa agenda deve constar o nome,
// sobrenome, número de telefone móvel, número de telefone fixo e e-mail.
//O programa deverá fazer a leitura e, após isso, mostrar os dados na tela.

struct Agenda{
     char nome[50];
    char sobrenome[50];
    char telefoneMovel[15];
    char telefoneFixo[15];
    char email[100];
    
};

void main(){
    struct Agenda registro[100];
     int numContatos;

    printf("Quantos contatos deseja adicionar (até 100)? ");
    scanf("%d", &numContatos);

    if (numContatos > 100) {
        numContatos = 100;
    }

    for (int i = 0; i < numContatos; i++) {
        printf("Digite os dados para o contato %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", registro[i].nome); 
        printf("Sobrenome: ");
        scanf("%s", registro[i].sobrenome);
        printf("Telefone Móvel: ");
        scanf("%s", registro[i].telefoneMovel);
        printf("Telefone Fixo: ");
        scanf("%s", registro[i].telefoneFixo);
        printf("E-mail: ");
        scanf("%s", registro[i].email);
    }
  printf("\nContatos na agenda:\n");
    for (int i = 0; i < numContatos; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s %s\n", registro[i].nome, registro[i].sobrenome);
        printf("Telefone Móvel: %s\n", registro[i].telefoneMovel);
        printf("Telefone Fixo: %s\n", registro[i].telefoneFixo);
        printf("E-mail: %s\n", registro[i].email);
        printf("\n");
    }




    }
    
