// Create a C program that acts as a simple grading system. The program should prompt the user to enter the marks obtained in a subject
//  	and then display the corresponding grade based on the following criteria: 90-100 (A), 80-89 (B), 70-79 (C), 60-69 (D), and below 60 
// 	(F). Use a switch case to handle the grade calculation.	

#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks obtained: ");
    scanf("%d", &marks);

    printf("Grade: ");
    switch (marks / 10) {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }

    return 0;
}
