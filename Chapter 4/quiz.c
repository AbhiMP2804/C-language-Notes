// Program to print natural nos bet 10-20 with initial counter set to 0 
#include<stdio.h>
int main()
{
    int i=0;
    while (i<20)
    {  
        if (i>10)
        {
            printf("%d\n",i);
            i++;
        }
        else
        {
            i++;
            continue;
        }
    }
    return 0;
}