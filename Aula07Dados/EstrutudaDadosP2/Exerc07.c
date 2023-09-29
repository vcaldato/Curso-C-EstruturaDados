#include <stdio.h>

//7. Astolfolov técnico de um time da série C do poderoso campeonato de
// futebol profissional da Albânia. Ele deseja manter os dados dos seus 
//jogadores guardados de forma minuciosa. Ajude-o fazendo um programa
//para armazenar os seguintes dados de cada jogador: no da camisa, peso (kg),
// altura (m) e a posiçãoem que joga (atacante, defensor ou meio campista). 
//Lembre-se que o time tem 22 jogadores, entre reservas e
//itulares. Leia os dados e depois gere um relatório no vídeo, devidamente 
//tabulado/formatado.

struct Jogador {
    int numCamisa;
    float peso;
    float altura;
    char posicao[20];
};

void main() {
    struct Jogador time[22];

    
    printf("Digite os dados dos jogadores:\n");
    for (int i = 0; i < 22; i++) {
        printf("\nJogador %d:\n", i + 1);
        printf("Número da camisa: ");
        scanf("%d", &time[i].numCamisa);
        printf("Peso (kg): ");
        scanf("%f", &time[i].peso);
        printf("Altura (m): ");
        scanf("%f", &time[i].altura);
        printf("Posição (atacante, defensor, meio campista): ");
        scanf("%s", time[i].posicao);
    }

    
    printf("\nRelatório dos Jogadores:\n");
    printf("| Número Camisa | Peso (kg) | Altura (m) | Posição         |\n");
    printf("+---------------+------------+------------+-----------------+\n");
    for (int i = 0; i < 22; i++) {
        printf("| %-13d | %-10.2f | %-10.2f | %-15s |\n", 
               time[i].numCamisa, time[i].peso, time[i].altura, time[i].posicao);
    }
    printf("+---------------+------------+------------+-----------------+\n");

}