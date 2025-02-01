//Codigo que lê +, -, * ou / e dá o valor solicitado dependendo do numero
#include <stdio.h>

int main (){
    int n1 = 0, n2 = 0, o = 1;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    do{
        printf("Digite a operacao que deseja: \n1 for +\n2 for -\n3 for *\n4 for /\nDigite:");
        scanf("%c", &o);
    }while(o );
}