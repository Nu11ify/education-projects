#include <stdio.h>

int main(void) {
    int a,b,c,d;

    a = 5;
    b = a++;
    c = ++b;
    d = b++;

    //What do you think the values of a,b,c,d are?
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);

    int x,y,z,w;

    x = 10;
    y = 9;
    z = 8;
    w = 7;

    if((x==y++) && (z==++x)){
        w = 100;
        printf("This is obviously true");
    }
    z = ++w+y++;
    printf("z: %d\n", z);
}

