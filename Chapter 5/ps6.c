// Write a recursive function to sum first n natural numbers 

#include<stdio.h>
int sums(int n);
int main()
{
    int x,f;
    printf("Enter the number you wish to have sum upto : ");
    scanf("%d",&x);
    f=sums(x);
    printf("The sum is %d ", f);
    return 0;
}

int sums(int n)
{
    if (n!=0)
    {
        return n+sums(n-1);
    }
    else
    {
        return n;
    }
}