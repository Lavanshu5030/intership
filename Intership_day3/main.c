#include<stdio.h>
#include"in_out.h"
#include"sel.h"
#include"employee.h"

void take_input(struct employee *emp);

int main(void)
{
    struct employee emp;

    take_input(&emp);

    const char *department = depart(emp.dept_no); // pointer pointing to the character in constant
    const char *designation = designa(emp.dsgn_code);

    print_res(emp.emp_id ,department,designation);

    return 0;
}

void take_input(struct employee *emp){
        printf("Enter Employee details :\n");
        printf("Employee Id:");
        scanf("%d", &emp->emp_id);
        printf("Dept No:");
        scanf("%d", &emp->dept_no);
        printf("Designation Code:");
        getchar();   //Used to ignore '\n' waiting in a buffer memory
        scanf("%c",&emp->dsgn_code);
}