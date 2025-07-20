#include <stdio.h>
#include <string.h>

// Is it a leap year? Answer 'yes' and ignore if not.
char* leapYear = "-";


int main() {
    double amountBeingSavedPerDay = 2500; // Input the amount you wish to save everyday.
    double amountInAYear = 0;
    double amountInAYear2 = 0;
    
    if (strcmp(leapYear, "yes") == 0) {
        amountInAYear = amountBeingSavedPerDay * 366;
        printf("If you save $%.2lf a day, you would have $%.2lf in a year.", amountBeingSavedPerDay, amountInAYear);
} else {
        amountInAYear2 = amountBeingSavedPerDay * 365;
        printf("If you save $%.2lf a day, you would have $%.2lf in a year.", amountBeingSavedPerDay, amountInAYear2);
    }
    return 0;
    }
