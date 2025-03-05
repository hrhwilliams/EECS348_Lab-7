#include <stdio.h>
#include <stdlib.h>

#include "factorial.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s n\n", argv[0]);
        return -1;
    }

    long n = atol(argv[1]);
    printf("The factorial of %ld is %ld!\n", n, factorial(n));

    return 0;
}