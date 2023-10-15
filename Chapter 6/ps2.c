// print address of a variable and then pass it to a function and again print addresss

#include<stdio.h>
void fun(int a);
int main()
{
    int i=4;
    printf("\nThe address of a variable before passing to a function is : %u",&i);
    fun(i);
    return 0;
}

void fun(int a)
{
    printf("\nThe address of a variable after passing to a function is : %u",&a);
    
}