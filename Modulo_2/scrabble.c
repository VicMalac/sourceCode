#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}, pts1 = 0, pts2 = 0;
    char pl1[100], pl2[100];
    printf("Player 1: ");
    scanf(" %[^\n]", pl1);
    printf("Player 2: ");
    scanf(" %[^\n]", pl2);

    //calculo dos pontos
    for (int i = 0, n = strlen(pl1); i < n; i++){ //Aqui a variavel n recebe o tamanho da frase e a condição repete enquanto i for menor que n
        tolower(pl1[i]); //Converte os caracteres de pl1 para minusculos
        if (pl1[i] >= 'a' && pl1[i] <= 'z'){ //Basicamente se pl1 for maior do que 'a' e menor do que 'z', ambos com um valor na tabela ASCII
            pts1 += points[pl1[i] - 'a']; //'a' vale 99, então sempre que houver uma separação de caractere ele leva seu valoe, exemplo: 'c' == 101, então 101 - 99 = 2, sendo assim pts1 recebe 2
        }
    }
    for (int i = 0, n = strlen(pl2); i < n; i++){ //Repete a mesma estrutura do primeiro if mas com o array pl2
        tolower(pl2[i]);
        if (pl2[i] >= 'a' && pl2[i] <= 'z'){
            pts2 += points[pl2[i] - 'a'];
        }
    }
    //Exibição dos vencedores verificando se é maior menor ou igual um ao outro
    if (pts1 > pts2){
        printf("Player 1 wins!\n");
    }
    else{
        if (pts1 < pts2){
            printf("Player 2 wins!\n");
        }
        else{
            printf("Tie!");
        }
    }
}