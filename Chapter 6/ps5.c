// WAP to print value of a variable i using "pointer-to-pointer" type of variable
#include<stdio.h>
int main()
{
    int i=8;
    int *j;
    int **k;
    j=&i;
    k=&j;

    printf("\nThe value of vairbaleis : %d",i);
    printf("\n Te value of varibable using pointer is : %u",*j);
    printf("\nThe value of variable using pointer-to-pointer is : %u",*(*k));
    return 0;
}