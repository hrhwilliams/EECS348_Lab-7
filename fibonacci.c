#include "fibonacci.h"

long fibonacci(long n) {
    return n < 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}