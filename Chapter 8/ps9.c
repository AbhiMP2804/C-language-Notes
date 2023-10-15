//WAP to check if the character is present in the string or not.
#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0;
    char st[1000],ch;
    printf("Enter the string : ");
    gets(st);
    printf("Enter the character to check : ");
    scanf("%c",&ch);
    int len=strlen(st);
    for(int i=0;i<len;i++)
    {
        if(st[i]==ch)
        {
            printf("The character %c is present at position %d\n",ch,i);
            flag+=1;
        }
    }
    if(flag==0)
    {
        printf("The character is not present in the given string");
    }
    return 0;
}