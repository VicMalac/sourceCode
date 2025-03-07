//Números Fibonacci: Escreva um programa que leia um número N e imprima os N primeiros números da sequência Fibonacci.
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55 /////// caso n = 10
//x, y, x, y

#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");
    int n = 0, x = 1, y = 1, sum;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i+=2){
        printf("%i %i ", x, y);
        x += y;
        y += x;
    }
}