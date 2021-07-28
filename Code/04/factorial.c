#include <stdio.h>

int factorial(int n) {
    int acc = 1;
    while (n > 0) {
        acc *= n;
        n -= 1;
    }
    return acc;
}

int main() {
    printf("factorial(6) = %d\n", factorial(6));
}