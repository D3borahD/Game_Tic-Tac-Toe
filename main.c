#include <stdio.h>
//#include "chooseCase.h"
#include "roundPlayer.h"
#include "boardView.h"



int main(int argc, const char * argv[]) {

    char board[]={'.', '.', '.', '.', '.', '.', '.', '.', '.', '\0'};

    int caseNumber=0;
    int *pointeurCaseNumber = &caseNumber;

    int player = 0;

    printf("Bienvenue sur le Tic Tac Toe !\n\n");

    // affiche le plateau de jeu
    boardView(board);

    // affiche le tour du joueur
    roundPlayer(&player);

     scanf("%d", &caseNumber);
     boardView(board);

    //chooseCase(&player, &caseNumber, &board);

        /*printf("pointeur %d \n", pointeurCaseNumber);  // return l'adresse de la variable (177450)
        printf("&pointeur %d \n", &pointeurCaseNumber); // return l'adress du pointeur (3)
        printf("*pointeur %d", *pointeurCaseNumber);  // return valeur de la variable*/




    return 0;
}


