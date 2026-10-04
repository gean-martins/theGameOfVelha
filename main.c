#include "tgov.h"

int main(){

    char tabuleiro[L][C];
    bool playerX = true;
    bool keepPlaying = true;
    int position; //posicao digitada pelo usuário
    int convertedPosition[2]; //posicao convertida, será usada para alterar a matriz

    //preenche o tabuleiro com espaço em branco
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){

            tabuleiro[i][j] = ' ';
        }
    }

    while (keepPlaying){
        
        printTabuleiro(tabuleiro);
        if (playerX){
            printf("Digite uma posicao para o jogador X: \n");
        } else{
            printf("Digite uma posicao para o jogador O: \n");
        }
        
        scanf("%d", &position);
        convertPosition(position, convertedPosition);
        makeChangeOnTab(tabuleiro, convertedPosition, playerX);

        //passa a vez para o outro jogador
        if(playerX){
            playerX = false;
        } else {
            playerX = true;
        }

        //verificar se o tabuleiro está completo para encerrar o jogo

        system("clear");
    }
    
    return 0;
}
