// Create an array of 10 numbers verify using pointer arithmetic that ptr+2 points to third element of the ARRAY

#include<stdio.h>
int main()
{
    int arr[10];
    int *pt_arr;
    pt_arr=&arr[0];
    printf("\nEnter the elements of array : ");
    for (int i=0;i<10;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    pt_arr=pt_arr+2;

    if (*pt_arr==arr[2])
    {
        printf("\nTrue");
    }
    else{
        printf("]nFalse");
    }
    return 0;
}