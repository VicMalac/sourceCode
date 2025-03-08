//Contando Caracteres em uma String: Escreva um programa 
//que conte quantas vezes uma determinada letra aparece em uma string informada pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    system("cls");
    char str[10000], letter;
    int count = 0;
    printf("Digite qual letra deseja verificar: ");
    scanf("%[^\n]", &letter);

    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Digite uma string: ");
    scanf("%[^\n]", &str);

    for (int i = 0, n = strlen(str); i < n; i++) {
        if ((int)str[i] == (int)letter || (int)str[i] == (int)letter + 32 || (int)str[i] == (int)letter - 32) {
            count++;
        }
    }
    printf("Existe %d letras '%c' na sua frase. \n", count, letter);
}