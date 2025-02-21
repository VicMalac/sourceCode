/*Implemente um programa que criptografa mensagens usando a cifra de César, conforme a seguir.

$ ./caesar 13
plaintext: HELLO
ciphertext: URYYB*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    system("cls");
    int caesar = 0, text;
    char phrase[100];

    printf("plaintext: ");
    scanf(" %[^\n]", phrase);

    printf("number: ");
    scanf("%d", &caesar);
    printf("ciphertext: ");
    for(int i = 0, n = strlen(phrase); i < n; i++){
        if (phrase[i] + caesar > 'z'){ // 'a' = 97  &&  'A' = 65
            caesar = caesar - ('z' - phrase[i]);
            printf("%c", 'a' + caesar);
        }
        else{
                printf("%c", phrase[i] + caesar);
        }
    }


    /*if (argc == 1 || (argv >= 'a' && argv <= 'z') || (argv >= 'A' && argv <= 'Z')){
        printf("Need an numeric argument. ");
        return 0;
    }
    else {
        int caesar = 0;
        //printf("plaintext: ");
        //scanf("%d", &caesar);
        printf("%c", argv[1]);
    }*/
}

//Get the key
//