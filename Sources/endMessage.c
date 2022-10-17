//
// Created by Deborah DOUILLET on 15/10/2022.
//
#include <stdio.h>
#include "../Headers/endMessage.h"

void endMessage(int *player){
    int winner = NULL;

    int cat[] = {47, 92, 95, 95, 95, 47, 92};
    int cat2[] = {40, 61, 94, 46, 94, 61, 41, 60};
    int cat3[] = {92,95, 40, 34,41, 95,40, 34,41};

    if(player == 1) {
        winner = 1;
    } else {
        winner = 2;
    }

    printf("  %c%c%c%c%c%c%c\n", cat[0], cat[1], cat[2], cat[3], cat[4], cat[5], cat[6]);
    printf("  %c%c%c%c%c%c%c %c le joueur %d à gagné\n", cat2[0], cat2[1], cat2[2], cat2[3], cat2[4], cat2[5], cat2[6], cat2[7], winner);
    printf("%c%c%c%c%c%c%c%c%c\n\n", cat3[0], cat3[1], cat3[2], cat3[3], cat3[4], cat3[5], cat3[6], cat3[7], cat3[8]);
}