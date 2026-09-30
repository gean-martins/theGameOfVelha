#include "tgov.h"

int main(){

    char tabuleiro[L][C];

    //preenche o tabuleiro com espaço em branco
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){

            tabuleiro[i][j] = " ";
        }
    }

    printTabuleiro(tabuleiro);

    return 0;
}
