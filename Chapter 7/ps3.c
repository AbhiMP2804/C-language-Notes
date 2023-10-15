// Create an array of 10 numbers and store multiplication table of 5 in it
#include<stdio.h>
int main()
{
    int arr[10];
    for (int i=0;i<10;i++)
    {
        arr[i]=5*(i+1);
    }
    printf("\nThe elements of array are : ");
    for (int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}