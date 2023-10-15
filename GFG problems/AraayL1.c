// WAP to Find a peak element which is not smaller than its neighbours

// Input: array[]= {5, 10, 20, 15}
// Output: 20
// Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20.

#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int array[n];
    printf("\nEnter the elements of array : \n");
    for (int i=0;i<n;i++)
    {
        scanf("\n%d",&array[i]);
    }

    printf("\nThe elements of array are : \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }

    for (int i=1;i<n;i++)
    {
        if (array[i]>array[i+1] || array[i]>array[i-1])
        {
            printf("\n%d is peak element",array[i]);
        }
    }
    return 0;


}