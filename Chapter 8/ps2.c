// WAP to take string input with %c and %s and to check if the string are equal
#include<stdio.h>
int main()
{
    char st1[50],st[50],c;
    int i=0;
    printf("\nEnter the string using s : ");
    scanf("%s",&st);
    printf("\nEnter the string using c by characters : ");

    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        st1[i]=c;
        i++;
    }
    st[i]='\0';
    
    
    printf("\nFirst string is : %s ",st1);

    printf("\nSecond string is : %s ",st);

    return 0;  
}
