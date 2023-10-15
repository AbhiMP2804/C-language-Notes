// WAP which calculates the SUM and AVG of two numbers.Use pointers and print the values of sum and average in main()

#include<stdio.h>
int sumandavg(int *a,int *b );
int main()
{
    int x,y;
    float r;
    printf("\nEnter the values of two numbers : ");
    scanf("%d %d",&x,&y);
    r=sumandavg(&x,&y);
    printf("\nSUM = %0.1f",r);
    printf("\nAVG = %0.2f", r/2);
    return 0;
}

int sumandavg(int *a,int *b )
{
    int s;
    s = (*a)+(*b);
    return s;
}