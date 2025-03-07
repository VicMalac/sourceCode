//Calculadora de Operações Básicas: Faça um programa que leia dois números e imprima a soma, subtração, 
//multiplicação e divisão entre eles, e verifique se a divisão é válida (não dividir por zero).

#include <stdio.h>

int main (void) {

    float num1,  num2, result;
    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    result = num1 + num2;
    printf("Soma: %d\n", (int)result);
    result = num1 - num2;
    printf("Subtracao: %d\n", (int)result);
    result = num1 * num2;
    printf("Multiplicacao: %d\n", (int)result);

    if (num2 == 0) {
        printf("%d não pode ser dividido por zero\n");
    }
    else {
            printf("Divisao: %.2f\n", num1 / num2);
    }
}