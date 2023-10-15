// Write a program to find factorial of a number using for-loop
#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("\nEnter the number till you wish to have factoiral of : ");
    scanf("%d",&n);
    if (n==1 || n==0)
    {
        fact = 1;
        printf("\nFactorial = %d ", fact);
    }
    else
    {
        for (i=n;i>1;i--)
        {
            fact=fact*i;
        }
        printf("\nFactorial = %d ", fact);
    }
    return 0;
}