#ifndef DATE_H
#define DATE_H

struct Date {
    int day;
    int month;
    int year;
};

int isLeapYear(int year);
int getDaysInMonth(int month, int year);
void inputDate(struct Date *date);
void displayDate(struct Date date);
void addDays(struct Date *date, int days);
int compareDates(struct Date date1, struct Date date2);

#endif /* DATE_H */

