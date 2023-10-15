// WAP to implement stringcopy(strcpy) function

#include<stdio.h>
#include<string.h>
int main()
{
    char ost[100],cst[100];
    printf("Enter the string : ");
    gets(ost);

    strcpy(cst,ost);
    printf("\nCopied string is : ");
    puts(cst);
    return 0;
}