/*
    Armazena todas as implementações das funções responsáveis para o funcionamento das trapaças 
    do jogo da velha
*/

#include "tgov.h"

void cheatRouter(int opt, char tab[L][C], bool* winWithTrixie, bool playerX){

    switch (opt){
    case 1:
        bitFlip(tab);
        break;
    
    case 2:
        *winWithTrixie = trixie();
        break;
    
    case 3:
        randomCheat(tab, playerX);
        break;

    case 4:
        //é pra fazer nada mesmo
        break;

    case 5:
        //do something...
        break;

    case 6:
        ai(tab, playerX);
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

bool trixie(){

    int userNumber;
    int trixieNumber;
    bool invalidNumber;

    system("clear");

    printf("Eu sou a grande e poderosa TRIXIE!\n");
    sleep(3);
    printf("E se voce advinhar o numero que eu estou pensando, você ganha o jogo na hora!\n");
    sleep(5);

    do{
        printf("Digite um numero de 1 a 6: ");
        scanf("%d", &userNumber);
        if(userNumber >= 1 && userNumber <= 6){
            invalidNumber = false;
        } else {
            printf("Ei! Eh pra tentar adivinhar um numero de 1 a 6, tenta de novo...\n");
            invalidNumber = true;
        }

    } while (invalidNumber);

    printf("O numero que eu estou pensando eh");
    fflush(stdout);
    for(int i = 0; i < 5; i++){
        sleep(1);
        printf(".");
        fflush(stdout);
    }

    trixieNumber = (rand() % 6) + 1;
    printf("\n%d!\n", trixieNumber);
    sleep(2);

    if(trixieNumber == userNumber){
        printf("Voce acertou o numero que eu estava pensando!\n");
        sleep(4);
        return true;
    } else {
        printf("Voce errou o numero que eu estava pensando, quem sabe na proxima...\n");
        sleep(4);
        return false;
    }
}

void ai(char tab[L][C], bool playerX){

    int randomPositions[2];
    bool invalidRandomPositions;

    do{
        randomPositions[0] = rand() % 3;
        randomPositions[1] = rand() % 3;

        invalidRandomPositions = chekBlankPosition(randomPositions, tab, false);
    } while (invalidRandomPositions);
    
    makeChangeOnTab(tab, randomPositions, playerX);
}

void randomCheat(char tab[L][C], bool playerX){

    clearTabuleiro(tab);
    ai(tab, playerX);
    playerX = switchPlayer(playerX);
    ai(tab, playerX);
}
