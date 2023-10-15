// Function to convert temperature from Celcius to Farehnite
#include<stdio.h>
void c2f(float a);
void main()
{
    float c;
    printf("\nEnter the temperature in Celcius : ");
    scanf("%f",&c);
    c2f(c);
}
void c2f(float a)
{
    float f;
    f=((a*9)/5)+32;
    printf("\nCorresponding Temperature in Farehnite is : %0.2f",f);
}