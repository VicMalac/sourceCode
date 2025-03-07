#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");
    int par;

    printf("Digite um numero: ");
    scanf("%d", &par);
    int qntpar = 0, pare = par;
    if (par % 2 == 0) {
        printf("O seu numero e par \n");
        for (int i = 0; i < pare; i++){ // se par == 6 quero que imprima 2 4 e 6 com resultado 3
            if (par == 0){
                continue;
            }
            par -= 2;
            qntpar += 1;
        }
    }
    else {
        par -= 1;
        printf("O seu numero e impar. \n");
        for (int i = 0; i < pare; i++){ // se par == 6 quero que imprima 2 4 e 6 com resultado 3
            if (par == 0){
                continue;
            }
            par -= 2;
            qntpar += 1;
        }
    }
    printf("Existem %d numeros pares ate seu numero\n", qntpar);
}