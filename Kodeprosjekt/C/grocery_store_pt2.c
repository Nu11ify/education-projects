#include <stdio.h>

int main() {

    int iAppleQuantity = 23;
    double dApplePrice = 1.49;
    double dAppleReview=823;
    int iAppleNumberOfReviews = 9;
    int iAppleReviewDisplay;
    const char cAppleLocation = 'F';
    int iDaysOfWeek = 1;


    dAppleReview+=52;
    iAppleNumberOfReviews+=1;
    dAppleReview/=iAppleNumberOfReviews;
    iAppleReviewDisplay= (int)dAppleReview;

    if(iAppleQuantity < 10 || iDaysOfWeek == 3){
        printf("Sale on apples today, today only they are: $%.2f\n", dApplePrice * .9);
    }


    printf(
        "An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!",
        dApplePrice, iAppleQuantity, cAppleLocation, iAppleReviewDisplay);

}