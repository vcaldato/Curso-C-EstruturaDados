#include <stdio.h>
#include <stdlib.h>

//4. Crie uma estrutura representando um atleta. 
//Essa estrutura deve conter o nome do atleta, seu esporte, idade
//e altura. Agora, escreva um programa que leia os dados de cinco atletas.
// Calcule e exiba os nomes do atleta mais alto e do mais velho.

struct atleta{
    char nome[100];
    char esporte[20];
    float idade;
    float altura;
};
void main(){
    struct atleta at[5];
     struct atleta maisAlto, maisVelho;
     maisAlto.altura = 0.0; 
    maisVelho.idade = 0;

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
        scanf("%f",&at[i].idade);
         scanf("%*[^\n]");
        scanf("%*c");

        printf("Digite sua altura: \n");
        scanf("%f",&at[i].altura);
         scanf("%*[^\n]");
        scanf("%*c");

         if (at[i].altura > maisAlto.altura) {
            maisAlto = at[i];
        }
        if (at[i].idade > maisVelho.idade) {
            maisVelho = at[i];
        }
    }

    printf("O atleta mais alto é: %s, altura: %.2f metros\n",maisAlto.nome, maisAlto.altura);
    printf("O atleta mais velho é: %s, idade: %.2f anos\n", maisVelho.nome, maisVelho.idade);


        }


    