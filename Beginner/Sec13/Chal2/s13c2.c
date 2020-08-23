//
// Created by Leanne Iannucci on 7/28/20.
//

#include "s13c2.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void readItem(struct item *newItem){
    char newItemName[30];
    int newQuantity;
    float newPrice;


    printf("What is the name of the item?\n");
    scanf("%s", &newItemName);
    newItem->itemName = (char *)malloc(strlen(newItemName)+1);
    strcpy(newItem->itemName, newItemName);

    printf("How many of the item?\n");
    scanf("%d", &newQuantity);
    newItem->quantity = newQuantity;

    printf("What is the price of the item?\n");
    scanf("%f", &newPrice);
    newItem->price = newPrice;

    newItem->amount = ((float) newQuantity) * newPrice;
}

void printItem(struct item *newItem) {
    printf("The name of your item is %s.\n", newItem->itemName);
    printf("The quantity of your item is %d.\n", newItem->quantity);
    printf("The price of your item is %.2f.\n", newItem->price);
    printf("The amount of your items is %.2f.\n", newItem->amount);
}