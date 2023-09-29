#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//3. Cria uma estrutura chamada retângulo. Essa estrutura deverá
// conter o ponto superior esquerdo e o ponto
//inferior direito do retângulo, a qual contém as posições X e Y
// de cada ponto. Faça um programa que declare e
//leia uma estrutura retângulo e exiba a área e o comprimento da diagonal
// e o perímetro desse retângulo.

struct ponto {
    float x;
    float y;
};

void main(){
    struct ponto superiorEsquerdo;
    struct ponto inferiorDireito;
    

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f",&superiorEsquerdo.x,&superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &inferiorDireito.x, &inferiorDireito.y);

    float altura = superiorEsquerdo.x - inferiorDireito.x;
    float largura = superiorEsquerdo.y - inferiorDireito.y;

    float area = largura * altura;
    float diagonal = sqrt(largura * largura + altura * altura);
    float perimetro = 2 * (largura + altura);

    printf("A área do retangulo é : %f\n",area);
    printf("A diagonal do retangulo é: %.2f\n",diagonal);
    printf("O perimetro do retangulo é: %.2f\n",perimetro);


    
    

}
    


