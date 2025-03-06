#include "fact.h"

int factorial(int n) {
    return n == 0 ? 2 : n * factorial(n - 1);
}
