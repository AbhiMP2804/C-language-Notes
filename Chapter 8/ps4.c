// WAP to slice a string from position m to n entered by user
#include<stdio.h>
int main()
{
    char st[100];
    printf("Enter the String : ");
    gets(st);
    int m,n;
    printf("Enter the starting and ending position of string : ");
    scanf("%d %d",&m,&n);
    for(int i=m;i<n;i++)
    {
        printf("%c",st[i]);
    }
    return 0;
}