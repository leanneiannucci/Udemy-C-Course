#include <stdio.h>
#include "s8c3.h"

int main() {

    int n, p;
    printf("Enter a decimal number: \n");
    scanf("%d", &n);
    printf("Enter a second decimal number: \n");
    scanf("%d", &p);

    printf("The result of applying the ~ operator on number %d (%lld) is: %lld\n", n, dec2bin(n),dec2bin(~n));
    printf("The result of applying the ~ operator on number %d (%lld) is: %lld\n", p, dec2bin(p),dec2bin(~p));
    printf("The result of applying the & operator on number %d (%lld) and %d (%lld) is: %lld\n", n, dec2bin(n), p, dec2bin(p), dec2bin((n&p)));
    printf("The result of applying the | operator on number %d (%lld) and %d (%lld) is: %lld\n", n, dec2bin(n), p, dec2bin(p), dec2bin((n|p)));
    printf("The result of applying the ^ operator on number %d (%lld) and %d (%lld) is: %lld\n", n, dec2bin(n), p, dec2bin(p), dec2bin((n^p)));
    printf("The result of applying the << operator on number %d (%lld) by 2 places (%lld) is number: %d\n", n, dec2bin(n), dec2bin((n<<2)), (n << 2));


    return 0;

}
