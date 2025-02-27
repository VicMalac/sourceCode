//Programa que transforma minusculas em maiusculas
#include <stdio.h>
#include <string.h> //Biblioteca para usar o strlen que descobre o tamanho da string digitada
#include <ctype.h>

int main(void){
    char word[100];
    printf("Before: ");
    fgets(word, sizeof(word), stdin);

    printf("After: ");
    for (int i = 0, n = strlen(word); i < n; i ++){
        printf("%c", toupper(word[i])); //toupper só aceita caracteres unicos e não strings inteiras, por isso sempre deve estar dentro de um for loop para funcionar e imprimir caractere por caractere
    }
}