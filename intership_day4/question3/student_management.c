#include <stdio.h>
#include <string.h>
#include "student_management.h"

#define MAX_STUDENTS 100

struct Student students[MAX_STUDENTS];
int numStudents = 0;

void addStudent() {
    if (numStudents >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter student ID: ");
    scanf("%d", &newStudent.id);

    printf("Enter student name: ");
    scanf("%s", newStudent.name);

    printf("Enter student age: ");
    scanf("%d", &newStudent.age);

    students[numStudents] = newStudent;
    numStudents++;

    printf("Student added successfully.\n");
    printf("-----------------------------------\n");
    getchar();
}

void displayStudentInfo() {
    if (numStudents == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("ID\tName\tAge\n");
    printf("--------------------------------\n");

    for (int i = 0; i < numStudents; i++) {
        printf("%d\t%s\t%d\n", students[i].id, students[i].name, students[i].age);
    }
    printf("-----------------------------------\n");
}

void searchStudentByName() {
    if (numStudents == 0) {
        printf("No students to search.\n");
        return;
    }

    char searchName[50];
    printf("Enter student name to search: ");
    scanf("%s", searchName);

    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcasecmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("ID\tName\tAge\n");
            printf("--------------------------------\n");
            printf("%d\t%s\t%d\n", students[i].id, students[i].name, students[i].age);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
    printf("-----------------------------------\n");
}

void searchStudentById() {
    if (numStudents == 0) {
        printf("No students to search.\n");

        return;
    }

    int searchId;
    printf("Enter student ID to search: ");
    scanf("%d", &searchId);

    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == searchId) {
            printf("Student found:\n");
            printf("ID\tName\tAge\n");
            printf("--------------------------------\n");
            printf("%d\t%s\t%d\n", students[i].id, students[i].name, students[i].age);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
    printf("-----------------------------------\n");
}

void updateStudentInfo() {
    if (numStudents == 0) {
        printf("No students to update.\n");
        return;
    }

    int updateId;
    printf("Enter student ID to update: ");
    scanf("%d", &updateId);

    int found = 0;
    int updateIndex;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == updateId) {
            found = 1;
            updateIndex = i;
            break;
        }
    }

    if (found) {
        printf("Enter updated student name: ");
        scanf("%s", students[updateIndex].name);

        printf("Enter updated student age: ");
        scanf("%d", &students[updateIndex].age);

        printf("Student information updated successfully.\n");
    } else {
        printf("Student not found.\n");
        // Clear input buffer
        while ((getchar()) != '\n');
    }
    printf("-----------------------------------\n");
}



void deleteStudent() {
    if (numStudents == 0) {
        printf("No students to delete.\n");
        return;
    }

    int deleteId;
    printf("Enter student ID to delete: ");
    scanf("%d", &deleteId);

    int found = 0;
    int deleteIndex;

    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == deleteId) {
            found = 1;
            deleteIndex = i;
            break;
        }
    }

    if (found) {
        for (int i = deleteIndex; i < numStudents - 1; i++) {
            students[i] = students[i + 1];
        }

        numStudents--;

        printf("Student deleted successfully.\n");
    } else {
        printf("Student not found.\n");
    }
    printf("-----------------------------------\n");
}



