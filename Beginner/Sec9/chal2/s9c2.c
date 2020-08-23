//
// Created by Leanne Iannucci on 7/17/20.
//

#include "s9c2.h"
#include <stdio.h>


void drawBoard(char boardMoves[9]){

    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", boardMoves[0],boardMoves[1], boardMoves[2]);
    printf("\t   |   |   \n");
    printf("\t---|---|---\n");
    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", boardMoves[3],boardMoves[4], boardMoves[5]);
    printf("\t   |   |   \n");
    printf("\t---|---|---\n");
    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", boardMoves[6],boardMoves[7], boardMoves[8]);
    printf("\t   |   |   \n");
}

int checkForWin(char boardMoves[9]){
    int win=0; // tie = 0, win play 1 = 1, win play 2 = 2
        if ((boardMoves[0] == boardMoves[1]) && (boardMoves[2] == boardMoves[1]) && (boardMoves[2] == boardMoves[0])){
            if (boardMoves[0] == "X") {
                win = 1;
            }   else {
                win = 2;
            }
        } else if((boardMoves[0] == boardMoves[3]) && (boardMoves[6] == boardMoves[3]) && (boardMoves[6] == boardMoves[0])){
            if (boardMoves[0] == "X") {
                win = 1;
            }   else {
                win = 2;
            }
        }else if ((boardMoves[0] == boardMoves[4]) && (boardMoves[8] == boardMoves[4]) && (boardMoves[8] == boardMoves[0])){
            if (boardMoves[0] == "X") {
                win = 1;
            }   else {
                win = 2;
            }
        }else if ((boardMoves[4] == boardMoves[3]) && (boardMoves[4] == boardMoves[3]) && (boardMoves[5] == boardMoves[4])){
            if (boardMoves[4] == "X") {
                win = 1;
            }   else {
                win = 2;
            }
        } else if ((boardMoves[7] == boardMoves[8]) && (boardMoves[6] == boardMoves[8]) && (boardMoves[6] == boardMoves[7])){
            if (boardMoves[7] == "X") {
                win = 1;
            }   else {
                win = 2;
            }
        } else if ((boardMoves[1] == boardMoves[4]) && (boardMoves[7] == boardMoves[4]) && (boardMoves[7] == boardMoves[1])){
            if (boardMoves[1] == "X") {
                win = 1;
            }   else {
                win = 2;
            }
        } else if ((boardMoves[2] == boardMoves[5]) && (boardMoves[8] == boardMoves[5]) && (boardMoves[8] == boardMoves[2])){
            if (boardMoves[2] == "X") {
                win = 1;
            }   else {
                win = 2;
            }
        } else if ((boardMoves[2] == boardMoves[4]) && (boardMoves[6] == boardMoves[4]) && (boardMoves[6] == boardMoves[2])) {
            if (boardMoves[2] == "X") {
                win = 1;
            }   else {
                win = 2;
            }
        } else {
            win = 0;
        }
    return win;


}