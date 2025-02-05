#include <stdio.h>
#include <stdlib.h>

const int total = 3; //Numero fixo de notas
float average();

int main(void){
    system("cls");
    int notas[total];
    for (int i = 0; i < total; i++){
        printf("Digite a nota: ");
        scanf("%d", &notas[i]);
    }

    printf("Media: %.2f\n", average(total, notas));
}
float average(int length, int array[]){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += array[i];
    }
    return sum / (float) length;
}