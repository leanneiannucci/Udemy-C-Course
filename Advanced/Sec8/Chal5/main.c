#include <stdio.h>

struct bitfield {
    unsigned int :3;
    unsigned int trans:1;
    unsigned int shown:1;
    unsigned int fill_color:3;

    unsigned int :3;
    unsigned int border_color:3;
    unsigned int line:2;

};

void printMe(struct bitfield b1);

int main() {
    struct bitfield b1 = {.trans=0,.shown=1,.fill_color=3,.border_color=2,.line=2};

    printf("Original Box Settings:\n");
    printMe(b1);

    b1.trans=1;
    b1.fill_color=7;
    b1.border_color=5;
    b1.line=0;
    printf("\n\n");
    printf("Modified Box Settings:\n");
    printMe(b1);



    return 0;
}

void printMe(struct bitfield b1){

    // transparency
    if (b1.trans) {
        printf("Box is transparent.\n");
    } else {
        printf("Box is opaque.\n");
    }

    // fill color
    if (b1.fill_color == 0) {
        printf("The fill color is Black.\n");
    } else if (b1.fill_color == 1) {
        printf("The fill color is Red.\n");
    } else if (b1.fill_color == 2) {
        printf("The fill color is Green.\n");
    } else if (b1.fill_color == 3) {
        printf("The fill color is Yellow.\n");
    } else if (b1.fill_color == 4) {
        printf("The fill color is Blue.\n");
    } else if (b1.fill_color == 5) {
        printf("The fill color is Magenta.\n");
    } else if (b1.fill_color == 6) {
        printf("The fill color is Cyan.\n");
    } else {
        printf("The fill color is White.\n");
    }


    // border shown
    if (b1.shown) {
        printf("Border shown.\n");
    } else {
        printf("Border not shown.\n");
    }

    // border color
    if (b1.border_color == 0) {
        printf("The border color is Black.\n");
    } else if (b1.border_color == 1) {
        printf("The border color is Red.\n");
    } else if (b1.border_color == 2) {
        printf("The border color is Green.\n");
    } else if (b1.border_color == 3) {
        printf("The border color is Yellow.\n");
    } else if (b1.border_color == 4) {
        printf("The border color is Blue.\n");
    } else if (b1.border_color == 5) {
        printf("The border color is Magenta.\n");
    } else if (b1.border_color == 6) {
        printf("The border color is Cyan.\n");
    } else {
        printf("The border color is White.\n");
    }

    // border style
    if (b1.line == 2) {
        printf("The border style is dashed.\n");
    } else if (b1.line == 1){
        printf("The border style is dotted.\n");
    } else {
        printf("The border style is solid.\n");
    }


}