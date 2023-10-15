#include <stdio.h>

int main(void) {
	char st[100];
	printf("\nEnter the string : ");
	scanf("%s",st);
	int i=0;
	char *ptr;
	ptr = &st[0];
	printf("The String is : ");
	printf("%s\n",st);
	while(*ptr !='\0')
	{
		printf("%c\t",*ptr);
		ptr++;
	}
}

