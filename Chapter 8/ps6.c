// WAP to encrypt the entered string
#include<stdio.h>
#include<string.h>
// void encrt(char *ptr);
int main()
{
    char st[100];
    printf("Enter the string : ");
    gets(st);
    int lng = strlen(st);
    for(int i=0;i<lng;i++)
    {
        // char ch=st[i];
        st[i]+=1;
    }
    printf("Encrypted string is : %s",st);

    
    return 0;

}


// void encrt(char *ptr)
// {
//     for(int i=0;i<100;i++)
//     {
//         char ch=*ptr;
//         printf("%c",++ch);
//         ptr+=1;
//     }
// }