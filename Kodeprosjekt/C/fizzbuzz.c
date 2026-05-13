#include <stdio.h>
#include <stdlib.h>

void FizzBuzz(int iInput) {
    int i = 1;
    printf("The chosen number is: %i\n", iInput);
    for (i; i <= iInput; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        }else {
            printf("%i\n", i);
        }
    }
}


int main(int argc, char *argv[]) {
    if (argc == 2) {
        FizzBuzz(atoi(argv[1]));
    } else {
        printf("Error. Please run the program with an argument\n");
        return 1;
    }
    return 0;
}
