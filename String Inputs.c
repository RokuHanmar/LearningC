#include <stdio.h>

int main() {

    char name[100];
    scanf("%s", name);

    fgets(name, 100, stdin);  // if the input has spaces, use fgets

    return 0;
}
