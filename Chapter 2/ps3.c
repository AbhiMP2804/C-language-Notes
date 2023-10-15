
// Program to check if number is divisible by 97 or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to check : ");
    scanf("%d",&n);
    if (n%97==0)
    {
        printf("It is divisible");
    }
    else 
    {
     printf("It is not divisible");
    }
    return 0;
}