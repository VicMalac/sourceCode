//Contagem de Pares e Ímpares: Crie um programa que leia 10 números e imprima a quantidade de números pares e ímpares.

#include <stdio.h>
int num[100], qtdPar = 0, qtdImpar = 0;
int main(void){
    for (int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%i", &num[i]);
        if (num[i] % 2 == 0) {
            qtdPar += 1;
        }
        else{
            qtdImpar += 1;
        }
    }
    printf("Existem %i numeros pares e %i numeros impares", qtdPar, qtdImpar);
}
