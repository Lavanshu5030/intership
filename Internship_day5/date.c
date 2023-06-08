#include "date.h"
#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    else
        return daysInMonth[month - 1];
}

void inputDate(struct Date *date) {
    printf("Enter day: ");
    scanf("%d", &(date->day));

    printf("Enter month: ");
    scanf("%d", &(date->month));

    printf("Enter year: ");
    scanf("%d", &(date->year));
}

void displayDate(struct Date date) {
    printf("%02d-%02d-%04d\n", date.day, date.month, date.year);
}

void addDays(struct Date *date, int days) {
    while (days > 0) {
        int daysInMonth = getDaysInMonth(date->month, date->year);
        int remainingDays = daysInMonth - date->day + 1;

        if (days <= remainingDays) {
            date->day += days;
            days = 0;
        } else {
            date->day = 1;
            date->month++;
            if (date->month > 12) {
                date->month = 1;
                date->year++;
            }
            days -= remainingDays;
        }
    }
}

int compareDates(struct Date date1, struct Date date2) {
    // Convert dates to days since year 0 (ignoring leap years)
    int days1 = date1.year * 365 + date1.day;
    for (int month = 1; month < date1.month; month++)
        days1 += getDaysInMonth(month, date1.year);

    int days2 = date2.year * 365 + date2.day;
    for (int month = 1; month < date2.month; month++)
        days2 += getDaysInMonth(month, date2.year);

    return days1 - days2;
}




