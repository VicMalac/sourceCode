#include <stdio.h>

int main(void){
    long long i = 378282246310005; // Número do cartão

    // Vendo qual a ordem do digito do cartão 
    long long n16 = i % 10;
    long long n15 = (i % 100) / 10;
    long long n14 = (i % 1000) / 100;
    long long n13 = (i % 10000) / 1000;
    long long n12 = (i % 100000) / 10000;
    long long n11 = (i % 1000000) / 100000;
    long long n10 = (i % 10000000) / 1000000;
    long long n9 = (i % 100000000) / 10000000;
    long long n8 = (i % 1000000000) / 100000000;
    long long n7 = (i % 10000000000) / 1000000000;
    long long n6 = (i % 100000000000) / 10000000000;
    long long n5 = (i % 1000000000000) / 100000000000;
    long long n4 = (i % 10000000000000) / 1000000000000;
    long long n3 = (i % 100000000000000) / 10000000000000;
    long long n2 = (i % 1000000000000000) / 100000000000000;
    long long n1 = (i % 10000000000000000) / 1000000000000000;

    if (n1 == 0 && n2 == 0 && n3 == 0 && n4 == 4){
        n1 = n4; n2 = n5; n3 = n6; n4 = n7; n5 = n8; n6 = n9; n7 = n10; n8 = n11; n9 = n12; n10 = n13; n11 = n14; n12 = n15; n13 = n16; n14 = 0; n15 = 0; n16 = 0;
        int temp = 15;
        char banco[15] = "VISA";
        printf("%s \n", banco);
    }
    else{
        if (n1 == 0 && n2 == 3 && (n3 == 4 || n3 == 7)){
            n1 = n2; n2 = n3; n3 = n4; n4 = n5; n5 = n6; n6 = n7; n7 = n8; n8 = n9; n9 = n10; n10 = n11; n11 = n12; n12 = n13; n13 = n14; n14 = n15 = n16; n16 = 0;
            char * banco = "AMEX"; //Amex tem 15 dígitos
            printf("%s \n", banco);
        }
        else{
            if (n1 == 5 && (n2 == 1 || n2 == 2 || n2 == 3 || n2 == 4 || n2 == 5)){
                printf("MASTERCARD \n");
            }
        }
    }




    // Exibe os números do cartão e a soma modifcação
    printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld \n", 
           n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);
}
