#ifndef STUDENT_MANAGEMENT_H
#define STUDENT_MANAGEMENT_H

struct Student {
    int id;
    char name[50];
    int age;
};

void addStudent();
void displayStudentInfo();
void searchStudentByName();
void searchStudentById();
void updateStudentInfo();
void deleteStudent();

#endif
