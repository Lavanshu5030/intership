// Take number from user and print factorial of the number
// Algorithm - step by step solution to given problem statement
// step 1:  Take number from user
// step 2:  Find out factorial of number
// step 3:  print factorial

#include<stdio.h>

// declaration
int accept_number(void);
void accept_number_p(int *);
int find_factorial(int);
void print_factorial(int, int);

int main(void)
{
    int fact;
    int num;
    //num = accept_number();
    accept_number_p(&num);
    fact = find_factorial(num);
    print_factorial(num, fact);
    return 0;
}

int accept_number(void)
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    return num;
}
void accept_number_p(int *pnum)
{
    printf("Enter number : ");
    scanf("%d", pnum);
}
int find_factorial(int num)
{
    int fact = 1;
    for(int i = 1 ; i <= num  ; i++)
        fact *= i;
    return fact;
}
void print_factorial(int num, int fact)
{
    printf("%d! = %d\n", num, fact);
}