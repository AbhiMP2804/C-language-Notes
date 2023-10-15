// Program to find greatest of 4 numbers entered bu user
#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("Enter 1 Number : ");
    scanf("%d",&i);
    printf("\nEnter 2 Number : ");
    scanf("%d",&j);
    printf("\nEnter 3 Number : ");
    scanf("%d",&k);
    printf("\nEnter 4 Number : ");
    scanf("%d",&l);
    if (i>j & i>k & i>l)
    {
        printf("The greatest is %d",i);
    }
    else if (j>i & j>k & j>l)
    {
        printf("The greatest is %d",j);
    }
    else if (k>i & k>j &k>l)
    {
        printf("The greatest is %d",k);
    }
    else
    {
        printf("The greatest is %d",l);
    }
    
    
   
    return 0;

}