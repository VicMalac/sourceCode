#include <stdio.h>
/*Fazer um programa em "C" que lê o preço de um produto e inflaciona esse
preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a
100.*/
int main(void){
    float price = 1;

    do{
        printf("Product price: ");
        scanf("%f", &price);
    }while(price <= 0);

    if (price < 100){
        price = price * 1.1;
    }
    if (price >= 100){
        price = price * 1.2;
    }
    printf("The new price: R$%.2f\n", price);
}