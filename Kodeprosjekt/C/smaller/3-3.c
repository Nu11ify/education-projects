/*    Write a program that takes a number as an argument and prints if it is odd or even?
Example :$./program 5
         Number 5 is read and it is odd.
         $./program all
         Please provide a non-zero integer as argument!
         $./program 0
         Please provide a non-zero integer as argument!
         $./program 6bva
         Number 6 is read and it is even.

Hint : Use argc, argv of the main
       atoi() - can be used to convert string to int - read more at man atoi
    */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Bruk: ./3-3.exe <tall>");
        return 1;
    }
    int a;
    a = atoi(argv[1]);
    int b = a%2;

    if (b==0) {
        printf("The number %d is even \n", a);
    } else {
        printf("The number %d is odd \n", a);
    }
}
