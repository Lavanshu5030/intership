#include "calculator.h"
#include <stdio.h>

int menu_list(void)
{
    int choice;
    printf("0. Exit\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void take_input(int *pnum1, int *pnum2)
{
    printf("Enter two numbers: ");
    scanf("%d %d", pnum1, pnum2);
}

int addition(int num1, int num2)
{
    return num1 + num2;
}

int subtraction(int num1, int num2)
{
    return num1 - num2;
}

int multiplication(int num1, int num2)
{
    return num1 * num2;
}

int division(int num1, int num2)
{
    if (num2 != 0)
        return num1 / num2;
    else
    {
        printf("Divide by zero error\n");
        return 0;
    }
}

void print_result(int res)
{
    printf("Result: %d\n", res);
}
