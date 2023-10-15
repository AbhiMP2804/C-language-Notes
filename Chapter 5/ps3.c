// Write a program to find force of attraction 
#include<stdio.h>
float fa(float m);
int main()
{
    float x,mass;
    printf("\nEnter the mass of object(in kgs) = ");
    scanf("%f",&mass);
    x=fa(mass);
    printf("\nThe Force of attraction is : %0.2f Newton",x);
    return 0;
}

float fa(float m)
{
    return m*9.8;
}