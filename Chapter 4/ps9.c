// Write a program to find factorial of a number using while-loop
#include<stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("\nEnter the number till you wish to have factoiral of : ");
    scanf("%d",&n);
    i=n;
    if (n==1 || n==0)
    {
        fact = 1;
        printf("\nFactorial = %d ", fact);
    }
    else
    {
        while(i>1)
        {
            fact=fact*i;
            i--;
        }
        printf("\nFactorial = %d ", fact);
    }
    return 0;
}