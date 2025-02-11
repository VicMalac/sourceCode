//Determinando se um número é múltiplo de outro: Crie um programa que leia dois números e determine se o primeiro é múltiplo do segundo.
#include <stdio.h>

int main(void){
    int n1, n2;
    printf("Digite o numero 1: ");
    scanf("%d", &n1);
    printf("Digite o número 2: ");
    scanf("%d", &n2);

    if (n1 % n2 == 0){
        printf("Divisivel");
    }
    else{
        printf("Nao divisivel");
    }
}