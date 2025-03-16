//Maior e Menor Número: Faça um programa que leia três números e imprima o maior e o menor número entre eles.
//mmm == maior, meio, menor

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main (void) {
    system("cls");
    int num1, num2, num3;

    printf("Digite seu numero: ");
    scanf("%d", &num1);
    printf("Digite seu segundo numero: ");
    scanf("%d", &num2);
    printf("Digite seu terceiro numero: ");
    scanf("%d", &num3);
    system("cls");

    if (num1 == num2 && num1 > num3){
        printf("Dois numero iguais: %d\n", num1);
        printf("Menor: %d\n", num3);
        return 0;
    }
    else if (num1 == num3 && num1 > num2) {
        printf("Dois numeros iguais: %d\n", num1);
        printf("Menor: %d\n", num2);
        return 0;
    }
    else if (num2 == num3 && num3 > num1) {
        printf("Dois numeros iguais: %d\n", num2);
        printf("Menor: %d\n", num1);
        return 0;
    }

    if (num1 == num2 && num1 < num3){
        printf("|===========================================================|\n");
        printf("|                       Maior: %d                            |\n", num3);
        printf("|                  Dois numero iguais: %d                    |\n", num1);
        printf("|===========================================================|\n");
        return 0;
        
    }
    else if (num1 == num3 && num1 < num2) {
        printf("|===========================================================|\n");
        printf("|                        Maior: %d                           |\n", num2);
        printf("|                Dois numeros iguais: %d                     |\n", num1);
        printf("|===========================================================|\n");
        return 0;
        
    }
    else if (num2 == num3 && num3 < num1) {
        printf("|===========================================================|\n");
        printf("|                         Maior: %d                          |\n", num1);
        printf("|                 Dois numeros iguais: %d                    |\n", num2);
        printf("|===========================================================|\n");
        return 0;
    }
    else if (num1 == num2 && num1 == num3) {
        printf("|===========================================================|\n");
        printf("|               Os tres numeros sao iguais.                 |\n");
        printf("|===========================================================|\n");
        return 0;
    }
    


    if (num1 > num2 && num1 > num3) {
        printf("Maior: %d\n", num1);
        if (num2 > num3) {
            printf("Meio: %d\n", num2);
            printf("Menor: %d\n", num3);
        }
        else {
            printf("Meio: %d\n", num3);
            printf("Menor: %d\n", num2);
        }
    }
    else if (num2 > num1 && num2 > num3) {
        printf("Maior: %d\n", num2);
        if (num1 > num3){
            printf("Meio: %d\n", num1);
            printf("Menor: %d\n", num3);
        }
        else{
            printf("Meio: %d\n", num3);
            printf("Menor: %d\n", num1);
        }
    }
    else if (num3 > num1 && num3 > num1){
        printf("Maior: %d\n", num3);
        if (num2 > num1) {
            printf("Meio: %d\n", num2);
            printf("Menor: %d\n", num1);
        }
        else {
            printf("Meio: %d\n", num1);
            printf("Menor: %d\n", num2);
        }
    }
    
    
}