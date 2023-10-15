// Write your own version of stringlength function
#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    printf("Enter the string : ");
    scanf("%s",&st);
    int lgth = strlen(st);
    printf("The length of given string is %d ",lgth);

}