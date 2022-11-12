//
// Created by Deborah DOUILLET on 15/10/2022.
//

#include <stdio.h>
#include "../Headers/chooseCase.h"


void chooseCase(int *player, int *caseNumber, char board[10]){
    int numberCase = *caseNumber - 1;
    if(board[numberCase] != '.'){
        printf("Cette case n'est pas disponible !\n\n");
    } else {
        if(*player == 1) {
            board[numberCase] = 'x';
            *player = 2;
        } else {
            board[numberCase] = 'o';
            *player = 1;
        }
    }
}