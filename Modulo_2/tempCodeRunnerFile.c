#include <stdio.h>

    int main (int argc, char *argv[]){
        if (argc != 2){
            printf("Non argument receive. \n");
            return 1;
        }
        printf("Hello, %s", argv[1]);
        return 0;
    }