#include <stdio.h>
#include <math.h>

int bin2dec(long long bin);

int main() {
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("In decimal: %d\n", bin2dec(n));
    return 0;
}


int bin2dec(long long bin) {
    int conv, count = 0;
    while(bin) {

        if (bin % 10) {
            conv = conv + (int)(pow(2,count));
        }
        bin = (long long)(bin/10);
        count++;
    }

    return conv;

}
