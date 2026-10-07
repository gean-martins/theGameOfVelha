#include "tgov.h"

int main(){

    char tabuleiro[L][C];
    bool playerX = true;
    bool keepPlaying = true;
    bool outsideRange;
    int position; //posicao digitada pelo usuário
    int convertedPosition[2]; //posicao convertida, será usada para alterar a matriz

    //preenche o tabuleiro com espaço em branco
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){

            tabuleiro[i][j] = ' ';
        }
    }

    while (keepPlaying){
        system("clear");
        
        printTabuleiro(tabuleiro);
        
        do{
            if (playerX){
                printf("Digite uma posicao para o jogador X: \n");
            } else{
                printf("Digite uma posicao para o jogador O: \n");
            }

            scanf("%d", &position);
            
            if (position < 1 || position > 9){
                outsideRange = true;
                printf("Tentativa de jogar fora do tabuleiro, tente novamente...\n");
            } else {
                outsideRange = false;
            }
            
        } while (outsideRange);
        
        convertPosition(position, convertedPosition);
        makeChangeOnTab(tabuleiro, convertedPosition, playerX);

        //passa a vez para o outro jogador
        if(playerX){
            playerX = false;
        } else {
            playerX = true;
        }

        //verificar se o tabuleiro está completo para encerrar o jogo
        keepPlaying = continueGame(tabuleiro);
    }
    

    system("clear");
    printTabuleiro(tabuleiro);
    printf("JOGO FINALIZADO!\n");

    return 0;
}
