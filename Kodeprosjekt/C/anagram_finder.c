#include<stdio.h>
#include<string.h>

int main() {
    int iCounter1[] = {0, 0, 0, 0};
    int iCounter2[] = {0, 0, 0, 0};
    int i = 0;
    int iMismatch = 0;

    char cString1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
    char cString2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

    for (i; i < strlen(cString1); i++) {
        if (cString1[i] == 'a') {
            iCounter1[0]++;
        } else if (cString1[i] == 'b') {
            iCounter1[1]++;
        } else if (cString1[i] == 'c') {
            iCounter1[2]++;
        } else if (cString1[i] == 'd') {
            iCounter1[3]++;
        } else if (cString1[i] == ' ') {
            continue;
        } else {
            return 0;
        }
    }
    i=0;
    for (i; i < strlen(cString2); i++) {
        if (cString2[i] == 'a') {
            iCounter2[0]++;
        } else if (cString2[i] == 'b') {
            iCounter2[1]++;
        } else if (cString2[i] == 'c') {
            iCounter2[2]++;
        } else if (cString2[i] == 'd') {
            iCounter2[3]++;
        } else if (cString2[i] == ' ') {
            continue;
        } else {
            return 0;
        }
    }
    i=0;
    for (i; i < 4; i++) {
        if (iCounter1[i] != iCounter2[i]) {
            iMismatch = 1;
        }
    }

    if (iMismatch == 0) {
        printf("Anagram!");
    } else if (iMismatch==1){
        printf("Not Anagram");
    }
}
