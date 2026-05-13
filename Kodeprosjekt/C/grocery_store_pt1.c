#include <stdio.h>

int main() {
    int iAppleQuantity = 23;
    double dApplePrice = 1.49;
    double dAppleReview = 82.5;
    int iAppleReviewDisplay = dAppleReview;
    const char cAppleLocation = 'F';

    printf(
        "An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!",
        dApplePrice, iAppleQuantity, cAppleLocation, iAppleReviewDisplay);
}
