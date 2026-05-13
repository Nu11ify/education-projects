/*
Write a small program that does bubble sort on an array of positive integers.
The integers and the number of them is unknown.

An example on using the program could be:
ex3 12 3 45 67 99

Then the program should print the number of numbers, then the numbers in ascending order as:
5: 3 12 45 67 99

Hint: int main(int iArgC, char *pszArgV[]), atoi();

Bubble sort:

Run through the elements and swap when you find a[i-1] > a[i]. Keep doing
this until you cannot swap anymore. Swapping should be done by function call
Swap(a,b).
*/

#include <stdio.h>
#include <stdlib.h>

int main(int iArgC, char *pszArgV[]) {
    int bubbleSort[iArgC - 1];

    for (int i=1; i < iArgC; i++) {
        bubbleSort[i-1] = atoi(pszArgV[i]);
        int temp1=*a;
        i
    }

    for (int i = 0; i < iArgC; i++) {
        printf("%d\n", bubbleSort[i]);
    }



}
