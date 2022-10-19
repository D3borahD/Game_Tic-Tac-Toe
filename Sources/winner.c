//
// Created by Deborah DOUILLET on 18/10/2022.
//

#include "../Headers/winner.h"

int winner (int *player, char board[]) {
    if(board[0] == 'x' && board[1] == 'x' && board[2] == 'x'
       || board[3] == 'x' && board[4] == 'x' && board[5] == 'x'
       || board[6] == 'x' && board[7] == 'x' && board[8] == 'x'
       || board[0] == 'x' && board[3] == 'x' && board[6] == 'x'
       || board[1] == 'x' && board[4] == 'x' && board[7] == 'x'
       || board[2] == 'x' && board[5] == 'x' && board[8] == 'x'
       || board[0] == 'x' && board[4] == 'x' && board[8] == 'x'
       || board[2] == 'x' && board[4] == 'x' && board[6] == 'x')
    {
        *player = 3;
    } else if(board[0] == 'o' && board[1] == 'o' && board[2] == 'o'
        || board[3] == 'o' && board[4] == 'o' && board[5] == 'o'
        || board[6] == 'o' && board[7] == 'o' && board[8] == 'o'
        || board[0] == 'o' && board[3] == 'o' && board[6] == 'o'
        || board[1] == 'o' && board[4] == 'o' && board[7] == 'o'
        || board[2] == 'o' && board[5] == 'o' && board[8] == 'o'
        || board[0] == 'o' && board[4] == 'o' && board[8] == 'o'
        || board[2] == 'o' && board[4] == 'o' && board[6] == 'o')
    {
        *player = 2;
    }
}