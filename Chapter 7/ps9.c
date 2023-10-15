// Create a 3-D array and print address of its elements

#include<stdio.h>
int main()
{
    int x,y,z;
    printf("\nEnter the size of array : ");
    scanf("%d %d %d",&x,&y,&z);
    int array[x][y][z];
    printf("\nEnter the elements of array : \n");
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            for (int k=0;k<z;k++)
            {
                scanf("%d\n",&array[i][j][k]);
            }
        }
    }
    
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            for (int k=0;k<z;k++)
            {
                printf("\nThe address of element arr[%d][%d][%d] is : %u ",i,j,k,&array[i][j][k]);
            }
        }
    }

    return 0;
    
    
}