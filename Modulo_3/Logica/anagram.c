#include <stdio.h>

void removerElemento(char arr[], int *n, char valor) {
    int i, j;
    for (i = 0; i < *n; i++) {
        if (arr[i] == valor) {  // Encontrou o valor a ser removido
            for (j = i; j < *n - 1; j++) {
                arr[j] = arr[j + 1];  // Desloca os elementos para a esquerda
            }
            (*n)--;  // Reduz o tamanho do array
               // Remove apenas a primeira ocorrência
        }
    }
}

void imprimirArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main() {
    char arr[] = {"testeeeeee"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    imprimirArray(arr, n);

    removerElemento(arr, &n, 'e');  // Removendo o número 3

    printf("Array apos remocao: ");
    imprimirArray(arr, n);

    return 0;
}


//Verificando Anagramas: Crie um programa que leia duas strings e determine se uma é anagrama da outra (isto é, se as duas têm as mesmas letras, mas em ordens diferentes).

#include <stdio.h>

int main (void) {
    char str1[100], str2[100];

    printf("Digite uma palavra: ");
    scanf("%s", &str1);
    printf("Digite outra palavra: ");
    scanf("%s", &str2);
    printf("%s %s", str1, str2);

    
}