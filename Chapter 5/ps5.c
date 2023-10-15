// Compiler printf doesnot print in left - right order

#include<stdio.h>
int main()
{
    int a=3;
    printf("%d %d %d",a,++a,a++);
    return 0;
}
// Output : 5 5 3

#include<stdio.h>
int main()
{
    int a=3;
    printf("%d %d %d",a,a++,++a);
    return 0;
}