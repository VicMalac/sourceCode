/*Implemente um programa que implemente uma cifra de substituição, conforme a seguir.

$ ./substitution JTREKYAVOGDXPSNCUIZLFBMWHQ
texto simples: HELLO
texto cifrado: VKXXN*/

//Get the key / Pega uma chave
//Validate the key / Valida essa chave
//Get the plaintext / Pega o texto que quero codificar
//Encipher / Codifica
//Print ciphertext / Imprime na tela o texto codificado

#include <stdio.h>

int main(void){
    char alfa[26]; //Aceita somente 26 caracteres

    printf("Digite a sua versão do alfabeto: ");
    scanf("%s", alfa);
    printf("O que quer que seja mudado")
    for (int i = 0; i < 26; i ++){ 
        //Fazer uma condição para ver se é uma letra espaço ou número, se não for letra nada muda, se for é só mudar
        printf("%c\n", alfa[i]);
        //Aqui preciso fazer alguma forma de mudar a letra, se eu digitar cdb na key, e digitar abc no input, deve aparecer cdb
    }
    //printf("%c", 122);
}