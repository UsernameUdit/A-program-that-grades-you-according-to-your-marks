#include <stdio.h>

int main()
{
    int marks;

    printf("Please enter Your marks 0-100\n");
    scanf("%d",&marks);
    

    if (marks>=89)
    {
        printf("You have got A grade\n");
    }
    if (marks>=79)
    {
        printf("You have got B grade\n");
    }
    if (marks>=69)
    {
        printf("You have got C grade\n");
    }
    if (marks>=59)
    {
        printf("You have got D grade\n");
    }
    if (marks<=58)
    {
        printf("You have got F grade and you are failed\n");
    }
    
    
    return 0;
}