#include <stdio.h>
#include <math.h>


long long dec2bin(int n);

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("In binary: %lld\n", dec2bin(n));
    return 0;
}

long long dec2bin(int n){
    int count = 0;
    long long conv;
    while(n) {
        if (n % 2) {
            conv = conv + (long long)(pow(10,count));
        }
        n = (int)(n/2);
        count++;
    }

    return conv;



}

