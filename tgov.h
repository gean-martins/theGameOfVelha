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

//define o tamanho do tabuleiro
#define L 3
#define C 3

//FUNÇÕES PRINCIPAIS _________________________________________________________________________
void printTabuleiro(char tab[L][C]);
void convertPosition(int position, int v[]);
void makeChangeOnTab(char tab[L][C], int v[], bool playerX);

#endif
