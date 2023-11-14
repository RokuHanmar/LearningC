#include <stdio.h>

int main() {

    int a = 2;
    int b = 3;

    if (a > b) {
        printf("%i\n", a);
    } else if (b > a) {
        printf("%i\n", b);
    } else {
        printf("%s\n", "a is equal to b");
    }
    return 0;
}
