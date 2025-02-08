#include <stdio.h>

    int main (int argc, char *argv[]){
        if (argc != 2){
            printf("Non argument receive. \n");
            return 1;
        }
        printf("Hello, %s", argv[1]);// Utilize o comando "$LASTEXITCODE" no terminal após a execução do programa para ver se o valor é 0 ou 1
        return 0;
    }