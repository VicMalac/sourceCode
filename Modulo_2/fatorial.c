#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    system("cls");
    printf("Escreva um numero inteiro: ");
    scanf("%d", &n);
    for(int i = n-1; i > 0; i--){
        printf("%d * %d = %d\n", n, i, (n * i));
        n *= i;
    }
}