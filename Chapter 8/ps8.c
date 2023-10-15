// WAP to count the occuerence of a character in the string

#include<stdio.h>
#include<string.h>
int main()
{
    char st[100],ch;
    int len,cnt=0;
    printf("Enter the string : ");
    gets(st);
    printf("Enter the character to count occurence : ");
    scanf("%c",&ch);
    len = strlen(st);
    for(int i=0;i<len;i++)
    {
        if(st[i]==ch)
        {
            cnt+=1;
        }
    }
    printf("The character %c occured for %d times",ch,cnt);

}