#include <stdio.h>

int main() {
    double min = 0.0, minYear, year, days;

    printf("How many minutes?\n");
    scanf("%lf",&min);

    minYear = 60*24*365;

    year = min/minYear;
    days = min/(minYear/365);

    printf("Number of years: %.3f\n", year);
    printf("Number of days: %.3f\n", days);



    return 0;
}
