#include <stdio.h>
//exercise 1
int main(void) {
    /*int, float, double, long, signed, unsigned, int *, float *, void *, int array[20] */
    printf("\n int %zu",  sizeof(int));
    printf("\n float %zu", sizeof(float));
    printf("\n double %zu", sizeof(double));
    printf("\n long %zu", sizeof(long));
    printf("\n signed %zu", sizeof(signed));
    printf("\n unsigned %zu", sizeof(unsigned));
    printf("\n int * %zu", sizeof(int *));
    printf("\n float * %zu", sizeof(float *));
    printf("\n void * %zu", sizeof(void *));
    int array[20];
    printf("\n int array[20] * %zu", sizeof(array));
}

