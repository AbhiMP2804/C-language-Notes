#include <stdio.h>
// Program to convert celcius to farenhit


int main()
{
    float c,f;
    printf("Enter temperature in Celcius = ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%0.2f degree celcius in degree Farenite is %0.2f",c,f);
    return 0;
    
}