#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char alfa[30], texto[100]; //Aceita somente 26 caracteres
    char ciframai[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char ciframin[] = {"abcdefghijklmnopqrstuvwxyz"};
    int var;
    
    do {
        printf("Digite a sua versao do alfabeto: ");
        fgets(alfa, sizeof(alfa), stdin); 
    } while (isdigit(alfa));
    
    printf("Texto que sera criptografado: ");
    fgets(texto, sizeof(texto), stdin);

    int num = 0;

    for (int i = 0, n = strlen(texto); i < n; i ++){
        if (texto[i] == ' ' || texto[i] == '!' || texto[i] == '?' || texto[i] == '.' || texto[i] == ',' || isdigit(texto[i])) {
            printf("%c", texto[i]);
            continue;
        }

        if (texto[i] >= 'a' && texto[i] <= 'z'){
            num = 0;
            while (ciframin[num] != texto[i]){
                num++;
                }

            printf("%c", tolower(alfa[num]));
        }
        else{
            if(texto[i] >= 'A' && texto[i] <= 'Z'){
                num = 0;
                while (ciframin[num]!= tolower(texto[i])){
                    num++;
                    }
                printf("%c", toupper(alfa[num]));
            }
        }
    }
}