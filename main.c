#include <stdio.h>
#include "chooseCase.h"
#include "roundPlayer.h"
#include "boardView.h"


#define TAILLE_MAX 10

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
        // saisir du choix de case pour le joueur
        chooseCase(&player, &caseNumber, &board);
    }
    boardView(board);
    printf("La partie est terminée");







        /*printf("pointeur %d \n", pointeurCaseNumber);  // return l'adresse de la variable (177450)
        printf("&pointeur %d \n", &pointeurCaseNumber); // return l'adress du pointeur (3)
        printf("*pointeur %d", *pointeurCaseNumber);  // return valeur de la variable*/




    return 0;
}


