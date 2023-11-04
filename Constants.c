#include <stdio.h>

int main() {
    
    // Both FREEZINGPOINT and BOILINGPOINT are declared as constants as the freezing and boiling points of water are consistent (for the most part)
    const int FREEZINGPOINT = 0;
    const int BOILINGPOINT = 100;

    printf("Water freezes at %d degrees Celsius, and boils at %d degrees Celsius.", FREEZINGPOINT, BOILINGPOINT);

    return 0;
}
