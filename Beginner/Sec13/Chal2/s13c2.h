//
// Created by Leanne Iannucci on 7/28/20.
//

#ifndef CHAL2_S13C2_H
#define CHAL2_S13C2_H

#endif //CHAL2_S13C2_H

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *newItem);
void printItem(struct item *newItem);