#include <stdio.h>
#include <stdlib.h>


//2. Crie uma estrutura representando uma hora. Essa estrutura 
//deve conter os campos hora, minuto e segundo.
//Agora, escreva um programa que leia um vetor de 
//inco posições dessa estrutura e imprima a maior hora.

struct hora{
    int horas;
    int minuto;
    int segundo;
};

void main(){
     struct hora h[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite a hora: \n");
        scanf("%d",&h[i].horas);
        
         printf("Digite os minutos: \n");
        scanf("%d",&h[i].minuto);

         printf("Digite os segundos: \n");
        scanf("%d",&h[i].segundo);
    }
    
   struct hora maiorHora = h[0];

    for (int i = 1; i < 5; i++) {
        if (h[i].horas > maiorHora.horas ||
            (h[i].horas == maiorHora.horas && h[i].minuto > maiorHora.minuto) ||
            (h[i].horas == maiorHora.horas && h[i].minuto == maiorHora.minuto && h[i].segundo > maiorHora.segundo)) {
            maiorHora = h[i];
        }
    }

    printf("A maior hora é: %02d:%02d:%02d\n"
    , maiorHora.horas, maiorHora.minuto, maiorHora.segundo);



    }



