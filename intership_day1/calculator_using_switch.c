#include<stdio.h>

// show menu to the user and take user's choice
// depending on user's choice, take input from user
// perform operation on input
// print result
// repeat above step till user want

int menu_list(void);
void take_input(int *, int *);
int addition(int , int);
int subtraction(int , int);
int multiplication(int , int);
int division(int , int);
void print_result(int);

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
       if(flag == 0)
            print_result(res);
        else
            flag = 0;
    }
    
    return 0;
}

int menu_list(void)
{
    int choice;
    printf("0. Exit\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    return choice;
}
void take_input(int *pnum1, int *pnum2)
{
    printf("Enter two numbers : ");
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
    if(num2 != 0)
        return num1 / num2;
    else
    {
        printf("Divide by zero error\n");
        flag = 1;
    }
}
void print_result(int res)
{
    printf("Result : %d\n", res);
}

//   ###   MY CODE  ####

// #include <stdio.h>


// int addition(int num1, int num2);
// int subtration(int num1, int num2);
// int multiplication(int num1, int num2);
// int division(int num1, int num2);


// int main(){
//     int num1, num2, res;
//     printf("0. Exit\n");
//     printf("1. Addition\n");
//     printf("2. subtration\n");
//     printf("3. Multiplication\n");
//     printf("4. Division\n");
//     printf("Enter Choice:");
//      int choice;
//     scanf("%d", &choice);
    
//     switch (choice)
//     {
//     case 1:
//         printf("Enter num1, num2:\n");
//         scanf("%d %d", &num1, &num2);
//         res = addition(num1,num2);
//         break;
    
//     case 2:
//         printf("Enter num1, num2:\n");
//         scanf("%d %d", &num1, &num2);
//         res = subtration(num1,num2);
//         break;

//     case 3:
//         printf("Enter num1, num2:\n");
//         scanf("%d %d", &num1, &num2);
//         res = multiplication(num1,num2);
//         break;

//     case 4:
//         printf("Enter num1, num2:\n");
//         scanf("%d %d", &num1, &num2);
//         res = division(num1,num2);
//         break;

//     default:
//         printf("Exit");
//         break;
//     }

//     printf("%d", res);
    
// }
// int addition(int num1, int num2){
//     int res = num1+num2;
//     return res;
// }

// int subtration(int num1, int num2){
//     int res = num1 - num2;
//     return res;
// }

// int multiplication(int num1, int num2){
//     int res = num1 * num2;
//     return res;
// }

// int division(int num1, int num2){
//     if (num2 == 0){
//         printf("Infinite");
//     }
//     else{
//         int res = num1/num2;
//         return res;
//     }
// }
