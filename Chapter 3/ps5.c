// Program to find wheather a character entered by the user is lowercase or upper case
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character to check : ");
    scanf("%c",&ch);
   if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;

}