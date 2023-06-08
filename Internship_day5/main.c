#include "date.h"
#include <stdio.h>

int main() {
    struct Date date1, date2;

    printf("Enter date 1:\n");
    inputDate(&date1);

    printf("Enter date 2:\n");
    inputDate(&date2);

    printf("Date 1: ");
    displayDate(date1);

    printf("Date 2: ");
    displayDate(date2);

    int diff = compareDates(date1, date2);
    printf("Difference in days: %d\n", diff);

    int daysToAdd;
    printf("Enter number of days to add to date 1: ");
    scanf("%d", &daysToAdd);

    addDays(&date1, daysToAdd);

    printf("New date 1 after adding %d days: ", daysToAdd);
    displayDate(date1);

    return 0;
}

