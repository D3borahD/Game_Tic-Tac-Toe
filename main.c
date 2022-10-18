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



        chooseCase(&player, &caseNumber, &board);

      /*  if (board[numberCase] == '.'){
            printf("je suis déjà pris");
        }*/






    }
    boardView(board);
    printf("La partie est terminée, personne n'a gagné\n");

    // rendre la variable dynamique !!!!!
    endMessage(2);


    return 0;
}


