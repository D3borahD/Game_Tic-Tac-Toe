//
// Created by Deborah DOUILLET on 15/10/2022.
//
#include <string.h>
#include <stdio.h>
#include "chooseCase.h"

void chooseCase(int *player, int *caseNumber, char board[10]){
    switch(*caseNumber){
        case 1 :
            if (*player == 1) {
                board[0] = 'x';
                *player = 0;
            } else {
                board[0] = 'o';
                *player = 1;
            }
            break;
        case 2 :
            if (*player == 1) {
                board[1] = 'x';
                *player = 0;
            } else {
                board[1] = 'o';
                *player = 1;
            }
            break;
        case 3 :
            if (*player == 1) {
                board[2] = 'x';
                *player = 0;
            } else {
                board[2] = 'o';
                *player = 1;
            }
            break;
        case 4 :
            if (*player == 1) {
                board[3] = 'x';
                *player = 0;
            } else {
                board[3] = 'o';
                *player = 1;
            }
            break;
        case 5 :
            if (*player == 1) {
                board[4] = 'x';
                *player = 0;
            } else {
                board[4] = 'o';
                *player = 1;
            }
            break;
        case 6 :
            if (*player == 1) {
                board[5] = 'x';
                player = 0;
            } else {
                board[5] = 'o';
                *player = 1;
            }
            break;
        case 7 :
            if (*player == 1) {
                board[6] = 'x';
                *player = 0;
            } else {
                board[6] = 'o';
                *player = 1;
            }
            break;
        case 8 :
            if (*player == 1) {
                board[7] = 'x';
                *player = 0;
            } else {
                board[7] = 'o';
                *player = 1;
            }
            break;
        case 9 :
            if (*player == 1) {
                board[8] = 'x';
                *player = 0;
            } else {
                board[8] = 'o';
                *player = 1;
            }
            break;
        default:
            printf("je ne suis pas une case");
            break;
    }
}