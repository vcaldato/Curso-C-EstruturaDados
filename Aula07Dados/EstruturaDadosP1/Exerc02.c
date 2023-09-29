#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//2. Crie uma estrutura representando um aluno de uma disciplina.
// Essa estrutura deve conter o número de
//matrícula do aluno, seu nome e as notas de três provas.
//Defina também um tipo para esta estrutura. Agora,
//escreva um programa que leia os dados de cinco alunos
 //e os armazena nessa estrutura. Em seguida, exiba o
//nome e as notas do aluno que possui a maior média geral dentre os cinco. 

struct aluno{
    int matricula;
    char nome[20];
    float notas[3];
    float media;
    
};
void main(){
   struct aluno Aluno[5];

for(int i = 0; i < 5; i++){

    printf("Digite o número da matricula: \n");
    scanf("%d",&Aluno[i].matricula);
    scanf("%*c");

    printf("Digite seu nome: \n");
    scanf("%[^\n]%*c",&Aluno[i].nome);
    scanf("%*[^\n]");
    scanf("%*c");

printf("Digite as 3 notas: \n");
scanf("%f %f %f",&Aluno[i].notas[0], &Aluno[i].notas[1], &Aluno[i].notas[2]);
        
  Aluno[i].media = (Aluno[i].notas[0] + Aluno[i].notas[1] + Aluno[i].notas[2]) / 3.0;
}

  int MaiorMedia = 0;
for (int i = 1; i < 5; i++) {
        if (Aluno[i].media > Aluno[MaiorMedia].media) {
            MaiorMedia = i;
}
}
    printf("\nAluno com a maior média geral:\n");
    printf("Nome: %s\n", Aluno[MaiorMedia].nome);
    printf("Notas das provas: %.2f %.2f %.2f\n", Aluno[MaiorMedia].notas[0],
     Aluno[MaiorMedia].notas[1], Aluno[MaiorMedia].notas[2]);
    printf("Média: %.2f\n", Aluno[MaiorMedia].media);

}