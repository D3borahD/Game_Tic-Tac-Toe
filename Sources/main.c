#include <stdio.h>

#include <string.h>
#include "Headers/chooseCase.h"
#include "Headers/roundPlayer.h"
#include "Headers/boardView.h"
#include "Headers/endMessage.h"
#include "Headers/winner.h"
#include "Headers/main.h"

#define TAILLE_MAX 10



/*printf("pointeur %d \n", pointeurCaseNumber);  // return l'adresse de la variable (177450)
 printf("&pointeur %d \n", &pointeurCaseNumber); // return l'adress du pointeur (3)
 printf("*pointeur %d", *pointeurCaseNumber);  // return valeur de la variable*/

/*
 * TO DO :
 * - gestion de l'erreur de saisie (saisie d'un lettre = fin du jeu)
 * - améliorer gestion du role player
 * - améliorer la gestion du calcul de victoire
 * - faire un IA
 * - améliorer le board (A1)
 * - gestion du message en cas de nul
*/

int main(int argc, const char * argv[]) {

    char board[TAILLE_MAX]={'.', '.', '.', '.', '.', '.', '.', '.', '.', '\0'};






    int caseNumber=0;
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
        winner(&player, &board);
        if(player == 2 || player == 3) {
            break;
        }
    }
    boardView(board);
   // printf("La partie est terminée, personne n'a gagné\n");

    endMessage(player);

    return 0;
}


