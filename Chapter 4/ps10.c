// Write a program to check wheather a given number is prime or not using loops
#include<stdio.h>
int main()
{
    int i=1,n,prime;
    printf("\nEnter the number till you wish to check : ");
    scanf("%d",&n);
    
    for (i;i<=n;i++)
    {
        if (n%i==0)
        {
            prime=0;
        }
        else
        {
            prime=1;
        }
    }
    if (n==1)
    {
        prime=0;
    }
    if (prime==1)
    {
        printf("The given number is a prime number");
    }
    else
    {
        printf("The given number is not a prime number");
    }
    return 0;
}