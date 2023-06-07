#include<stdio.h>
#include<string.h>


void print_res(int empid, char department[] , char designation[])
{
    printf("\nEmployee with employee Id %d is working in \"%s\" department as a %s.\n\n", empid, department, designation);
}