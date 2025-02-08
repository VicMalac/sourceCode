#include <stdio.h>
#include <ctype.h>

int main(void){
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char p[2][100];
    printf("Player 1: ");
    scanf("%[^\n]", p[0]);

    printf("Player 2: ");
    scanf("%[^\n]", p[1]);
}
int calculate_winner(char array[]){
    
}