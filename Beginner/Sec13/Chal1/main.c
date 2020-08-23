#include <stdio.h>
#include "s13c1.h"

int main() {

    struct employee emp = {"Leanne", "7/28/20", 75000.00f};


    printf("\n Name: %s"	,emp.name);
    printf("\n Hire Date: %s"		,emp.date);
    printf("\n Salary: %.2f\n",emp.salary);

    printf("\nEnter employee information: \n");

    printf("Name: ");
    scanf("%s", emp.name);

    printf("\nHire Date: ");
    scanf("%s", emp.date);

    printf("\nSalary: ");
    scanf("%f", &emp.salary);

    printf("\n Name: %s"	,emp.name);
    printf("\n Hire Date: %s"		,emp.date);
    printf("\n Salary: %.2f\n",emp.salary);

    return 0;



}
