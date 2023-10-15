// Program to print sum of numbers occuring in a particulaar numbers table
#include <stdio.h>

int main() {
    int i,sum=0,b;
    printf("Enter the number  : ");
    scanf("%d",&b);
    for(i=1;i<11;i++)
    {
        b=8*i;
        sum+=b;
    }
    printf("%d",sum);
    return 0;
}