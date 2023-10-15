#include <stdio.h>
// Program to calculate simple interest

int main()
{
    int p,t;
    float r;
    printf("Enter the principal Amount = ");
    scanf("%d",&p);
    printf("Enter the Time period of Loan = ");
    scanf("%d",&t);
    printf("Enter the rate of interest = ");
    scanf("%f",&r);
    printf("Simple Interest = %0.2f",(p*r*t)/100);
    return 0;

}