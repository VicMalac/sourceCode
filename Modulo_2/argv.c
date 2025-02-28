#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]){
    if (argc >= 2){
        for (int i = 0, n = strlen(argv[1]); i < n; i++){ //Para executar deve ir no terminal e digitar ./argv e um argumento
        printf("%c\n", argv[1][i]);
        }
    }
    else{
        printf("Need an argument."); //Se nada for digitado, só finaliza e escreve isso no terminal
    }
}