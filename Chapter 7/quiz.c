// WAP to collect marks of five students and print them
#include<stdio.h>
int main()
{
    int marks[5];
    printf("\nEnter the marks of students : \n");
    for (int i=0;i<5;i++)
    {
        scanf("\n%d",&marks[i]);
    }

    printf("\nThe marks of students entered are : ");
    for (int i=0;i<5;i++)
    {
        printf("\n%d",marks[i]);
    }
    return 0;


}