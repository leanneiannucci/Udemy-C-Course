//
// Created by Leanne Iannucci on 5/25/20.
//

#include "s7c1funs.h"

void calcPay(double numHours, double *pPay) { // input number of hours worked and pointer to total pay

    // calculate base pay @ 12 dollars an hour
    double tempPay = numHours * 12;

    // calculate overtime, time & a half after 40 hours
    if (numHours > 40) {
    tempPay += (numHours-40)*6;
    }

    // return to pointer
    *pPay = tempPay;

}

void calcTax(double pay, double *pTax) { // input total pay and pointer to taxes

    // 15% of the first $300 earned
    double tempTax = .15*pay;

    if (pay > 300) { //20% of the next $150
        tempTax += (pay-300)*.05;
    }
    if (pay > 450) { //25% of the rest
        tempTax += (pay-450)*.05;
    }

    // return value to pointer
    *pTax = tempTax;
}

void calcNetPay(double pay, double tax, double *net) { // input total pay and tax, calculate net pay
    *net = pay - tax;
}
