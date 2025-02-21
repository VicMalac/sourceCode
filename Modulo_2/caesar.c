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
    int result;
    for(int i = 0, n = strlen(phrase); i < n; i++){
        result = 1;
        if (phrase[i] + caesar > 'z'){ // 'a' = 97  &&  'A' = 65
            result = caesar - ('z' - phrase[i]);
            printf("%c", 96 + result);
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

//Codigo correto abaixo


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_numeric(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0; // Retorna falso se encontrar um caractere não numérico
        }
    }
    return 1; // Retorna verdadeiro se for totalmente numérico
}

int main(int argc, char *argv[]) {
    // Verifica se o usuário forneceu um argumento válido
    if (argc != 2 || !is_numeric(argv[1])) {
        printf("Uso: %s <chave numerica>\n", argv[0]);
        return 1;
    }

    // Converte a chave de string para inteiro
    int key = atoi(argv[1]);

    char phrase[100];

    // Pede ao usuário uma frase de entrada
    printf("plaintext: ");
    scanf(" %[^\n]", phrase);

    printf("ciphertext: ");

    // Percorre cada caractere da string
    for (int i = 0, n = strlen(phrase); i < n; i++) {
        char c = phrase[i];

        if (isalpha(c)) { // Verifica se é uma letra
            char base = isupper(c) ? 'A' : 'a';
            printf("%c", (c - base + key) % 26 + base);
        } else {
            printf("%c", c); // Se não for letra, mantém o mesmo caractere
        }
    }

    printf("\n");
    return 0;
}
*/