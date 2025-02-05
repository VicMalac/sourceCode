#include <stdio.h>



//corrigir

int main (void){
    char *s;
    printf("Input: ");
    scanf("%ms", s);
    printf("Output: ");

    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);  // Imprime cada caractere da string
    }
}