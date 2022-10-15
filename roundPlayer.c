//
// Created by Deborah DOUILLET on 15/10/2022.
//

#include "roundPlayer.h"
#include <stdio.h>

void roundPlayer(int *player){
    if(*player == 1) {
        printf("Joueur 1 (x), Choisi une case\n");
    } else {
        printf("Joueur 2 (o), Choisi une case\n");
    }
}
