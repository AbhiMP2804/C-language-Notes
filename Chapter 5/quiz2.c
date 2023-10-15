// Calculate the area of a square using the inbuilt function
#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("\nEnter the length of side of a square : ");
    scanf("%d",&n);
    printf("\nThe area of square is : %0.2f",pow(n,2));
    return 0;
}