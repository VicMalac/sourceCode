//Soma de Elementos de um Array: Crie um programa que leia 5 números inteiros em um vetor e calcule a soma de todos os elementos
//Exercício completo
#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");
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
    system("cls");
    printf("A soma de todos esses numeros e: %d", sum);
}