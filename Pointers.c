#include <stdio.h>

int main() {


    int age = 19;
    int* p = &age;
    printf("%p\n", p);  // Outputs location in memory
    printf("%d", *p);  // Outputs value stored in memory
    return 0;
}