#include <stdio.h>
#include <stdlib.h>
#include "s7c2funs.h"

int main() {
    // initialize variables and set up
    int num, guess, tries = 5;
    _Bool correct;
    // initial console printing
    printf("\nThis is a guessing game. \n");
    printf("I have chosen a number between 0 and 20 which you must guess. \n");
    printf("\n");


    // generate random number between 0 and 20

     num = rangeRand(1, 20);


    for (int i = 0; i<tries; i++) {
    // ask user to guess number
    printf("You have %d tries left. \n", tries-i);
    printf("What number do you guess? \n");
    scanf("%d", &guess);
    printf("You guessed %d.\n", guess);
    // handle if user doesnt enter a number or an int???

    // give user input (too high or too low)
    if (guess < num) {
        printf("Sorry, %d is wrong. My number is greater than that. \n", guess);
        correct = 0;
    } else if ( guess > num ) {
        printf("Sorry, %d is wrong. My number is less than that. \n", guess);

    } else {
        correct = 1;
        break;
    }
}
    // check if user won or lost the game
    if (correct) {
        printf("Congratulations. You guessed it!\n");
    } else {
        printf("Sorry, you ran out of tries. The number was %d.\n", num);
    }

    return 0;
}
