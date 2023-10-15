// WAP to revcerse the array elements
#include<stdio.h>
void revarr(int arr[],int n);
int main()
{
    int n;
    printf("\nEnter the size of array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of array :");
    for (int i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    
    printf("\nThe elements of array are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    revarr(arr,n);
}

void revarr(int arr[],int n)
{
    int rarr[n];
    for (int i=n-1;i>=0;i--)
    {
        rarr[i]=arr[n-i-1];
    }

    printf("\nThe elements of array after reversing are :\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t",rarr[i]);
    }
    
}