/*
*Normal usage of scanf is the following:
int a,b;
printf("Type two integers seperated with space\n");
scanf("%d %d", &a, &b);
printf("The numbers are %d, %d \n", a,b);

Write a program where you use scanf to read integers from the terminal, but
without using '&' in the scanf call. It should look more like this :

scanf("%d %d", p, q);

Also print the larger of the two.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *pInta;
    int *pIntb;
    pInta = malloc(sizeof(int));
    pIntb = malloc(sizeof(int));

    printf("Type two integers seperated with space \n");
    scanf("%d %d", pInta, pIntb);
    printf("One %d, two %d \n", *pInta, *pIntb);

    if (pInta > pIntb) {
        printf("%d is the bigger number\n", *pInta);
    } else {
        printf("%d is the bigger number\n", *pIntb);
    }


    free(pInta);
    free(pIntb);
}
//pointers
