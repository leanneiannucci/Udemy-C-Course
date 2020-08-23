#include <stdio.h>
#include "s9c2.h"

int main() {
    // initialize variables
    char boardMoves[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int play1, play2, turn = 1, count=0, happy=0;
    int moves[9];

    printf("\t Tic Tac Toe \t \n\n");
    printf("Player 1 (X) - Player 2 (O)\n\n");

    drawBoard(boardMoves);
    while (checkForWin(boardMoves) < 1) {
        if (turn == 1) { // player ones turn
            while (happy == 0) {
                printf("\n Player 1, enter a number: ");
                scanf("%d", &play1);
                //check to make sure that the number hasn't already been done
                for (int i = 0; i <= count; i++) {
                    if (moves[i] == play1) {
                        happy = 0;
                        break;
                    } else {
                        happy = 1;
                    }
                }
            }
            boardMoves[play1-1] = 'X';
            moves[count]=play1;
            count++;
            happy = 0;
            turn = 2;

            drawBoard(boardMoves);
        } else {
            while (happy == 0) {
                printf("\n Player 2, enter a number: ");
                scanf("%d", &play2);
                //check to make sure that the number hasn't already been done
                for (int i = 0; i <= count; i++) {
                    if (moves[i] == play2) {
                        happy = 0;
                        break;
                    } else {
                        happy = 1;
                    }
                }
            }
            boardMoves[play2-1] = '0';
            moves[count]=play2;
            count++;
            happy = 0;
            turn = 1;

            drawBoard(boardMoves);
        }
    }

     if (checkForWin(boardMoves) == 1) {
        printf("Congrats Player One!!!\n");
     } else if (checkForWin(boardMoves) == 2) {
         printf("Congrats Player Two!!!\n");
     } else {
         printf("Its a draw!\n");
     }
}







