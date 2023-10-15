// Program to find tax payable from income amount

#include<stdio.h>
int main()
{
    float n,tax;
    printf("Enter the income in lakhs : ");
    scanf("%f",&n);
    if(n>1000000.0)
    {
        tax=0.3*(n-1000000);
        printf("Tax to be paid is %f rupees",tax);
    }
    else if (n>500000.0 & n<=1000000)
    {
        tax=0.2*(n-500000);
        printf("Tax to be paid is %f rupees",tax);
    }
    else if (n>=250000 & n<=500000.0)
    {
        tax=0.05*(n-250000);
        printf("Tax to be paid is %f rupees",tax);
    }
    else
    {
       printf("Tax is not to be paid as income is less than 2.5 lakhs"); 
    }
    
    return 0;
    
}