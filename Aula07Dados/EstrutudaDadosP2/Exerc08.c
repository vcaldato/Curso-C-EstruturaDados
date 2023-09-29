#include <stdio.h>

//8. Crie um programa que tenha uma estrutura para armazenar o nome,
// a idade e número da carteira de sócio de 50 associados de um clube.
// Crie também uma estrutura, dentro desta anterior, chamada dados que
//contenha o endereço, telefone e data de nascimento.
struct DadosPessoais {
    char endereco[100];
    char telefone[15];
    char dataNascimento[15];
};
struct torcedor {
    char nome[20];
    int idade;
    int numSocio;
    struct DadosPessoais dadosPessoais;
};
void main(){
  struct torcedor socio[50];

    printf("Digite os dados dos associados:\n");
    for (int i = 0; i < 50; i++) {
        printf("\nSocio %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", socio[i].nome);
        printf("Idade: ");
        scanf("%d", &socio[i].idade);
        printf("Número de Sócio: ");
        scanf("%d", &socio[i].numSocio);
        printf("Endereço: ");
        scanf("%s", socio[i].dadosPessoais.endereco);
        printf("Telefone: ");
        scanf("%s", socio[i].dadosPessoais.telefone);
        printf("Data de Nascimento (dd/mm/aaaa): ");
        scanf("%s", socio[i].dadosPessoais.dataNascimento);
    }

    
    printf("\nDados dos socio:\n");
    printf("| Nome                   | Idade | Nº Sócio | Endereço                | Telefone       | Data Nascimento  |\n");
    printf("+------------------------+-------+----------+-------------------------+----------------+------------------+\n");
    for (int i = 0; i < 50; i++) {
        printf("| %-23s | %-5d | %-8d | %-23s | %-14s | %-16s |\n", 
               socio[i].nome, socio[i].idade, socio[i].numSocio,
               socio[i].dadosPessoais.endereco, socio[i].dadosPessoais.telefone,
               socio[i].dadosPessoais.dataNascimento);
    }
    printf("+------------------------+-------+----------+-------------------------+----------------+------------------+\n");

    return 0;
}
  
