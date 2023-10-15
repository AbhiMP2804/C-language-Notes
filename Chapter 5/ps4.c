// Write a program using reurssion to find n^th element of a fibonacci series
#include<stdio.h>
int fibo(int n);
int main()
{
    int x;
    printf("\nEnter number till which fibonacci series is required : ");
    scanf("%d",&x);
    // for (int i=0;i<x;i++)
    // {
    //     printf("%d ",fibo(i));
    // }
    printf("%d ",fibo(x-1));
    return 0;
}

int fibo(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
    
}