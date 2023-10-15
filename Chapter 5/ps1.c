// Function to find Average of three numbers
#include<stdio.h>
int avg(int a,int b,int c);
int main()
{
    int x,y,z;
    float ans;
    printf("\nEnter the numbers :\n");
    scanf("%d\n%d\n%d",&x,&y,&z);
    ans=avg(x,y,z);
    printf("\nAverage of the above three numbers  : %0.2f",ans);
    return 0;
}
int avg(int a,int b,int c)
{
    return (a+b+c)/3;
}