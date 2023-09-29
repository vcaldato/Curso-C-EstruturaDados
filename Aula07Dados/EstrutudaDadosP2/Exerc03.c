#include <stdio.h>
#include <stdlib.h>

//3. Crie uma estrutura capaz de armazenar o nome e a
// data de nascimento de uma pessoa. Faça uso de
//estruturas aninhadas e definição de novo tipo de dado.
// Agora, escreva um programa que leia os dados de seis
//pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.

struct Pessoa{
    int dia;
    int mes; 
    int ano;
    char nome[100];

};
void main(){
    struct Pessoa p[6];
    struct Pessoa maisNova, maisVelha;
    maisNova.ano = 9999; 
    maisVelha.ano = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite seu nome: \n", i + 1);
        scanf("%[^\n]%*c",&p[i].nome);
        scanf("%*[^\n]");
        scanf("%*c");

        printf("Digite sua data de nascimento (Dia mes ano) da pessoa: \n");
        scanf("%d %d %d",&p[i].dia,&p[i].mes,&p[i].ano);
        scanf("%*[^\n]");
        scanf("%*c");

        if (p[i].ano < maisNova.ano ||
            (p[i].ano == maisNova.ano &&
             (p[i].mes < maisNova.mes ||
              (p[i].mes == maisNova.mes &&
               p[i].dia < maisNova.dia)))) {
            maisNova = p[i];
        }

        if (p[i].ano > maisVelha.ano ||
            (p[i].ano == maisVelha.ano &&
             (p[i].mes > maisVelha.mes ||
              (p[i].mes == maisVelha.mes &&
               p[i].dia > maisVelha.dia)))) {
            maisVelha = p[i];
    }
    
}
    printf("A pessoa mais nova é: %s\n", maisNova.nome);
    printf("A pessoa mais velha é: %s\n", maisVelha.nome);
}
