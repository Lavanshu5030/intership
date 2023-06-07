#include <stdio.h>
#include "student_management.h"

int main() {
    int choice;

    while (1) {
        printf("Student Management System\n");
        printf("1. Add student\n");
        printf("2. Display student information\n");
        printf("3. Search student by name\n");
        printf("4. Search student by ID\n");
        printf("5. Update student information\n");
        printf("6. Delete student\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudentInfo();
                break;
            case 3:
                searchStudentByName();
                break;
            case 4:
                searchStudentById();
                break;
            case 5:
                updateStudentInfo();
                break;
            case 6:
                deleteStudent();
                break;
            case 7:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
