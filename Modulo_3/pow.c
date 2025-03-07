#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
    system("cls");
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    double result = pow(num1, num2);
    printf("O seu primeiro numero elevado ao segundo e: %d", (int)result);
}