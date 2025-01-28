#include <stdio.h>

// Função para separar os dígitos de um número maior que 9 e somá-los
int separar_digitos(int valor) {
    if (valor >= 10) {
        return (valor % 10) + (valor / 10);  // Se maior que 9, soma os dois dígitos
    }
    return valor;  // Caso contrário, retorna o valor como está
}

int main(void){
    long long i = 378734493671000; // Número do cartão

    // Extração dos dígitos individuais do cartão de créditoo
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

    // Dobrando os dígitos alternados e separando os dígitos maiores que 9
    if (n1 == 0){
        n1 = n2;
        n2 = n3;
        n3 = n4;
        n5 = n6;
        n6 = n7;
        n7 = n8;
        n8 = n9;
        n9 = n10;
        n10 = n11;
        n11 = n12;
        n12 = n13;
        n13 = n14;
        n14 = n15;
        n15 = n16;
        n16 = 0;
    }

    int s1 = separar_digitos(n15 * 2); 
    int s2 = separar_digitos(n13 * 2); 
    int s3 = separar_digitos(n11 * 2); 
    int s4 = separar_digitos(n9 * 2);  
    int s5 = separar_digitos(n7 * 2);  
    int s6 = separar_digitos(n5 * 2);  
    int s7 = separar_digitos(n3 * 2);  
    int s8 = separar_digitos(n1 * 2);  

    if (n16 == 0){
        
    }
    int soma1 = s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8;

    // Soma dos dígitos nas posições pares (não multiplicados)
    int soma2 = n2 + n4 + n6 + n8 + n10 + n12 + n14 + n16;

    // Soma total
    int soma_total = soma1 + soma2;

    // Verifica se a soma é múltiplo de 10 (cartão válido)
    if (soma_total % 10 == 0) {
        printf("Válido \n");
    } else {
        printf("Inválido \n");
    }

    // Identificação do tipo de cartão
    if (n1 == 3 && (n2 == 4 || n2 == 7)) {
        printf("AMEX \n");
    } else if (n1 == 5 && (n2 >= 1 && n2 <= 5)) {
        printf("MASTERCARD\n");
    } else if (n1 == 4) {
        printf("VISA \n");
    }

    // Exibe os números do cartão e a soma modifcação
    printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld soma: %d \n", 
           n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, soma_total); //entendi
}
