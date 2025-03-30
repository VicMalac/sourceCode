#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void){
    char phrase[1000];
    int words = 1, car = 0;
    float indice = 1, L, S;
    printf("Text: ");
    scanf(" %[^\n]", phrase);
    for (int i = 0; phrase[i] != '\0'; i++){
        if(phrase[i] == ' ' && phrase[i + 1] != ' ' && phrase[i + 1] != '\0'){ 
            words++;
        }
    }

    for (int i = 0; phrase[i] != '\0'; i++){
        if (phrase[i] >= 'a' && phrase[i] <= 'z' || phrase[i] >= 'A' && phrase[i] <= 'Z'){
            car++;
        }
    }
    int sentence = 0;
    for (int i = 0; phrase[i] != '\0'; i++){
        if((phrase[i] == '!' || phrase[i] == '.' || phrase[i] == '?') && (phrase[i + 1] != '!' && phrase[i + 1] != '.' && phrase[i + 1] != '?')){ 
            sentence++;
        }
    }

    L = car * 100 / words;
    S = sentence * 100 / words;

    indice = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(indice - 0.04); //round transforma no numero inteiro mais proximo, ex: 7,4 = 7. O 0.04 serve para que numeros como 7.53 não virem 8 mas sim 7
    if (grade < 1){
        printf("Before Grade 1");
    }
    else{
        if (grade > 16){
            printf("Grade 16+");
        }
        else{
            printf("Grade %d\n", grade);
        }
    }
}