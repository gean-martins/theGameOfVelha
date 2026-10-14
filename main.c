#include "tgov.h"

int main(){

    char tabuleiro[L][C];
    bool playerX = true;
    bool keepPlaying = true;
    bool invalidPosition;
    bool invalidOptionState;
    int position; //posicao digitada pelo usuário
    int convertedPosition[2]; //posicao convertida, será usada para alterar a matriz
    int stateOpt;
    int cheatOpt;

    //preenche o tabuleiro com espaço em branco
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){

            tabuleiro[i][j] = ' ';
        }
    }

    while (keepPlaying){
        system("clear");
        
        printTabuleiro(tabuleiro);
        
        //pergunta se o jogador quer jogar normalmente ou trapacear
        do{
            printf("[1] - Jogar em uma posicao do tabuleiro.\n");
            printf("[2] - Trapacear.\n");
            printf("Digite a opcao desejada: ");
            scanf("%d", &stateOpt);

            invalidOptionState = checkValidOptionForState(stateOpt);
            
        } while (invalidOptionState);
        
        if(stateOpt == 1){
            //loop para [jogar normalmente]
            do{
                if (playerX){
                    printf("Digite uma posicao para o jogador X: \n");
                } else{
                    printf("Digite uma posicao para o jogador O: \n");
                }
    
                scanf("%d", &position);
                
                if (position < 1 || position > 9){
                    invalidPosition = true;
                    printf("Tentativa de jogar fora do tabuleiro, tente novamente...\n");
                } else {
                    convertPosition(position, convertedPosition);
                    invalidPosition = chekBlankPosition(convertedPosition, tabuleiro);
                }
                
            } while (invalidPosition);
            
            makeChangeOnTab(tabuleiro, convertedPosition, playerX);
        } else { //loop da trapaça
//            do{
//                printf("---- LISTA DE TRAPACAS ----\n");
//                printf("[1] - [bit-flip]       - (Vire o jogo!)\n");
//                printf("[2] - [trixie]         - (Advinhe o numero aleatorio e ganhe instantaneamente!)\n");
//                printf("[3] - [random]         - (Reinicie o jogo com um 'X' e um 'O' já posicionados!)\n");
//                printf("[4] - [pass-or-repass] - (Passe a vez para o outro jogador!)\n");
//                printf("[5] - [mines]          - (Plante uma bomba no tabuleiro!)\n");
//                printf("[6] - [AI]             - (Deixe o computador jogar por 1 turno no seu lugar)\n");
//                printf("Escolha a trapaca desejada:");
//                scanf("%d", &cheatOpt);
//            } while (condition);
            
        }

        //passa a vez para o outro jogador
        if(playerX){
            playerX = false;
        } else {
            playerX = true;
        }
        
        //verificar se o tabuleiro está cheio ou se alguém ganhou para encerrar o jogo
        keepPlaying = checkFullTab(tabuleiro);
        keepPlaying = checkVictoryCase(tabuleiro);
    }
    
    system("clear");
    printTabuleiro(tabuleiro);
    printf("JOGO FINALIZADO!\n");

    return 0;
}
