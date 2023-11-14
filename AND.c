#include <stdio.h>

int main() {

    int a = 300;
    int b = 300;
    int c = 300;

    // if a is the largest
    if (a > b && b > c) {
        printf("%s", "a is the largest number");
    } else if (a > b && a > c) {
        printf("%s", "a is the largest number");
    }

    // if b is the largest
    else if (b > a && a > c) {
        printf("%s", "b is the largest number");
    } else if (b > a && b > c) {
        printf("%s", "b is the largest number");
    }

    // if c is the largest
    else if (c > a && a > b) {
        printf("%s", "c is the largest number");
    } else if (c > a && c > b) {
        printf("%s", "c is the largest number");
    }

    // if the numbers are equal
    else {
        printf("The numbers are equal");
    }


    return 0;
}