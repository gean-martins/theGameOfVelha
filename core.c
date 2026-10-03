/*
    Armazena todas as implementações das funções responsáveis para o funcionamento básico 
    do jogo da velha
*/

#include "tgov.h"

void printTabuleiro(char tab[L][C]){

    int k = 1;

    printf("+---+---+---+\n");

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){

            if(tab[i][j] == ' '){
                printf("| %d ", k);
            } else{
                printf("| %c ", tab[i][j]);
            }         
        
            k++;
        }
        printf("|\n");
        printf("+---+---+---+\n");
    }
}
