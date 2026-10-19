/*
    Armazena todas as implementações das funções responsáveis para o funcionamento das trapaças 
    do jogo da velha
*/

#include "tgov.h"

void cheatRouter(int opt, char tab[L][C], bool* winWithTrixie){

    switch (opt){
    case 1:
        bitFlip(tab);
        break;
    
    case 2:
        //do something...
        break;
    
    case 3:
        //do something...
        break;

    case 4:
        //é pra fazer nada mesmo
        break;

    case 5:
        //do something...
        break;

    case 6:
        //do something...
        break;
    }
}

void bitFlip(char tab[L][C]){
    
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            if(tab[i][j] == 'X'){
                tab[i][j] = 'O';
            } else if(tab[i][j] == 'O'){
                tab[i][j] = 'X';
            }
        }
    }
}
