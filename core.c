/*
    Armazena todas as implementações das funções responsáveis para o funcionamento básico 
    do jogo da velha
*/

#include "tgov.h"

void printTabuleiro(char tab[L][C]){

    printf("+----+----+----+\n");

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){

            printf("| %c ", tab[i][j]);
            
        }
        printf("|\n");
        printf("+----+----+----+\n");
    }
}
