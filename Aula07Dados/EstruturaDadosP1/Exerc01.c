#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1. Implemente um programa em C que leia o nome,
// a idade e o endereço de uma pessoa e armazene esses
//dados em uma estrutura. Em seguida, imprima na tela os
// dados da estrutura lida.

struct pessoa{
    char nome[30];
    int idade;
    char endereco[100];
};
void main(){

    struct pessoa p1;

 printf("Digite seu nome: \n");
 scanf("%[^\n]%*c",&p1.nome);

 printf("Digite sua idade: \n");
 scanf("%d",&p1.idade);
 scanf("%*[^\n]");
 scanf("%*c");

 printf("Digite seu endereço: \n");
 scanf("%[^\n]%*c",&p1.endereco);

 printf("Nome: %s\n",p1.nome);
 printf("Idade: %d\n",p1.idade);
 printf("Endereço: %s\n",p1.endereco);

 





}