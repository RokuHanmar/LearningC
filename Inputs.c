#include <stdio.h>

int main() {
    printf("%s", "Enter a number: ");
    int num;
    scanf("%d",&num);
    
    if (num > 1) {
        printf("%s\n", "Number is greater than 1");
    } else if (num < 1) {
        printf("%s\n", "Number is less than 1");
    } else {
        printf("%s\n", "Number is 1");
    }
	return 0;
}