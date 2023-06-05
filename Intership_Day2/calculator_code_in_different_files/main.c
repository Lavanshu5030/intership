// Compile this code using the command "gcc -o calculator main.c calculator.c"
// Run using "./calculator"
#include <stdio.h>
#include "calculator.h"
#include "input_output.h"

int flag = 0;

int main(void)   
{
    int choice;
    int num1, num2, res;

    while ((choice = menu_list()) != 0)
    {
        take_input(&num1, &num2);
        switch (choice)
        {
        case 1:
            res = addition(num1, num2);
            break;

        case 2:
            res = subtraction(num1, num2);
            break;

        case 3:
            res = multiplication(num1, num2);
            break;

        case 4:
            res = division(num1, num2);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
        if (flag == 0)
            print_result(res);
        else
            flag = 0;
    }

    return 0;
}