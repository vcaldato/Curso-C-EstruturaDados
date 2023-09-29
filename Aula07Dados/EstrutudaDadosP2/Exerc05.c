#include <stdio.h>

//5. Usando a estrutura "atleta"do exercício anterior, escreva um
//programa que leia os dados de cinco atletas e os exiba por ordem 
//de idade, do mais velho para o mais novo.

struct atleta{
    char nome[100];
    char esporte[20];
    int idade;
    float altura;
};
void main(){
      struct atleta at[5];
     struct atleta maisNovo, maisVelho;
     for(int i = 0; i < 5; i++){
        printf("Digite seu nome: \n", i + 1);
        scanf("%[^\n]%*c",&at[i].nome);
        scanf("%*[^\n]");
        scanf("%*c");

        printf("Qual seu esporte: \n");
        scanf("%[^\n]%*c",&at[i].esporte);
        scanf("%*[^\n]");
        scanf("%*c");

        printf("Digite sua idade: \n");
        scanf("%d",&at[i].idade);
         scanf("%*[^\n]");
        scanf("%*c");

        printf("Digite sua altura: \n");
        scanf("%f",&at[i].altura);
         scanf("%*[^\n]");
        scanf("%*c");
}
 for (int i = 0; i < 4; i++) {
        int maisVelho = i;
        for (int j = i + 1; j < 5; j++) {
            if (at[j].idade > at[maisVelho].idade) {
                maisVelho = j;
            }
        }
       
        struct atleta temp = at[i];
        at[i] = at[maisVelho];
        at[maisVelho] = temp;
    }

   
    printf("\nAtletas ordenados por idade (do mais velho para o mais novo):\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s\nIdade: %d\nAltura: %f\n", at[i].nome, at[i].idade, at[i].altura);
        printf("--------------------\n");
    }
}