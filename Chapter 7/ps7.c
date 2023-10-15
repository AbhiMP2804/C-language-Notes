// WAP to create an array of size 3*10 which stores multiplicaation tables of 2,7,& 9
#include<stdio.h>
int main()
{
    int array[3][10];
    for(int i=0;i<10;i++)
    {
        array[0][i]=3*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        array[1][i]=7*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        array[2][i]=9*(i+1);
    }

    printf("\nThe elements of array are : ");
    for (int i=0;i<3;i++)
    {
        printf("\n");
        for (int j=0;j<10;j++)
        {
            printf("%d\t",array[i][j]);
        }
    }
    return 0;
}