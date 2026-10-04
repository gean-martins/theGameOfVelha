#include "tgov.h"

int main(){

    char tabuleiro[L][C];
    bool playerX = true;
    bool keepPlaying = true;

    //preenche o tabuleiro com espaço em branco
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){

            tabuleiro[i][j] = ' ';
        }
    }

    while (keepPlaying){
        
        printTabuleiro(tabuleiro);
        
    }
    
    return 0;
}
