#include<stdio.h>
// #include<string.h>

const char *depart(int dept_no){

    switch(dept_no)
    {
        case 10 :
            return "Marketing";
            break;

        case 20 :
            return "Management";
            break;

        case 30:
            return "Sales";
            break;

        case 40:
            return "Designing";
            break;

        default :
            return "N/A";
    }
}
const char *designa(char dsgn_code){
    
    switch(dsgn_code)
    {
        case 'M' :
            return "Manager";
            break;

        case 'S' :
            return "Supervisor";
            break;

        case 's' :
            return "Security Officer";
            break;

        case 'C' :
            return "Clerk";
            break;
        
        default :
            return "N/A";
    }
}