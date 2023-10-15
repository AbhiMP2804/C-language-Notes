// WAP to create 2-D array and take input from user and print the enteed numbers

#include<stdio.h>
int main()
{
    int students,subjects;
    printf("\nEnter the number of students : ");
    scanf("%d",&students);
    printf("\nEnter the number of subjects : ");
    scanf("%d",&subjects);
    int marks[students][subjects];

    for (int i=0;i<students;i++)
    {
        for (int j=0;j<subjects;j++)
        {
            printf("\nEnter the Marks of student %d in subject %d : ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }

    for (int i=0;i<students;i++)
    {
        for (int j=0;j<subjects;j++)
        {
            printf("\nThe Marks entered of student %d in subject %d : %d",i+1,j+1,marks[i][j]);

        }
    }
    return 0;
}