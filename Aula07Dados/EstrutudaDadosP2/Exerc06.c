#include <stdio.h>

//6. Escreva um programa que contenha uma estrutura representando 
//uma data válida. Essa estrutura deve conter os campos dia, mês e ano.
// Em seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o
//número de dias que decorrem entre as duas datas.

struct Data {
    int dia;
    int mes;
    int ano;
};

void main() {
    struct Data data1, data2;

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diferenca = 0;

   
    while (data1.ano < data2.ano) {
        if ((data1.ano % 4 == 0 && data1.ano % 100 != 0) || (data1.ano % 400 == 0)) {
            diferenca += 366; 
        } else {
            diferenca += 365; 
        }
        data1.ano++;
    }

    
    while (data1.mes != data2.mes) {
        diferenca += diasPorMes[data1.mes];
        if (data1.mes == 2 && ((data1.ano % 4 == 0 && data1.ano % 100 != 0) || (data1.ano % 400 == 0))) {
            diferenca++; 
        }
        data1.mes++;
        if (data1.mes > 12) {
            data1.mes = 1;
            data1.ano++;
        }
    }

    
    diferenca += data2.dia - data1.dia;

    printf("O número de dias entre as duas datas é: %d\n", diferenca);
}