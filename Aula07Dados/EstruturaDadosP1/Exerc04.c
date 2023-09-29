#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


//4. Usando a estrutura retângulo do exercício anterior, 
//faça um programa que declare e leia uma estrutura
//retângulo e um ponto, e informe se esse ponto está ou não dentro do retângulo.


struct ponto {
    float x;
    float y;
};

void main(){
    struct ponto superiorEsquerdo;
    struct ponto inferiorDireito;
    struct ponto veriPonto;
    

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f",&superiorEsquerdo.x,&superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &inferiorDireito.x, &inferiorDireito.y);

    float altura = superiorEsquerdo.x - inferiorDireito.x;
    float largura = superiorEsquerdo.y - inferiorDireito.y;

    float area = largura * altura;
    float diagonal = sqrt(largura * largura + altura * altura);
    float perimetro = 2 * (largura + altura);

    printf("Digite as coordenadas do ponto a ser verificado (x y): ");
    scanf("%f %f", &veriPonto.x, &veriPonto.y);

    
    if (veriPonto.x >= superiorEsquerdo.x && veriPonto.x <= inferiorDireito.x &&
        veriPonto.y >= inferiorDireito.y && veriPonto.y <= superiorEsquerdo.y) {
        printf("O ponto está dentro do retângulo.\n");
    } else {
        printf("O ponto não está dentro do retângulo.\n");
    }

    printf("A área do retangulo é : %f\n",area);
    printf("A diagonal do retangulo é: %.2f\n",diagonal);
    printf("O perimetro do retangulo é: %.2f\n",perimetro);


    
    

}