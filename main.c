#include <stdio.h>

#define L 3
#define C 3

int main(){

    char tabuleiro[L][C];

    //preenche o tabuleiro com espaço em branco
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){

            tabuleiro[i][j] = " ";
        }
    }

    return 0;
}
