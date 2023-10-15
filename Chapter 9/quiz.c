// WAP to store details of 3 employees from user defind data

#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char fname[10];
};

int main()
{   
    int code;
    float salary;
    char fname[10];
    struct employee e1;
    struct employee e2;
    struct employee e3;
    
    printf("\nEnter the code of employee 1 : ");
    scanf("%d",&code);
    e1.code = code;
    printf("Enter the salary of employee 1 : ");
    scanf("%f",&salary);
    e1.salary=salary;
    printf("Enter the first name of employee 1 : ");
    scanf("%s",&fname);
    strcpy(e1.fname,fname);

    printf("\nEnter the code of employee 2 : ");
    scanf("%d",&code);
    e2.code = code;
    printf("Enter the salary of employee 2 : ");
    scanf("%f",&salary);
    e2.salary=salary;
    printf("Enter the first name of employee 2 : ");
    scanf("%s",&fname);
    strcpy(e2.fname,fname);

    printf("\nEnter the code of employee 3 : ");
    scanf("%d",&code);
    e3.code = code;
    printf("Enter the salary of employee 3 : ");
    scanf("%f",&salary);
    e3.salary=salary;
    printf("Enter the first name of employee 3 : ");
    scanf("%s",&fname);
    strcpy(e3.fname,fname);

    printf("\nThe details of Employee 1 are :\n");
    printf("Code : %d",e1.code);
    printf("\nSalary : %0.3f",e1.salary);
    printf("\nName : %s\n",e1.fname);
    
    printf("\nThe details of Employee 1 are :\n");
    printf("Code : %d",e2.code);
    printf("\nSalary : %0.3f",e2.salary);
    printf("\nName : %s\n",e2.fname);
    
    printf("\nThe details of Employee 3 are :\n");
    printf("Code : %d",e3.code);
    printf("\nSalary : %0.3f",e3.salary);
    printf("\nName : %s\n",e3.fname);

    return 0;
}