// WAP to perform operations on pointers
#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    printf("\nThe value of pointer to A before adding 1 %u ",pa);
    pa=pa+1;
    printf("\nThe value of pointer to A after adding 1 %u ",pa);

    printf("\nThe value of pointer to B before adding 1 %u ",pb);
    pb=pb-1;
    printf("\nThe value of pointer to B after adding 1 %u ",pb);

    printf("\nThe value of pointer to B before removing pa %u ",pb);
    pb=pb-pa;
    printf("\nThe value of pointer to B after removing pa %u ",pb);

    if (pa==pb)
    {
        printf("\nEqual");
    }
    else
    {
        printf("\nFalse");
    }
    return 0;
}