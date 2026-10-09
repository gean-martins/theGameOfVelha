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

bool chekBlankPosition(int position[], char tab[L][C]){

    if (tab[position[0]][position[1]] == ' '){
        return false;
    } else {
        printf("Tentativa de sobrescrita de uma jogada anterior, tente novamente...\n");
        return true;
    }
}

void convertPosition(int position, int v[]){

    switch (position){
    case 1:
        v[0] = 0; 
        v[1] = 0;
        break;

    case 2:
        v[0] = 0;    
        v[1] = 1;
        break;

    case 3:
        v[0] = 0;
        v[1] = 2;
        break;

    case 4:
        v[0] = 1;
        v[1] = 0;
        break;

    case 5:
        v[0] = 1;
        v[1] = 1;
        break;
    
    case 6:
        v[0] = 1;
        v[1] = 2;
        break;

    case 7:
        v[0] = 2;
        v[1] = 0;
        break;

    case 8:
        v[0] = 2;
        v[1] = 1;
        break;

    case 9:
        v[0] = 2;
        v[1] = 2;
        break;
    }
}

void makeChangeOnTab(char tab[L][C], int v[], bool playerX){

    if(playerX){
        tab[v[0]][v[1]] = 'X';
    } else{
        tab[v[0]][v[1]] = 'O';
    }
}

bool checkVictoryCase(char tab[L][C]){

    //verifica as linhas ---------------------------------------------------
    if(tab[0][0] != ' ' && tab[0][0] == tab[0][1] && tab[0][1] == tab[0][2]){
        return false;
    }

    if(tab[1][0] != ' ' && tab[1][0] == tab[1][1] && tab[1][1] == tab[1][2]){
        return false;
    }

    if(tab[2][0] != ' ' && tab[2][0] == tab[2][1] && tab[2][1] == tab[2][2]){
        return false;
    }

    //verifica as colunas --------------------------------------------------
    if(tab[0][0] != ' ' && tab[0][0] == tab[1][0] && tab[1][0] == tab[2][0]){
        return false;
    }

    if(tab[0][1] != ' ' && tab[0][1] == tab[1][1] && tab[1][1] == tab[2][1]){
        return false;
    }

    if(tab[0][2] != ' ' && tab[0][2] == tab[1][2] && tab[1][2] == tab[2][2]){
        return false;
    }

    //verifica as diagonais -------------------------------------------------
    if(tab[0][0] != ' ' && tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2]){
        return false;
    }

    if(tab[0][2] != ' ' && tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0]){
        return false;
    }

    return true;
}

bool checkFullTab(char tab[L][C]){

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            if(tab[i][j] == ' '){
                return true;
            }
        }
    }

    return false;
}
