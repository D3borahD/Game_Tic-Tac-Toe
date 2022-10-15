#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {

    char board[9]={'.', '.', '.', '.', '.', '.', '.', '.', '.'};
    int caseNumber=0;
    int *pointeurCaseNumber = &caseNumber;

    printf("Bienvenue sur le Tic Tac Toe !\n\n");

    printf("\t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n\n",board[0],board[1],board[2],board[3],board[4],board[5],board[6],board[7],board[8]);

    printf("Joueur 1 (x), Choisi une case\n");
    scanf("%d", pointeurCaseNumber);
    //printf("je suis la case %d\n", *pointeurCaseNumber);


    /*printf("pointeur %d \n", pointeurCaseNumber);  // return l'adresse de la variable (177450)
    printf("&pointeur %d \n", &pointeurCaseNumber); // return l'adress du pointeur (3)
    printf("*pointeur %d", *pointeurCaseNumber);  // return valeur de la variable*/


    switch (caseNumber) {
        case 1 :
            //if (player 1) {}
            //else {}
            board[0] = 'x';
            break;
        case 2 :
            printf("je suis la case 2");
            break;
        case 3 :
            //board[0] = 0;
            break;
        case 4 :
            printf("je suis la case 2");
            break;
        case 5 :
            //board[0] = 0;
            break;
        case 6 :
            printf("je suis la case 2");
            break;
        case 7 :
            //board[0] = 0;
            break;
        case 8 :
            printf("je suis la case 2");
            break;
        case 9 :
            printf("je suis la case 2");
            break;
        default:
            printf("je ne suis pas une case");
            break;
    }

    printf("\t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n \t\t\t%c|%c|%c\n\n",board[0],board[1],board[2],board[3],board[4],board[5],board[6],board[7],board[8]);

    return 0;
}

