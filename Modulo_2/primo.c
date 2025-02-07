/*"Para identificar um número primo devemos dividi-lo sucessivamente por números primos como: 2, 3, 5. . . 
e verificar se a divisão é exata (em que o resto é zero) ou não exata (onde o resto é diferente de zero).
Se o resto da divisão for zero o número não é primo.
Se nenhum resto for zero, o número é primo.
Para dividir um número de forma mais rápida podemos utilizar os critérios de divisibilidade, mas somente quando 
os divisores forem números primos, como 2, 3, 5 e 11. Recorde-se que:"
Um número é divisível por 2 quando terminado em termos pares, ou seja, 0, 2, 4, 6. . .
Um número será divisível por três quando a soma dos seus algarismos for divisível por 3.
Um número será divisível por 5 quando o seu último algarismo for 5 ou 0.*/



//NAO FINALIZADO 



#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");
    int i = 3;
    printf("Digite um numero para descobrir se ele e primo ou nao: ");
    scanf("%d", &i);
    if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0 || i % 11 == 0 || i % 13 == 0 || i % 17 == 0 || i % 19 == 0 || i % 23 == 0){
        system("cls");
        printf("%d nao e um numero primo.", i);
    }
    else{
        system("cls");
        printf("%d e um numero primo.", i);
    }
}