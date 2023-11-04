#include <stdio.h>

int main() {
    
    // Both freezingPoint and boilingPoint are declared as constants as the freezing and boiling points of water are consistent (for the most part)
    const int freezingPoint = 0;
    const int boilingPoint = 100;

    printf("Water freezes at %d degrees Celsius, and boils at %d degrees Celsius.", freezingPoint, boilingPoint);

    return 0;
}