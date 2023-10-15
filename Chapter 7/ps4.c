// Create an array of 10 numbers and store general input fromm user5
#include<stdio.h>
int main()
{
    int arr[10];
    printf("\nEnter the elements of array : \n");
    for (int i=0;i<10;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    printf("\nThe elements of array are : ");
    for (int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}