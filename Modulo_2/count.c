//Codigo que lê +, -, * ou / e dá o valor solicitado dependendo do numero
#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");
    float n1 = 0, n2 = 0, soma = 0;
    int o = 0;
    char *letter;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite a operacao que deseja: \n1 for +\n2 for -\n3 for *\n4 for /\n");
    do{
        printf("Digite: ");
        scanf("%d", &o);
    }while(o < 1 || o > 4);
    switch (o){
    case 1:
        soma = n1 + n2;
        letter = "soma";
        break;
    
    case 2:
        soma = n1 - n2;
        letter = "subtração";
        break;
    
    case 3:
        soma = n1 * n2;
        letter = "multiplicacao";
        break;

    case 4:
        soma = n1 / n2;
        letter = "divisao";
        break;
    }
    system("cls");  // Limpa a tela no Windows
    printf("A %s entre %.2f e %.2f e %.2f", letter, n1, n2, soma);
}