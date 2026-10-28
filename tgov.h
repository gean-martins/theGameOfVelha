/*
    Armazena todas as assinaturas de funções do jogo, tanto as de funcionamento básico quanto
    as de trapaças
*/

#ifndef TGOV_H
#define TGOV_H

//importa as bibliotecas nescessárias
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//define o tamanho do tabuleiro
#define L 3
#define C 3

//define a quantidade de cheats que o jogo possui
#define QTD_OF_CHEATS 6

//FUNÇÕES PRINCIPAIS _________________________________________________________________________
void printTabuleiro(char tab[L][C]);
void convertPosition(int position, int v[]);
void makeChangeOnTab(char tab[L][C], int v[], bool playerX);
bool checkVictoryCase(char tab[L][C]);
bool chekBlankPosition(int position[], char tab[L][C], bool playerTrigger);
bool checkFullTab(char tab[L][C]);
void clearTabuleiro(char tab[L][C]);
bool switchPlayer(bool playerX);

//FUNÇÕES DE TRAPAÇA
bool checkValidOptionForState(int opt);
bool checkValidOptionForCheat(int opt);
void cheatRouter(int opt, char tab[L][C], bool* winWithTrixie, bool playerX);
void bitFlip(char tab[L][C]);
bool trixie();
void ai(char tab[L][C], bool playerX);
void randomCheat(char tab[L][C], bool playerX);
void mines(char tab[L][C]);
bool checkBombOnPosition(char tab[L][C], int position[]);

#endif
