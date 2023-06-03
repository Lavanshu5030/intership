// Write a C program that converts a given number into its corresponding Roman numeral representation using a switch case. The program should prompt
// the user to enter a number and then display the Roman numeral equivalent using the switch case for various cases.

#include <stdio.h>

void convertToRoman(int number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    convertToRoman(number);

    return 0;
}

void convertToRoman(int number) {
    int i;
    int thousands, hundreds, tens, ones;

    // Extracting digits from the number
    thousands = number / 1000;
    number = number % 1000;
    hundreds = number / 100;
    number = number % 100;
    tens = number / 10;
    ones = number % 10;

    // Printing the Roman numeral equivalent
    printf("Roman numeral representation: ");

    // Handling thousands place
    for (i = 1; i <= thousands; i++) {
        printf("M");
    }

    // Handling hundreds place
    switch (hundreds) {
        case 9:
            printf("CM");
            break;
        case 8:
            printf("DCCC");
            break;
        case 7:
            printf("DCC");
            break;
        case 6:
            printf("DC");
            break;
        case 5:
            printf("D");
            break;
        case 4:
            printf("CD");
            break;
        case 3:
            printf("CCC");
            break;
        case 2:
            printf("CC");
            break;
        case 1:
            printf("C");
            break;
    }

    // Handling tens place
    switch (tens) {
        case 9:
            printf("XC");
            break;
        case 8:
            printf("LXXX");
            break;
        case 7:
            printf("LXX");
            break;
        case 6:
            printf("LX");
            break;
        case 5:
            printf("L");
            break;
        case 4:
            printf("XL");
            break;
        case 3:
            printf("XXX");
            break;
        case 2:
            printf("XX");
            break;
        case 1:
            printf("X");
            break;
    }

    // Handling ones place
    switch (ones) {
        case 9:
            printf("IX");
            break;
        case 8:
            printf("VIII");
            break;
        case 7:
            printf("VII");
            break;
        case 6:
            printf("VI");
            break;
        case 5:
            printf("V");
            break;
        case 4:
            printf("IV");
            break;
        case 3:
            printf("III");
            break;
        case 2:
            printf("II");
            break;
        case 1:
            printf("I");
            break;
    }

    printf("\n");
}
