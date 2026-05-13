//Exercise 5:

//Convert these blocks accordingly :

//-------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
//Block 1(to switch):
{
    srand(time(NULL));
    int a = rand()%20;
    if(a == 1){
        printf("%d is 1", a);}
    else if(a%2 == 0){
        printf("%d is not a prime", a);}
    else if(a%3 == 0){
        printf("%d is not a prime", a);}
    else if(a%5 == 0){
        printf("%d is not a prime", a);}
    else if(a%7 == 0){
        printf("%d is not a prime", a);}
    else if(a%11 == 0){
        printf("%d is not a prime", a);}
    else if(a%13 == 0){
        printf("%d is not a prime", a);}
    else if(a%17 == 0){
        printf("%d is not a prime", a);}
    else if(a%19 == 0){
        printf("%d is not a prime", a);}
    else{
        printf("%d is a prime", a);
    }

}

// I want prime numbers, But this does not give primes to me. What should
// I change to get to the last printf when a is a prime number?

// YES THIS IS A "TRICK-QUESTION" ASIGNMENT - Why doesnt the above code work as it should?
// Write the correct code that outputs if a number is a prime number or not :-)