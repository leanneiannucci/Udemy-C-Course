#include <stdio.h>
#include <stdbool.h>



int main() {

    // init variables

    float rain[5][12] =
            {
                    {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                    {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
                    {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
                    {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
                    {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
            };

    float totYear[5], avgMonth[12], tmpYear = 0, tmpMonth = 0, avgYear = 0, tmpTotYear = 0;
    bool input;
    int temp;

    // ask user for input to each array element
    printf("Will you be inputting data? 0 if no, 1 if yes.\n");
    scanf("%d", &temp);
    input = temp;

    if (input) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 12; j++) {
                printf("Please input rainfall data for Year %d in Month %d.\n", i + 1, j + 1);
                scanf("%f", &rain[i][j]);
            }
        }
    }

    // compute average yearly rainfall

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) {
            tmpYear += rain[i][j];
        }
        totYear[i] = tmpYear;
        tmpYear = 0;
        tmpTotYear += totYear[i];
    }
    avgYear = tmpTotYear / 5;
    // compute average monthly rainfall

    for (int j = 0; j < 12; j++) {
        for (int i = 0; i < 5; i++) {
            tmpMonth += rain[i][j];
        }
        avgMonth[j] = tmpMonth / 5;
        tmpMonth = 0;
    }

    // print me

    printf("YEAR    RAINFALL (in) \n");
    for (int i = 0; i < 5; i++) {
    printf("Year %d     %2.2f \n", i+1, totYear[i]);
    }
    printf("The yearly average is %2.2f in.\n\n\n", avgYear);
    printf("MONTHLY AVERAGES\n");
    for (int i = 0; i <12; i++){
        if (i < 9) {
            printf("Month %d:  %2.2f\n", i + 1, avgMonth[i]);
        } else {
            printf("Month %d: %2.2f\n", i + 1, avgMonth[i]);
        }

    }
}