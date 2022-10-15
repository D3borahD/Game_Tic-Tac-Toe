#include <stdio.h>
#include <string.h>
#include "chooseCase.h"

int main(int argc, const char * argv[]) {

    char board[9]={'.', '.', '.', '.', '.', '.', '.', '.', '.'};
    int caseNumber=0;
    int *pointeurCaseNumber = &caseNumber;

    int player = 1;



    printf("Bienvenue sur le Tic Tac Toe !\n\n");



        printf("\t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n\n",board[0],board[1],board[2],board[3],board[4],board[5],board[6],board[7],board[8]);

        printf("Joueur ??? %d\n", player);
        printf("Joueur 1 (x), Choisi une case\n");
        scanf("%d", pointeurCaseNumber);
    printf("Joueur ??? %d\n", player);

        /*printf("pointeur %d \n", pointeurCaseNumber);  // return l'adresse de la variable (177450)
        printf("&pointeur %d \n", &pointeurCaseNumber); // return l'adress du pointeur (3)
        printf("*pointeur %d", *pointeurCaseNumber);  // return valeur de la variable*/


        chooseCase(&player, &caseNumber, &board);

        printf("\t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n\n",board[0],board[1],board[2],board[3],board[4],board[5],board[6],board[7],board[8]);

        printf("Joueur 2 (o), Choisi une case\n");
        scanf("%d", pointeurCaseNumber);

    chooseCase(&player, &caseNumber, &board);

        printf("\t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n\n",board[0],board[1],board[2],board[3],board[4],board[5],board[6],board[7],board[8]);


    return 0;
}


