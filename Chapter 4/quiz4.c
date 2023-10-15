// program to print n natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the last of natural number to print : ");
    scanf("%d",&n);
    for (int i=n;i;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}