/*Leia dois números e troque seus valores sem usar uma variável extra.*/
#include <stdio.h>
#include <stdlib.h>

int  a, b;
int main(){
    system("cls");
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    if (a > b){
        printf("Os numeros eram A: %d e B: %d\n", a, b);
        a = a - b;
        b = b + a;
        a = b - a;
        printf("Agora sao A: %d e B: %d.\n", a, b);
    }
    else{
        if (a < b){
        printf("Os numeros eram A: %d e B: %d.\n", a, b);
        b = b - a;
        a = a + b;
        b = a - b;
        printf("Agora sao A: %d e B: %d.\n", a, b);
        }
        else{
            if (a < b){
            printf("Os numeros eram A: %d e B: %d.\n", a, b);
            b = b - a;
            a = a + b;
            b = a - b;
            printf("Agora sao A: %d e B: %d.\n", a, b);
            }
            else{
                a = b; //equivalem
                printf("A e B sao equivalentes.");
            }
        }
    }
}