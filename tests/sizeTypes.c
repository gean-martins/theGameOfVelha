#include <stdio.h>
#include <stdbool.h>

int main(){

    char matriz[3][3];

    printf("Tamanho de um booleano: %ld\n", sizeof(bool));
    printf("Tamanho de um inteiro: %ld\n", sizeof(int));
    printf("Tamanho da matriz: %ld\n", sizeof(matriz));

    return 0;
}
