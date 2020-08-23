#include <stdio.h>
#include "s7c1funs.h"

int main() {
    // set up and initialize variables
    double numHours=0, pay=0, tax=0, net =0;
    double *pPay= &pay;
    double *pTax= &tax;
    double *pNet=&net;

    // ask user for input (num hours worked)
    printf("Enter number of hours worked this week: ");
    scanf("%lf",&numHours);

    // calculate values in functions (total pay, taxes, net pat)

    calcPay(numHours,pPay);
    calcTax(pay, pTax);
    calcNetPay(pay, tax, pNet);

    // print out results
    printf("Amount of money earned this week: $%.2f\n", pay);
    printf("Amount of taxes deducted this week: $%.2f\n", tax);
    printf("Net pay this week: $%.2f\n", net);

    return 0;
}
