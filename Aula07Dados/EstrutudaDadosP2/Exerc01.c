#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1. Crie uma estrutura para representar as coordenadas de umponto no plano (posições
//X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
//dele até a origem das coordenadas, isto é, posição (0, 0). Para realizar o cálculo,
//utilize a fórmula a seguir:
//Estruturas de dados em linguagem C
//Emque:
//• d = distância entre os pontos A e B
//• X = coordenada X em um ponto
//• Y = coordenada Y em um ponto
struct ponto {
    float x;
    float y;
};

void main(){
   struct ponto A;
   struct ponto B;

    printf("Digite as coordenadas X e Y do A: \n");
    scanf("%f %f", &A.x, &A.y);
    printf("Digite as coordenadas X e Y do B: \n");
    scanf("%f %f", &B.x, &B.y);

    float distancia = sqrt(("%f - %f",B.x,A.x) + ("%f - %f",B.y,A.y) 
    * ("%f - %f",B.x,A.x) + ("%f - %f",B.y,A.y));

    printf("A distância dos pontos é: %.2f\n",distancia);











}