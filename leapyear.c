#include <stdio.h>
int main()
{
    int yr;
    printf("enter year:\n");
    scanf("%d",&yr);
    if(yr%4==0)
    {
        printf("\nit is a leap year\n%d");
    }
    else
    {
        printf("\nit is not a leap year\n");
    }
}