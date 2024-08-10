#include <stdio.h>
int main()
{
    char Grade;
    int marks;
    printf("enter your grade\n");
    scanf("%d",&marks);
    if (marks <= 100 && marks >= 90)
    {
        Grade = 'A';
    }
    else if (marks < 90 && marks >= 80)
    {
        Grade = 'B';
    }
    else if (marks < 80 && marks >= 70)
    {
        Grade = 'C';
    }
    else if (marks < 70 && marks >= 60)
    {
        Grade = 'D';
    }
    else if (marks < 60 && marks >= 50)
    {
        Grade = 'E';
    }
    else
    {
        Grade = 'F';
    }
    printf("Grade : %c\n", Grade);
    return 0;
}