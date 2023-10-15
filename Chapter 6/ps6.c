// WAP to change the value of a variable to ten times by passing it to a function using call by value
#include<stdio.h>
int ten(int a);

int main()
{
    int i=5,x;
    printf("\nThe value of i before chnage is %d",i);
    ten(i);
    printf("\nThe value of i after chnage is %d",i);
    return 0;
}

int ten(int a)
{
    return a=a*10;

}