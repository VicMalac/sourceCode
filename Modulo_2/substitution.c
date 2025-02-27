/*Implemente um programa que implemente uma cifra de substituição, conforme a seguir.

$ ./substitution JTREKYAVOGDXPSNCUIZLFBMWHQ
texto simples: HELLO
texto cifrado: VKXXN*/

//Get the key / Pega uma chave
//* Validate the key / Valida essa chave
//? Get the plaintext / Pega o texto que quero codificar
//TODO Encipher / Codifica
//! Print ciphertext / Imprime na tela o texto codificado

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
    char alfa[26], texto[100]; //Aceita somente 26 caracteres
    char ciframai[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O','P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char ciframin[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o','p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int var;

    

    printf("Texto que sera criptografado: ");
    fgets(texto, sizeof(texto), stdin); //text[i] == 'h'
    printf("Digite a sua versao do alfabeto: ");
    scanf("%s", alfa);

    int num = 0; //tentar com while depois

    for (int i = 0, n = strlen(texto); i < n; i ++){
        //Fazer uma condição para ver se é uma letra espaço ou número, se não for letra nada muda, se for é só mudar//texto que vou decifrar é abc para xyz
        //if (texto[i] == ' ' || texto[i] == '!', || texto[i] == '.' || texto[i] == ',' || texto[i] == '?')

        //se for numero ou espaço não faço nada
            // Primeiro verifica se é um caractere que deve ser mantido
        if (texto[i] == ' ' || texto[i] == '!' || texto[i] == '?' || texto[i] == '.' || texto[i] == ',' || isdigit(texto[i])) {
            printf("%c", texto[i]);
            continue;
        }

        if (texto[i] >= 'a' && texto[i] <= 'z'){
            num = 0;
            while (ciframin[num] != texto[i]){
                num++;
                }

            printf("%c", alfa[num]);
        }
        else{
                num = 0;
                while (ciframai[num] != toupper(texto[i])){
                    num++;
                    }
        
                printf("%c", toupper(alfa[num]));
        }
        //Aqui preciso fazer alguma forma de mudar a letra, se eu digitar cdb na key, e digitar abc no input, deve aparecer cdb

        //se o a letra for identica você executa, se não pula para a proxima, ele verifica o alfa[0]
        //Se eu pego uma letra ex: n, eu faço uma verificação, no ciframin, ciframin[0] == texto[0]? se sim, uma variavel, recebe 0
        //senão, proximo, ciframin[1] == texto[0], se sim, uma variavel, recebe 1 se não, proximo
    }
}