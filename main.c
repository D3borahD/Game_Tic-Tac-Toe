#include <stdio.h>

#include <string.h>
#include "Headers/chooseCase.h"
#include "Headers/roundPlayer.h"
#include "Headers/boardView.h"
#include "Headers/endMessage.h"
#include "Headers/main.h"

#define TAILLE_MAX 10

/*printf("pointeur %d \n", pointeurCaseNumber);  // return l'adresse de la variable (177450)
 printf("&pointeur %d \n", &pointeurCaseNumber); // return l'adress du pointeur (3)
 printf("*pointeur %d", *pointeurCaseNumber);  // return valeur de la variable*/


int main(int argc, const char * argv[]) {


    char board[TAILLE_MAX]={'.', '.', '.', '.', '.', '.', '.', '.', '.', '\0'};

    int caseNumber=0;
    //int *pointeurCaseNumber = &caseNumber;

    int player = 1;

    printf("Bienvenue sur le Tic Tac Toe !\n\n");

    for (int i = 0; i < TAILLE_MAX-1; i++) {
        // affiche le plateau de jeu
        boardView(board);

        // affiche le tour du joueur
        roundPlayer(&player);
        scanf("%d", &caseNumber);



        chooseCase(&player, &caseNumber, &board);

        // gestion victoire
        if(board[0] == 'x' && board[1] == 'x' && board[2] == 'x' || board[0] == 'o' && board[1] == 'o' && board[2] == 'o'
           || board[3] == 'x' && board[4] == 'x' && board[5] == 'x' || board[3] == 'o' && board[4] == 'o' && board[5] == 'o'
           || board[6] == 'x' && board[7] == 'x' && board[8] == 'x' || board[6] == 'o' && board[7] == 'o' && board[8] == 'o'
           || board[0] == 'x' && board[3] == 'x' && board[6] == 'x' || board[0] == 'o' && board[3] == 'o' && board[6] == 'o'
           || board[1] == 'x' && board[4] == 'x' && board[7] == 'x' || board[1] == 'o' && board[4] == 'o' && board[7] == 'o'
           || board[2] == 'x' && board[5] == 'x' && board[8] == 'x' || board[2] == 'o' && board[5] == 'o' && board[8] == 'o'
           || board[0] == 'x' && board[4] == 'x' && board[8] == 'x' || board[0] == 'o' && board[4] == 'o' && board[8] == 'o'
           || board[2] == 'x' && board[4] == 'x' && board[6] == 'x' || board[2] == 'o' && board[4] == 'o' && board[6] == 'o'
                ) {
            printf("je vaux x\n");
            break;
        }


    }
    boardView(board);
    printf("La partie est terminée, personne n'a gagné\n");

    // rendre la variable dynamique !!!!!
    endMessage(2);


    return 0;
}


