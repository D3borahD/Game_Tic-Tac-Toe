//
// Created by Deborah DOUILLET on 15/10/2022.
//

#include <stdio.h>
#include "../Headers/boardView.h"
#include "../Headers/main.h"


void boardView(char board[]) {
    printf("\t\t\t%c|%c|%c\n "
           "\t\t\t%c|%c|%c\n "
           "\t\t\t%c|%c|%c\n\n",
           board[0],board[1],board[2],
           board[3],board[4],board[5],
           board[6],board[7],board[8]);
}

