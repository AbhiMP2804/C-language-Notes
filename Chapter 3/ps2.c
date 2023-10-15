// Program to check if a student is pass or not in 3 subjects.If it is required to score more than 40% overall and 33% in indivisual subjects.
// Assuming each subject to be of total marks 100
#include<stdio.h>
int main()
{
    int x,y,z,total;
    float per;
    printf("Enter the marks obtained in Subject 1 : ");
    scanf("%d",&x);
    printf("Enter the marks obtained in Subject 2 : ");
    scanf("%d",&y);
    printf("Enter the marks obtained in Subject 3 : ");
    scanf("%d",&z);
    total = x+y+z;
    per = total/3;
    printf("Your percentage is %f",per);
    if (per>=40 && x>=33 && y>=33 && z>=33)
    {
        printf("\nCongratulations Your have PASSED !!");
    }
    else
    {
        printf("\nSorry you have FAILED");
    }
    return 0;

}