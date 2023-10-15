// WAP to decrypt the entered string
#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    printf("Enter the string to decrypt : ");
    gets(st);
    int leng = strlen(st);
    for(int i=0;i<leng;i++)
    {
        st[i]=st[i]-1;
    }
    printf("The decrypted text is : %s",st);
    return 0;
}