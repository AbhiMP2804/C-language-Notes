// Question 7 using customised input from the user
#include<stdio.h>
void printtable(int *multable,int num,int n);
int main()
{
    int x,y,n;
    printf("\nEnter the size of array : ");
    scanf("%d %d",&x,&y);
    int multable[x][y];
    for (int i=0;i<x;i++)
    {
        printf("\nEnter the number you wish to have at %d row  : ",i+1);
        scanf("%d",&n);
        printtable(multable[i],n,10);

    }

    printf("\nThe elements of array are : ");
    for (int i=0;i<3;i++)
    {
        printf("\n");
        for (int j=0;j<10;j++)
        {
            printf("%d\t",multable[i][j]);
        }
    }
    return 0;
}

void printtable(int *multable,int num,int n)
{
    for (int i=0;i<n;i++)
    {
        multable[i]=num*(i+1);
    }
}
