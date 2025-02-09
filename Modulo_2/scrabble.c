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
    for (int i = 0, n = strlen(pl1); i < n; i++){
        tolower(pl1[i]);
        if (pl1[i] >= 'a' && pl1[i] <= 'z'){
            pts1 += points[pl1[i] - 'a'];
        }
    }
    for (int i = 0, n = strlen(pl2); i < n; i++){
        tolower(pl2[i]);
        if (pl2[i] >= 'a' && pl2[i] <= 'z'){
            pts2 += points[pl2[i] - 'a'];
        }
    }

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