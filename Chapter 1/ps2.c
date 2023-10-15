#include <stdio.h>
// Program to calculate area of circle and convert the same to find area of a cylinder

int main()
{
    int r,h;
    float res;
    printf("Enter Radius = ");
    scanf("%d",&r);
    res=r*r*3.14;
    printf("Area of Circle with radius %d = %0.2f",r,res);
    printf("\nEnter Height = ");
    scanf("%d",&h);
    res=r*r*h*3.14;
    printf("Area of Cylinder with radius & Height %d & %d = %0.2f",r,h,res);
    return 0;
}