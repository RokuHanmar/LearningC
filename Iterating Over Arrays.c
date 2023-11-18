#include <stdio.h>

int main() {

    int numbers[] = {16, 83, 55, 92};
    int total = 0;

    for(int i=0; i < 4; i++) {
        printf("%d\n", numbers[i]);
    }

    for (int i = 0; i < 4; i++) {
        total += i;
        printf("%d", total);
    }

    return 0;
}