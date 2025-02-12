//Soma de Elementos de um Array: Crie um programa que leia 5 números inteiros em um vetor e calcule a soma de todos os elementos
#include <stdio.h>

int main(void){
    int qta;
    printf("Quantos numeros deseja que sejam somados: ");
    scanf("%d", &qta);
    int intarray[qta];
    int sum = 0;
    for(int i = 0; i < qta; i++){
        printf("Input %d: ", i+1);
        scanf("%d", &intarray[i]);
        sum += intarray[i];
    }
    printf("A soma de todos esses numeros e: %d", sum);
}