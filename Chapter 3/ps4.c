// Program to find wheather a year is Leap or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year to check : ");
    scanf("%d",&n);
    if(n%4==0)
    {
        if (n%100==0)
        {
            if(n%400==0)
            {
                printf("Leap Year");
            }
            else
            {
                printf("NOT Leap Year");
            }
        }
        else
        {
            printf("Leap Year");
        }
    }
    else
    {
       printf("NOT Leap Year"); 
    }
    
    return 0;
    
}