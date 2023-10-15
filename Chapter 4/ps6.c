// Program to sum first 10 natural numbers using do-while loop
#include<stdio.h>
int main()
{
    int i=1,n,sum;
    printf("Enter the number till you wish to have sum : ");
    scanf("%d",&n);
    do
    {
        sum = sum +i;
        i++;
    }while(i<=n);
    printf("\nThe sum of first %d natural numbers is %d",n,sum);
    return 0;
}