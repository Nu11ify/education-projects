#include <ctype.h>
#include <stdio.h>

void cVowelOccurrence(char cTwo[]) {
    int i = 0;
    char cArrayVowel[30];
    int iVowelCount = 0;




    for (i = 0; cTwo[i] != '\0'; i++) {
        if (tolower(cTwo[i])== 'a' || tolower(cTwo[i])== 'e'
            || tolower(cTwo[i])== 'i' || tolower(cTwo[i])== 'o'
            || tolower(cTwo[i])== 'u') {
            cArrayVowel[iVowelCount] = cTwo[i];
            iVowelCount++;
        }
    }
    cArrayVowel[iVowelCount] = '\0';
    printf("Found %d vowels: %s \n", iVowelCount, cArrayVowel);
}

int main() {
    char cUserInput[30];
    printf("Please give me a single string and press enter: \n");
    scanf("%s", cUserInput);
    cVowelOccurrence(cUserInput);
}