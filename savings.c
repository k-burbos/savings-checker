#include <stdio.h>

// This program does not include leap years.

int main() {
    double amountBeingSavedPerDay = 2500;
    int count = 1;
    double amountInAYear = 0;
    
    while (count <= 12) {
        amountInAYear = amountBeingSavedPerDay * 365;
        count++;
    }
    printf("If you save $%.2lf a day, you would have $%.2lf in a year.", amountBeingSavedPerDay, amountInAYear);
    return 0;
}