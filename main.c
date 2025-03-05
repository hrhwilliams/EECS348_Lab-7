#include <stdio.h>
#include <stdlib.h>

#include "factorial.h"
#include "fibonacci.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s n\n", argv[0]);
        return -1;
    }

    long n = atol(argv[1]);
    printf("The factorial of %ld is %ld\n", n, factorial(n));
    printf("The %ld%s Fibonacci number is %ld\n",
        n,
        n == 1 ? "st" : (n == 2 ? "nd" : (n == 3 ? "rd" : "th")),
        fibonacci(n));

    return 0;
}