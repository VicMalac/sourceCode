#include <stdio.h>
#include <string.h>

int main(void){
    
    char s[100]; //Declara o array com tamanho até 100
    printf("Input: ");
    scanf("%[^\n]", s); //Pega um input utilizando %[^\n], tem qu ser dessa forma, tenho que entender
    printf("Output: "); //int n = strlen(s); Aplica o valor de strlen() para n, isso facilita no processamento
    for (int i = 0, n = strlen(s); i < n; i++) { //Se strlen() estivesse aqui seria desperdício de processamento //strlen() não precisa receber um tipo como int, pois no int i já declarou como int para toda a estrutura for
        printf("%c", s[i]);  // Imprime cada caractere da string
    }
}