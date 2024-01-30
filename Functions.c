// Teaching myself functions. Using W3Schools instead of Sololearn for once
#include <stdio.h>

void helloWorld() {  // Simple function with no parameters and only one output. Just a normal print, but in a function
    printf("Hello World!\n");
}

void returnName(char name[]) {  // Takes a parameter, appends it to a string and outputs the string
    printf("Your name is %s\n", name);
}

void returnNameAndAge(char name[], int age) {  // Takes 2 parameters of different types and appends them to a string, which is outputted
    printf("Your name is %s and you are %d years old\n", name, age);
}

void doubleArray(int numbers[5]) {  // Takes an integer array as a parameter and iterates over each element, doubling them and outputting the result
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i] * 2);
    }
}

int returnsAnInt(int x) {  // Takes an integer as a parameter and returns it
    return x;
}

int main() {

    helloWorld();
    printf("\n");

    returnName("Rohan");
    returnName("Not Rohan");
    printf("\n");
    
    returnNameAndAge("Rohan", 19);
    returnNameAndAge("Not Rohan", 20);
    printf("\n");

    int numbers[5] = {1, 2, 3, 4, 5};
    doubleArray(numbers);
    printf("\n");
    
    printf("%d\n", returnsAnInt(5));

    return 0;
}
