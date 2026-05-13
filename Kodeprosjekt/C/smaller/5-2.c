/*

    Exercise 2:
    strlen() outputs the length of a string and is part of the string.h.
    Write a small function to output the length of a string without using strlen().
    Hint:  In C a sting is assumed to be terminated with '\0'

    */

#include <stdio.h>
#include <string.h>

int myStringCounter(char str[]) {
    int iOne = 0;
    int i = 0;
    /* Checks if strlen and manual check is the same*/
    printf("strlen: The string is %zu characters long (array)\n", strlen(str));

    for (i = 0; str[i] != '\0'; i++) {
        iOne++;
    }
    return iOne;
}

int main() {
    char cOne[15] = "";
    printf("Please give me a single string and press enter: \n");
    scanf("%s", &cOne);
    printf("count without strlen: %zu \n", myStringCounter(cOne));

    return 0;
}
