#include <stdio.h>
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
enum choice{
    exit = 0, add, subtrat, multiply, divide
};

int main(){
    enum choice enum_add = add;
    enum choice enum_subtract = subtrat;
    enum choice enum_multiply = multiply;
    enum choice enum_division = divide;
    int choice;
    int num1, num2;
    printf("0. Exit\n");
    printf("1. Addition\n");
    printf("2. Subtration\n");
    printf("3. Multiplication\n");
    printf("4. Division\n"); 
    printf("5. Enter the choice:\n"); 
    scanf("%d", &choice);  
    if (choice == enum_add){
        printf("Enter num1, num2:");
        scanf("%d %d", &num1, &num2);
        int res = addition(num1, num2);
        printf("%d", res);
    }

    if (choice == enum_subtract)
    {
        printf("Enter num1, num2:");
        scanf("%d  %d", &num1,&num2);
        int res = subtraction(num1, num2);
        printf("%d", res);
    }

    if (choice == enum_multiply){
        printf("Enter num1, num2:");
        scanf("%d %d", &num1, &num2);
        int res = multiplication(num1,num2);
        printf("%d",res);
    }

    if (choice == enum_division)
    {
        printf("Enter num1, num2:");
        scanf("%d %d", &num1, &num2);
        int res = division(num1, num2);
        printf("%d", res);
    }
    
    
        
}

int addition(int num1, int num2){
    int res = num1 + num2;
    return res;
}

int subtraction(int num1, int num2){
    int res = num1 - num2;
    return res;
}

int multiplication(int num1, int num2){
    int res = num1 * num2;
    return res;
}

int division(int num1, int num2){
    if (num2 == 0){
        printf("Infinite");
    }
    else{
        int res = num1/num2;
        return res;
    }
}



