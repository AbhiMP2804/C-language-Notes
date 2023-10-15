// Program to print multiplication tale of a number

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number whose table you wish to print : ");
    scanf("%d",&n);
    for (int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;


}