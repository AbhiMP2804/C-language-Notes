// WAP using function which counts the no. positive integers in an array

#include<stdio.h>
void pintinarr(int arr[],int n);
int main()
{
    int n;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of array : \n");
    for (int i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }

    printf("\nThe elements of array are : \n");
    for (int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    pintinarr(arr,n);

}

void pintinarr(int arr[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>0)
        {
            cnt+=1;
        }
    }

    printf("\n\nThe number of positive integers in the given array are : %d",cnt);
}