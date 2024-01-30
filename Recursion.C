// A factorial calculator to test my knowledge of C recursion

#include <stdio.h>

int factorial(int x) {
    if (x < 1) {
        return 0;
    }
    else if (x == 1) {
        return 1;
    }
    else {
        return x * factorial(x-1);
    }
}

int main() {

    printf("%d\n", factorial(5));  // Normal. Should return 120
    printf("%d\n", factorial(1));  // Boundary. Should return 1
    printf("%d\n", factorial(-5));  // Erroneous. Should return 0

    return 0;
}
