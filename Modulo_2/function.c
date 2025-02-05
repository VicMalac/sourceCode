#include <stdio.h>
#include <stdlib.h>

const int total = 3; //Constante: Número fixo que não pode ser mudado
float average(); //Ativa uma função que está mais abaixo no código

int main(void){
    system("cls");
    int notas[3]; //Declara um array chamado notas com 3 variações diferentes
    for (int i = 0; i < total; i++){ //Faz a repetição quantas vezes as constante mandar nos arrays
        printf("Digite a nota: ");
        scanf("%d", &notas[i]);
    }

    printf("Media: %.2f\n", average(total, notas)); //Imprime o que estiver dentra da função average
}
float average(int length, int array[]){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + array[i]; //Soma cada um dos arrays entre si
    }
    return sum / (float) length; //Retorna o valor da soma dividido por length para a função average, ou seja, average = media
    }