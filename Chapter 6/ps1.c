// Program to print address of a variable and using same print value of variable

#include<stdio.h>
int main()
{
    int i=4;
    int *j;
    j =&i;
    printf("\nThe address of vairable is %u ",&i);
    printf("\nThe address of vairable is %u ",j);
    printf("\nThe value of vairable is %d ",*j);
    printf("\nThe value of vairable is %d ",*(&i));

    return 0;
}