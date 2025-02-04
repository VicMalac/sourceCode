#include <stdio.h>

const int total = 3; //Numero fixo de notas
int main(void){
    int notas[3];
    for (int i = 0; i < total; i++){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }

    printf("Media: %f\n", (notas[0] + notas[1] + notas[2]) / 3.0);
}