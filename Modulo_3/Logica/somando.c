//Soma dos Números de 1 até N: Crie um programa que leia um número N e calcule a soma de todos os números de 1 até N.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("cls");
    int n, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    soma += n * (n + 1) / 2;
    for (int i = n; i != 0 ; i--) {
        printf("%d ", i);
        if (i > 1) printf("+ ");
        else printf("= ");
    }
    printf("%d\n", soma);
}