#include <stdio.h>

int separar(){
    
}
int main(void){
    long long i = 4532778771095; // Número do cartão (Esse número é válido: 4532778771095)

    // Vendo qual a ordem do digito do cartão 
    long long n16 = i % 10;//0
    long long n15 = (i % 100) / 10;//0
    long long n14 = (i % 1000) / 100;//0
    long long n13 = (i % 10000) / 1000;//5
    long long n12 = (i % 100000) / 10000;//9
    long long n11 = (i % 1000000) / 100000;//0
    long long n10 = (i % 10000000) / 1000000;//1
    long long n9 = (i % 100000000) / 10000000;//7
    long long n8 = (i % 1000000000) / 100000000;//7
    long long n7 = (i % 10000000000) / 1000000000;//8
    long long n6 = (i % 100000000000) / 10000000000;//7
    long long n5 = (i % 1000000000000) / 100000000000;//7
    long long n4 = (i % 10000000000000) / 1000000000000;//2
    long long n3 = (i % 100000000000000) / 10000000000000;//3
    long long n2 = (i % 1000000000000000) / 100000000000000;//5
    long long n1 = (i % 10000000000000000) / 1000000000000000;//4

    if ((n1 == 0 && n2 == 0 && n3 == 0 && n4 == 4)){ //Dessa forma quer dizer que o cartão tem 13 dígitos
        n1 = n4; n2 = n5; n3 = n6; n4 = n7; n5 = n8; n6 = n9; n7 = n10; n8 = n11; n9 = n12; n10 = n13; n11 = n14; n12 = n15; n13 = n16; n14 = 0; n15 = 0; n16 = 0;
        char banco[15] = "VISA"; //VISA pode ter 13 ou 16 dígitos
        printf("%s \n", banco);//Imprime de qual marca de pagamento é o cartão
        n12 *= 2; n10 *= 2; n8 *= 2; n6 *= 2; n4 *= 2; n2 *= 2; //Multiplica os números do cartão por 2, começando pelo penúltimo
        printf("%d \n", n12);
        if (n12 >= 10){
            int v1 = n12 % 10;
            int v2 = (n12 % 100)/10;
            int soma1 = 0;
            soma1 += v1 + v2;
            printf("%d \n", n10);
        }
        if (n10 >= 10){
            int v1 = n12 % 10;
            int v2 = (n12 % 100)/10;
            int soma1 = 0;
            soma1 += v1 + v2;
            printf("%d \n", soma1);
        }
    }
    else{
        if (n1 == 0 && n2 == 3 && (n3 == 4 || n3 == 7)){ //Dessa forma quer dizer que o cartão tem 15 dígitos
            n1 = n2; n2 = n3; n3 = n4; n4 = n5; n5 = n6; n6 = n7; n7 = n8; n8 = n9; n9 = n10; n10 = n11; n11 = n12; n12 = n13; n13 = n14; n14 = n15; n15 = n16; n16 = 0;
            n14 *= 2; n12 *= 2; n10 *= 2; n8 *= 2; n6 *= 2; n4 *= 2; n2 *= 2;
            char * banco = "AMEX"; //Imprime de qual marca de pagamento é o cartão
            printf("%s \n", banco);//Amex tem 15 dígitos
            printf("%d \n", n2);
        }
        else{
            if (n1 == 5 && (n2 == 1 || n2 == 2 || n2 == 3 || n2 == 4 || n2 == 5)){ // isso quer dizer que o MASTERCARD começa sempre com 51, 52, 53, 54 e 55
                printf("MASTERCARD \n"); //MASTERCARD tem 16 dígitos
                n15 *= 2; n13 *= 2; n11 *= 2; n9 *= 2; n7 *= 2; n5 *= 2; n3 *= 2; n1 *= 2;
                printf("%d \n", n1);
            }
            else{
                if (n1 == 4){
                    char * banco = "VISA";
                    printf("%s \n", banco);
                }
            }
        }
    }




    // Exibe os números do cartão e a soma modifcação
    printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld \n", 
           n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);
}
