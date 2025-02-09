#include <stdio.h>
#include <stdlib.h>

const int total = 3; //Numero fixo de notas
float average();

int main(void){
    system("cls"); //Limpa a tela
    int notas[total]; //Declara o array[] com um total dentro, sendo total == 3
    for (int i = 0; i < total; i++){ //Repete para digitar a nota três vezes
        printf("Digite a nota: ");
        scanf("%d", &notas[i]);
    }

    printf("Media: %.2f\n", average(total, notas)); //Vai imprimir a função average utilizando a constante total e o array notas
}
float average(int length, int array[]){ //Declara função average utilizando uma variavel e um array
    int sum = 0;
    for(int i = 0; i < length; i++){ //Repete até que i seja igual length, e length == total
        sum += array[i]; //Sum recebe sempre array[i] array == notas
    }
    return sum / (float) length; // retorna o valor da soma dividido por length
}