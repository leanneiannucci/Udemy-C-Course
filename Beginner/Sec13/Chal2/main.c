#include <stdio.h>
#include "s13c2.h"

int main() {

    struct item newItem;

    readItem(&newItem);
    printItem(&newItem);

}
