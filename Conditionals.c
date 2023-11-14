#include <stdio.h>

int main() {

    int a = 3;
    int b = 3;

    if (a > b) {
        printf("%d\n", a);
    } else if (b > a) {
        printf("%d\n", b);
    } else {
        printf("%s\n", "a is equal to b");
    }
    return 0;
}
