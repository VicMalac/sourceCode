#include <stdio.h>
#include <stdlib.h>

int main (void) {
    system("cls");
    int fat = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &fat);
    for (int i = fat - 1; i != 0; i--){
        printf("%d X %d = %d\n", fat, i, (fat * i));
        fat *= i;
    }
}